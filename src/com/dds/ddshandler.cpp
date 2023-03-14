#include "ddshandler.h"

using namespace forte::com_infra;

DEFINE_HANDLER(CDDSHandler)

CDDSHandler::CDDSHandler(CDeviceExecution& pa_poDeviceExecution) :
  CExternalEventHandler(pa_poDeviceExecution) {}

CDDSHandler::~CDDSHandler() {}

void CDDSHandler::onDataAvailable(DataReader* m_pReader) {
  std::string topicName = m_pReader->get_topicdescription()->get_name();
  CDDSComLayer* comLayer = this->getTopicLayer(topicName);
  if (comLayer == nullptr) return;

  if (comLayer->recvData(nullptr, 0) != EComResponse::e_Nothing) {
    this->startNewEventChain(comLayer->getCommFB());
  }
}

void CDDSHandler::registerTopic(const std::string m_sTopicName, CDDSComLayer* comLayer) {
  this->mTopicLayer[m_sTopicName] = comLayer;
}

void CDDSHandler::unregisterTopic(const std::string m_sTopicName) {
  this->mTopicLayer.erase(m_sTopicName);
}

CDDSComLayer* CDDSHandler::getTopicLayer(const std::string m_sTopicName) {
  return this->mTopicLayer[m_sTopicName];
}
