#include <boost/regex.h>

#include "ddslayer.h"
#include "ddshandler.h"

#include "basecommfb.h"
#include "comtypes.h"

// according to https://design.ros2.org/articles/topic_and_service_names.html
// square brackets, semicolons and colons are not valid parts of valid dds 
// topic, therefore the following style can be used 
//
// ID data input for this: 
// dds[topic_name:topic_type] for publisher and subscriber
// dds[topic_name:topic_type;topic_name:topic_type] for clients and servers
// clients: left-pub right-sub => send request, await response
// server: left-sub right-pub => await request, send response

using namespace forte::com_infra;

EComResponse CDDSComLayer::openConnection(char *pa_acLayerParameter) {

  this->m_eCommServiceType = getCommFB()->getComServiceType();

  std::string layerParams = pa_acLayerParameter;
  std::string left, right;
  std::string leftTopicName, leftTopicType, rightTopicName, rightTopicType;

  // split the string on ";"
  size_t semicolon_pos = layerParams.find(";");
  if (semicolon_pos != std::string::npos) {
    left = layerParams.substr(0, semicolon_pos);
    right = layerParams.substr(semicolon_pos + 1);
  }
  else left = layerParams;

  // split each substring on ":"
  size_t colon_pos = left.find(":");
  if (colon_pos != std::string::npos) {
    leftTopicName = left.substr(0, colon_pos);
    leftTopicType = left.substr(colon_pos + 1);
  }

  colon_pos = right.find(":");
  if (colon_pos != std::string::npos) {
    rightTopicName = right.substr(0, colon_pos);
    rightTopicType = right.substr(colon_pos + 1);
  }

  DEVLOG_DEBUG(("[DDS Layer] Left topic name is '" + leftTopicName + "'.\n").c_str());
  DEVLOG_DEBUG(("[DDS Layer] Left topic type is '" + leftTopicType + "'.\n").c_str());
  DEVLOG_DEBUG(("[DDS Layer] Right topic name is '" + rightTopicName + "'.\n").c_str());
  DEVLOG_DEBUG(("[DDS Layer] Right topic type is '" + rightTopicType + "'.\n").c_str());

  // Clients and servers are needed to implement ROS services correctly.
  // They compose of a publisher and subscriber at the same time and share data 
  // between them.

  switch (this->m_eCommServiceType) {

    case EComServiceType::e_Publisher:
      this->m_sPubTopicName = leftTopicName;
      this->m_sPubTopicType = leftTopicType;
      if (!this->checkIO("Publisher", 1, 0)) return EComResponse::e_InitInvalidId;
      if (!this->openPublisherConnection()) return EComResponse::e_InitInvalidId;
      return EComResponse::e_InitOk;

    case EComServiceType::e_Subscriber:
      this->m_sSubTopicName = leftTopicName;
      this->m_sSubTopicType = leftTopicType;
      if (!this->checkIO("Subscriber", 0, 1)) return EComResponse::e_InitInvalidId;
      if (!this->openSubscriberConnection()) return EComResponse::e_InitInvalidId;
      return EComResponse::e_InitOk;

    case EComServiceType::e_Server:
      this->m_sSubTopicName = leftTopicName;
      this->m_sSubTopicType = leftTopicType;
      this->m_sPubTopicName = rightTopicName;
      this->m_sPubTopicType = rightTopicType;
      this->m_pRequestInfos = new std::queue<RequestInfo>();
      if (!this->checkIO("Server", 1, 1)) return EComResponse::e_InitInvalidId;
      if (!this->openSubscriberConnection()) return EComResponse::e_InitInvalidId;
      this->m_pSubscriber->setIdentityQueue(this->m_pRequestInfos);
      if (!this->openPublisherConnection()) return EComResponse::e_InitInvalidId;
      this->m_pPublisher->setIdentityQueue(this->m_pRequestInfos);
      return EComResponse::e_InitOk;

    case EComServiceType::e_Client:
      this->m_sPubTopicName = leftTopicName;
      this->m_sPubTopicType = leftTopicType;
      this->m_sSubTopicName = rightTopicName;
      this->m_sSubTopicType = rightTopicType;
      if (!this->checkIO("Client", 1, 1)) return EComResponse::e_InitInvalidId;
      if (!this->openPublisherConnection()) return EComResponse::e_InitInvalidId;
      if (!this->openSubscriberConnection()) return EComResponse::e_InitInvalidId;
      return EComResponse::e_InitOk;
  }
}

