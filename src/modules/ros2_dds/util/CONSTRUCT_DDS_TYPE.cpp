/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_TYPE
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2023-03-14/derPi -  - 
 *************************************************************************/

#include "CONSTRUCT_DDS_TYPE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CONSTRUCT_DDS_TYPE_gen.cpp"
#endif

#include <boost/algorithm/string.hpp>


DEFINE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE)

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TYPE::scm_anDataInputNames[] = {g_nStringIdROS2_TYPE, g_nStringIdSUFFIX};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TYPE::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TYPE::scm_anDataOutputNames[] = {g_nStringIdDDS_TYPE};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TYPE::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TDataIOID FORTE_CONSTRUCT_DDS_TYPE::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_CONSTRUCT_DDS_TYPE::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TYPE::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_CONSTRUCT_DDS_TYPE::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_CONSTRUCT_DDS_TYPE::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TYPE::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CONSTRUCT_DDS_TYPE::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_CONSTRUCT_DDS_TYPE::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventREQID:
      std::string input = this->st_ROS2_TYPE().getValue();
      std::string suffix = this->st_SUFFIX().getValue();

      std::vector<std::string> tokens;
      boost::split(tokens, input, boost::is_any_of("/"));

      std::string output = tokens[0];
      for (size_t i = 1; i < tokens.size() - 1; i++) {
        output += "::" + tokens[i];
      }
      output += "::dds_::" + tokens[tokens.size() - 1];
      output += suffix;

      this->st_DDS_TYPE().assign(output.c_str(), output.length());
      sendOutputEvent(scm_nEventCNFID);
      break;
  }
}


