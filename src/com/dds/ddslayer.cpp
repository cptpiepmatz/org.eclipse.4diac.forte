#include "ddslayer.h"
#include "ddshandler.h"

#include "basecommfb.h"
#include "comtypes.h"

// according to https://design.ros2.org/articles/topic_and_service_names.html
// square brackets and colons are not valid parts of valid dds topic, therefore 
// the following style can be used 
//
// ID data input for this: dds[topic_name:topic_type]

using namespace forte::com_infra;

CDDSComLayer::CDDSComLayer(
  CComLayer* paUpperLayer, 
  CBaseCommFB* paComFB
) : CComLayer(paUpperLayer, paComFB), publisher(nullptr) {
  this->m_TopicName = "";
  this->m_TopicType = "";
}

CDDSComLayer::~CDDSComLayer() {}

EComResponse CDDSComLayer::openConnection(char *pa_acLayerParameter) {

  this->m_eCommServiceType = getCommFB()->getComServiceType();

  // extract topic name, before the colon and topic type, 
  // after the colon from the parameters
  std::string layerParams = pa_acLayerParameter;
  int colon = static_cast<int>(layerParams.find_first_of(":"));

  this->m_TopicName = layerParams.substr(0, colon);
  DEVLOG_DEBUG(("[DDS Layer] Topic name is '" + this->m_TopicName + "'.\n").c_str());

  this->m_TopicType = layerParams.substr(colon + 1);
  DEVLOG_DEBUG(("[DDS Layer] Topic type is '" + this->m_TopicType + "'.\n").c_str());

  switch (this->m_eCommServiceType) {
    case EComServiceType::e_Publisher:
      return this->openPublisherConnection();
    case EComServiceType::e_Subscriber:
      return this->openSubscriberConnection();
    case EComServiceType::e_Server:
      DEVLOG_ERROR("[DDS Layer] Server are not supported.\n");
      return EComResponse::e_InitInvalidId;
    case EComServiceType::e_Client:
      DEVLOG_ERROR("[DDS Layer] Clients are not supported.\n");
      return EComResponse::e_InitInvalidId;
  }
}

EComResponse CDDSComLayer::openPublisherConnection() {
  if (this->getCommFB()->getNumSD() != 1) {
    DEVLOG_ERROR("[DDS Layer] Publishers need exactly 1 SD input.\n");
    return EComResponse::e_InitInvalidId;
  }

  if (this->getCommFB()->getSDs()->getDataTypeID() != CIEC_ANY::EDataTypeID::e_STRUCT) {
    DEVLOG_ERROR("[DDS Layer] Only STRUCT is supported.\n");
    return EComResponse::e_InitInvalidId;
  }

  CIEC_STRUCT* data = (CIEC_STRUCT *) this->getCommFB()->getSDs();
  
  this->publisher = CDDSPubSub::selectPubSub(this->m_TopicName, this->m_TopicType);
  if (this->publisher == nullptr) {
    DEVLOG_ERROR("[DDS Layer] Topic type unknown.\n");
    return EComResponse::e_InitInvalidId;
  }
  if (!this->publisher->validateType(data->getStructTypeNameID())) {
    DEVLOG_ERROR("[DDS Layer] Data type not correct.\n");
    return EComResponse::e_InitInvalidId;
  }
  if (!this->publisher->initPublisher()) {
    DEVLOG_ERROR("[DDS Layer] Could not initialize publisher.\n");
    return EComResponse::e_InitInvalidId;
  }

  return EComResponse::e_InitOk;
}

EComResponse CDDSComLayer::openSubscriberConnection() {
  if (this->getCommFB()->getNumRD() != 1) {
    DEVLOG_ERROR("[DDS Layer] Subscribers need exactly 1 RD output.\n");
    return EComResponse::e_InitInvalidId;
  }

  if (this->getCommFB()->getRDs()->getDataTypeID() != CIEC_ANY::EDataTypeID::e_STRUCT) {
    DEVLOG_ERROR("[DDS Layer] Only STRUCT is supported.\n");
    return EComResponse::e_InitInvalidId;
  }

  CIEC_STRUCT* data = (CIEC_STRUCT *) this->getCommFB()->getRDs();
  
  this->subscriber = CDDSPubSub::selectPubSub(this->m_TopicName, this->m_TopicType);
  if (this->subscriber == nullptr) {
    DEVLOG_ERROR("[DDS Layer] Topic type unknown.\n");
    return EComResponse::e_InitInvalidId;
  }
  if (!this->subscriber->validateType(data->getStructTypeNameID())) {
    DEVLOG_ERROR("[DDS Layer] Data type not correct.\n");
    return EComResponse::e_InitInvalidId;
  }
  if (!this->subscriber->initSubscriber(&this->getExtEvHandler<CDDSHandler>())) {
    DEVLOG_ERROR("[DDS Layer] Could not initialize subscriber.\n");
    return EComResponse::e_InitInvalidId;
  }

  this->getExtEvHandler<CDDSHandler>().registerTopic(this->m_TopicName, this);

  return EComResponse::e_InitOk;
}

void CDDSComLayer::closeConnection() {
  if (this->publisher != nullptr) delete this->publisher;
  if (this->subscriber != nullptr) {
    delete this->subscriber;
    this->getExtEvHandler<CDDSHandler>().unregisterTopic(this->m_TopicName);
  }
}

EComResponse CDDSComLayer::sendData(void *paData, unsigned int paSize) {
  CIEC_STRUCT* data = (CIEC_STRUCT *) paData;
  switch (this->publisher->publish(data)) {
    case false: return EComResponse::e_ProcessDataSendFailed;
    case true: return EComResponse::e_ProcessDataOk;
  }
}

EComResponse CDDSComLayer::recvData(const void *paData, unsigned int paSize) {
  
  // receive data via the subscriber
  
  CIEC_STRUCT ciecStruct = this->subscriber->receive();
  this->getCommFB()->getRDs()->setValue(ciecStruct);
  this->m_poFb->interruptCommFB(this);

  return EComResponse::e_ProcessDataOk;
}

EComResponse CDDSComLayer::processInterrupt() {
  // we don't need to do anything here (only 1 layer)
  return EComResponse::e_ProcessDataOk;
}