bool CDDSComLayer::checkIO(          
  std::string paDisplayName, 
  unsigned int paSDCount, 
  unsigned int paRDCount
) {
  auto fb = this->getCommFB();

  // check for valid SD count
  if (fb->getNumSD() != paSDCount) {
    DEVLOG_ERROR((
      "[DDS Layer] " + 
      paDisplayName + 
      "s need exactly " + 
      std::to_string(paSDCount) + 
      " SD input.\n"
    ).c_str());
    return false;
  }

  // check for valid type on SD
  if (paSDCount && fb->getSDs()->getDataTypeID() != CIEC_ANY::EDataTypeID::e_STRUCT) {
    DEVLOG_ERROR("[DDS Layer] Only STRUCT is supported on SD input.");
    return false;
  }

  // check for valid RD count
  if (this->getCommFB()->getNumRD() != paRDCount) {
    DEVLOG_ERROR((
      "[DDS Layer] " + 
      paDisplayName + 
      "s need exactly " + 
      std::to_string(paRDCount) + 
      " RD output.\n"
    ).c_str());
    return false;
  }

  // check for valid type on RD
  if (paRDCount && fb->getRDs()->getDataTypeID() != CIEC_ANY::EDataTypeID::e_STRUCT) {
    DEVLOG_ERROR("[DDS Layer] Only STRUCT is supported on RD output.");
    return false;
  }

  return true;
}

bool CDDSComLayer::openPublisherConnection() {
  CIEC_STRUCT* data = (CIEC_STRUCT *) this->getCommFB()->getSDs();
  
  this->m_pPublisher = CDDSPubSub::selectPubSub(this->m_sPubTopicName, this->m_sPubTopicType);
  if (this->m_pPublisher == nullptr) {
    DEVLOG_ERROR("[DDS Layer] Topic type unknown.\n");
    return false;
  }
  if (!this->m_pPublisher->validateType(data->getStructTypeNameID())) {
    DEVLOG_ERROR("[DDS Layer] Data type not correct.\n");
    return false;
  }
  if (!this->m_pPublisher->initPublisher()) {
    DEVLOG_ERROR("[DDS Layer] Could not initialize publisher.\n");
    return false;
  }

  return true;
}

bool CDDSComLayer::openSubscriberConnection() {
  CIEC_STRUCT* data = (CIEC_STRUCT *) this->getCommFB()->getRDs();
  
  this->m_pSubscriber = CDDSPubSub::selectPubSub(this->m_sSubTopicName, this->m_sSubTopicType);
  if (this->m_pSubscriber == nullptr) {
    DEVLOG_ERROR("[DDS Layer] Topic type unknown.\n");
    return false;
  }
  if (!this->m_pSubscriber->validateType(data->getStructTypeNameID())) {
    DEVLOG_ERROR("[DDS Layer] Data type not correct.\n");
    return false;
  }
  if (!this->m_pSubscriber->initSubscriber(&this->getExtEvHandler<CDDSHandler>())) {
    DEVLOG_ERROR("[DDS Layer] Could not initialize subscriber.\n");
    return false;
  }

  this->getExtEvHandler<CDDSHandler>().registerTopic(this->m_sSubTopicName, this);

  return true;
}

void CDDSComLayer::closeConnection() {
  if (this->m_pPublisher != nullptr) delete this->m_pPublisher;
  if (this->m_pSubscriber != nullptr) {
    delete this->m_pSubscriber;
    this->getExtEvHandler<CDDSHandler>().unregisterTopic(this->m_sSubTopicName);
  }
  if (this->m_pRequestInfos != nullptr) delete this->m_pRequestInfos;
}

EComResponse CDDSComLayer::sendData(void *paData, unsigned int paSize) {
  CIEC_STRUCT* data = (CIEC_STRUCT *) paData;
  char sendDebug[255] = {};
  data->toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG((
    "[DDS Layer] Sending data on '" + 
    this->m_sPubTopicName + 
    "': " + 
    sendDebug + 
    "\n"
  ).c_str());
  switch (this->m_pPublisher->publish(data)) {
    case false: return EComResponse::e_ProcessDataSendFailed;
    case true: return EComResponse::e_ProcessDataOk;
  }
}

EComResponse CDDSComLayer::recvData(const void *paData, unsigned int paSize) {
  
  // receive data via the subscriber
  
  CIEC_STRUCT ciecStruct = this->m_pSubscriber->receive();
  char recvDebug[255] = {};
  ciecStruct.toString(recvDebug, sizeof(recvDebug));
  DEVLOG_DEBUG((
    "[DDS Layer] Received data on '" + 
    this->m_sSubTopicName + 
    "': " + 
    recvDebug + 
    "\n"
  ).c_str());
  this->getCommFB()->getRDs()->setValue(ciecStruct);
  this->m_poFb->interruptCommFB(this);

  return EComResponse::e_ProcessDataOk;
}

EComResponse CDDSComLayer::processInterrupt() {
  // we don't need to do anything here (only 1 layer)
  return EComResponse::e_ProcessDataOk;
}
