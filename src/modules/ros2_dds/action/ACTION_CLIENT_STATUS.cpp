/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_CLIENT_STATUS
 *** Description: 
 *** Version:
***     1.0: 2023-03-23/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_CLIENT_STATUS.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_CLIENT_STATUS_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_CLIENT_STATUS, g_nStringIdACTION_CLIENT_STATUS)

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_STATUS::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_STATUS::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_STATUS::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdSUB_DATA};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_STATUS::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdROS2_action_msgs__msg__GoalStatusArray};

const TForteInt16 FORTE_ACTION_CLIENT_STATUS::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_CLIENT_STATUS::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TForteInt16 FORTE_ACTION_CLIENT_STATUS::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_CLIENT_STATUS::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_ACTION_CLIENT_STATUS::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_CLIENT_STATUS::scm_astInternalFBs[] = {
  {g_nStringIdDDS_SUB, g_nStringIdDDS_SUB},
  {g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC}
};

const SCFB_FBParameter FORTE_ACTION_CLIENT_STATUS::scm_astParamters[] = {
  {0, g_nStringIdTYPE, "\"action_msgs::msg::dds_::GoalStatusArray_\""},
  {1, g_nStringIdPREFIX, "\"rt\""},
  {1, g_nStringIdSUFFIX, "\"/_action/status\""},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT_STATUS::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdRSP), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdIND), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdINIT), 0},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT_STATUS::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdROS2_TOPIC), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdDDS_TOPIC), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdTOPIC), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdSUB_DATA), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_DATA), -1},
};

const SCFB_FBNData FORTE_ACTION_CLIENT_STATUS::scm_stFBNData = {
  2, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  6, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



