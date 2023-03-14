/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_ID
 *** Description: Function Block to Construct DDS COM ID
 *** Version:
***     1.0: 2023-03-08/Tim Hesse -  - 
 *************************************************************************/

#include "CONSTRUCT_DDS_ID.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CONSTRUCT_DDS_ID_gen.cpp"
#endif

#include <boost/algorithm/string.hpp>


DEFINE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_ID, g_nStringIdCONSTRUCT_DDS_ID)

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataInputNames[] = {g_nStringIdROS2_TOPIC, g_nStringIdROS2_TYPE, g_nStringIdTOPIC_PREFIX, g_nStringIdTYPE_NAMESPACE, g_nStringIdTYPE_SUFFIX};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataOutputNames[] = {g_nStringIdID};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TDataIOID FORTE_CONSTRUCT_DDS_ID::scm_anEIWith[] = {0, 1, 2, 3, 4, 255};
const TForteInt16 FORTE_CONSTRUCT_DDS_ID::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_CONSTRUCT_DDS_ID::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_CONSTRUCT_DDS_ID::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CONSTRUCT_DDS_ID::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_CONSTRUCT_DDS_ID::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventREQID:
      // constructing the topic name
      std::string topic;
      const std::string ros2Topic = this->st_ROS2_TOPIC().getValue();
      const std::string topicPrefix = this->st_TOPIC_PREFIX().getValue();
      topic = topicPrefix + "/" + ros2Topic;

      // constructing the type name
      std::string type;
      const std::string ros2Type = this->st_ROS2_TYPE().getValue();
      const std::string separator = "/";
      std::vector<std::string> tokens;
      boost::split(tokens, ros2Type, boost::is_any_of(separator));
      const std::string appNamespace = tokens[0];
      const std::string appType = tokens[1];
      const std::string typeNamespace = this->st_TYPE_NAMESPACE().getValue();
      const std::string typeSuffix = this->st_TYPE_SUFFIX().getValue();
      type = appNamespace + "::" + typeNamespace + "::dds_::" + appType + typeSuffix;
      
      // assign constructed id to output 
      std::string id = "dds[" + topic + ":" + type + "]";
      this->st_ID() = CIEC_WSTRING(id.c_str());
      this->sendOutputEvent(scm_nEventCNFID);
      break;
  }
}


