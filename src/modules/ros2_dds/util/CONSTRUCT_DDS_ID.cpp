/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_ID
 *** Description: Construct ID for DDS COM FB
 *** Version:
***     1.0: 2023-03-21/Tim Hesse -  - 
 *************************************************************************/

#include "CONSTRUCT_DDS_ID.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CONSTRUCT_DDS_ID_gen.cpp"
#endif


#include <string>

DEFINE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_ID, g_nStringIdCONSTRUCT_DDS_ID)

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataInputNames[] = {g_nStringIdTOPIC_L, g_nStringIdTYPE_L, g_nStringIdTOPIC_R, g_nStringIdTYPE_R};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataOutputNames[] = {g_nStringIdID};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TDataIOID FORTE_CONSTRUCT_DDS_ID::scm_anEIWith[] = {0, 1, 255, 0, 1, 2, 3, 255};
const TForteInt16 FORTE_CONSTRUCT_DDS_ID::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anEventInputNames[] = {g_nStringIdREQ1, g_nStringIdREQ2};

const TDataIOID FORTE_CONSTRUCT_DDS_ID::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_CONSTRUCT_DDS_ID::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CONSTRUCT_DDS_ID::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_CONSTRUCT_DDS_ID::executeEvent(int pa_nEIID) {
  std::string leftTopicName, leftTopicType, rightTopicName, rightTopicType, id;
  
  switch(pa_nEIID) {
    case scm_nEventREQ1ID:
      leftTopicName = this->st_TOPIC_L().getValue();
      leftTopicType = this->st_TYPE_L().getValue();
      id = "dds[" + leftTopicName + ":" + leftTopicType + "]";
      this->st_ID().assign(id.c_str(), id.length());
      sendOutputEvent(scm_nEventCNFID);
      break;

    case scm_nEventREQ2ID:
      leftTopicName = this->st_TOPIC_L().getValue();
      leftTopicType = this->st_TYPE_L().getValue();
      rightTopicName = this->st_TOPIC_R().getValue();
      rightTopicType = this->st_TYPE_R().getValue();
      id = 
        "dds[" + 
        leftTopicName + ":" + leftTopicType +
        ";" +
        rightTopicName + ":" + rightTopicType + 
        "]";
      this->st_ID().assign(id.c_str(), id.length());
      sendOutputEvent(scm_nEventCNFID);
      break;
  }
}


