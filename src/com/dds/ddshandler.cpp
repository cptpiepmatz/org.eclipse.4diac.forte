#include "ddshandler.h"

using namespace forte::com_infra;

DEFINE_HANDLER(CDDSHandler)

CDDSHandler::CDDSHandler(CDeviceExecution& pa_poDeviceExecution) :
  CExternalEventHandler(pa_poDeviceExecution) {}

CDDSHandler::~CDDSHandler() {}

void CDDSHandler::onDataAvailable(DataReader* pa_pReader) {
  GUID_t readerGuid = pa_pReader->guid();
  CDDSComLayer* comLayer = this->getReaderLayer(readerGuid);
  if (comLayer == nullptr) return;

  if (comLayer->recvData(nullptr, 0) != EComResponse::e_Nothing) {
    this->startNewEventChain(comLayer->getCommFB());
  }
}

void CDDSHandler::registerLayer(const GUID_t paReaderGUID, CDDSComLayer* pa_pComLayer) {
  this->mReaderLayer[paReaderGUID] = pa_pComLayer;
}

void CDDSHandler::unregisterLayer(const GUID_t paReaderGUID) {
  this->mReaderLayer.erase(paReaderGUID);
}

CDDSComLayer* CDDSHandler::getReaderLayer(const GUID_t paReaderGUID) {
  return this->mReaderLayer[paReaderGUID];
}
