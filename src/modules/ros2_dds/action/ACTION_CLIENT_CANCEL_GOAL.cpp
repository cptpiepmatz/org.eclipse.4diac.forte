/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_CLIENT_CANCEL_GOAL
 *** Description: 
 *** Version:
***     1.0: 2023-03-23/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_CLIENT_CANCEL_GOAL.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_CLIENT_CANCEL_GOAL_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_CLIENT_CANCEL_GOAL, g_nStringIdACTION_CLIENT_CANCEL_GOAL)

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdREQ_DATA};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdROS2_action_msgs__srv__CancelGoal__Request};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdRES_DATA};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdROS2_action_msgs__srv__CancelGoal__Response};

const TForteInt16 FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astInternalFBs[] = {
  {g_nStringIdSRV_CLIENT, g_nStringIdSRV_CLIENT},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING}
};

const SCFB_FBParameter FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astParamters[] = {
  {0, g_nStringIdTOPIC_TYPE, "\"action_msgs/srv/CancelGoal\""},
  {4, g_nStringIdIN, "\"/_action/cancel_goal\""},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astFannedOutEventConnections[] = {
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 4},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdTOPIC_NAME), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdREQ_DATA), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_CLIENT, g_nStringIdRES_DATA), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1},
};

const SCFB_FBNData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_stFBNData = {
  5, scm_astInternalFBs,
  8, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  9, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



