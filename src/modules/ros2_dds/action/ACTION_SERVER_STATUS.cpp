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
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdE_REND_3, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdMSG_PUBLISHER, g_nStringIdMSG_PUBLISHER}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_STATUS::scm_astParamters[] = {
  {3, g_nStringIdIN, "\"/_action/status\""},
  {4, g_nStringIdTOPIC_TYPE, "\"action_msgs/msg/GoalStatusArray\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_STATUS::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_STATUS::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_STATUS::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdTOPIC_NAME), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdPUB_DATA), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdSTATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
};

const SCFB_FBNData FORTE_ACTION_SERVER_STATUS::scm_stFBNData = {
  5, scm_astInternalFBs,
  8, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



