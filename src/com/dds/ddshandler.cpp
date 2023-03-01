#include "ddshandler.h"

using namespace forte::com_infra;

void CDDSHandler::registerTopic(const std::string topicName, CDDSComLayer* comLayer) {
  this->topicLayer[topicName] = comLayer;
}

void CDDSHandler::unregisterTopic(const std::string topicName) {
  this->topicLayer.erase(topicName);
}

CDDSComLayer* CDDSHandler::getTopicLayer(const std::string topicName) {
  return this->topicLayer[topicName];
}

void CDDSHandler::onDataAvailable(const std::string topicName) {
  CDDSComLayer* topicLayer = this->getTopicLayer(topicName);
  if (topicLayer == nullptr) { 
    //TODO: panic or something 
  }

  // the layer ignores the input data
  if (topicLayer->recvData(nullptr, 0) != EComResponse::e_Nothing) {
    this->startNewEventChain(topicLayer->getCommFB());
  }
}
