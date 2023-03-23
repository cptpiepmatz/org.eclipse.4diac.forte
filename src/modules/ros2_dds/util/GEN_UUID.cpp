/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: GEN_UUID
 *** Description: 
 *** Version:
***     1.0: 2023-03-23/Tim Hesse -  - 
 *************************************************************************/

#include "GEN_UUID.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "GEN_UUID_gen.cpp"
#endif

#include <iostream>

DEFINE_FIRMWARE_FB(FORTE_GEN_UUID, g_nStringIdGEN_UUID)


const CStringDictionary::TStringId FORTE_GEN_UUID::scm_anDataOutputNames[] = {g_nStringIdUUID};

const CStringDictionary::TStringId FORTE_GEN_UUID::scm_anDataOutputTypeIds[] = {g_nStringIdROS2_unique_identifier_msgs__msg__UUID};

const TForteInt16 FORTE_GEN_UUID::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_GEN_UUID::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_GEN_UUID::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_GEN_UUID::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_GEN_UUID::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_GEN_UUID::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_GEN_UUID::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventREQID:
      auto uuid = this->mGen();
      CIEC_ROS2_unique_identifier_msgs__msg__UUID ciecUUID;

      for (int i = 0; i < 16; i++) {
        ciecUUID.uuid()[i] = CIEC_SINT(uuid.data[i]);
      }

      this->st_UUID() = ciecUUID;
      this->sendOutputEvent(scm_nEventCNFID);
      break;
  }
}


