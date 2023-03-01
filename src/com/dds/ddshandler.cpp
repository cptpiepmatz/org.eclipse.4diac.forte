#include "ddshandler.h"

using namespace forte::com_infra;

DEFINE_HANDLER(CDDSHandler)

CDDSHandler::CDDSHandler(CDeviceExecution& pa_poDeviceExecution) :
  CExternalEventHandler(pa_poDeviceExecution), 
  DataReaderListener() {}

CDDSHandler::~CDDSHandler() {}

void CDDSHandler::on_data_available(DataReader* reader) {
  std::cout << "called" << std::endl;
  std::string topicName = reader->get_topicdescription()->get_name();
  CDDSComLayer* comLayer = this->getTopicLayer(topicName);
  if (comLayer == nullptr) return;

  if (comLayer->recvData(nullptr, 0) != EComResponse::e_Nothing) {
    this->startNewEventChain(comLayer->getCommFB());
  }
}

void CDDSHandler::registerTopic(const std::string topicName, CDDSComLayer* comLayer) {
  this->topicLayer[topicName] = comLayer;
}

void CDDSHandler::unregisterTopic(const std::string topicName) {
  this->topicLayer.erase(topicName);
}

CDDSComLayer* CDDSHandler::getTopicLayer(const std::string topicName) {
  return this->topicLayer[topicName];
}
