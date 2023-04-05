/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_STATUS
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER_STATUS.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_STATUS_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER_STATUS, g_nStringIdACTION_SERVER_STATUS)

const CStringDictionary::TStringId FORTE_ACTION_SERVER_STATUS::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdPUB_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_STATUS::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdROS2_action_msgs__msg__GoalStatusArray};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_STATUS::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_STATUS::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_ACTION_SERVER_STATUS::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_STATUS::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_ACTION_SERVER_STATUS::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_STATUS::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ACTION_SERVER_STATUS::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER_STATUS::scm_astInternalFBs[] = {
  {g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdDDS_PUB, g_nStringIdDDS_PUB}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_STATUS::scm_astParamters[] = {
  {0, g_nStringIdPREFIX, "\"rt\""},
  {0, g_nStringIdSUFFIX, "\"/_action/status\""},
  {1, g_nStringIdTYPE, "\"action_msgs::msg::dds_::GoalStatusArray_\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_STATUS::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINIT), 1},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_STATUS::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdROS2_TOPIC), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdSTATUS), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdDDS_TOPIC), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTOPIC), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdPUB_DATA), 1},
};

const SCFB_FBNData FORTE_ACTION_SERVER_STATUS::scm_stFBNData = {
  2, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  6, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



