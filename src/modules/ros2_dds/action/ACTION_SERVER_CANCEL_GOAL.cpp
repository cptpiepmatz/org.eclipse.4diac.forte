/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_CANCEL_GOAL
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER_CANCEL_GOAL.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_CANCEL_GOAL_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER_CANCEL_GOAL, g_nStringIdACTION_SERVER_CANCEL_GOAL)

const CStringDictionary::TStringId FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdRES_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdROS2_action_msgs__srv__CancelGoal__Response};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdREQ_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdROS2_action_msgs__srv__CancelGoal__Request};

const TForteInt16 FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TForteInt16 FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_CANCEL_GOAL::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_ACTION_SERVER_CANCEL_GOAL::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER_CANCEL_GOAL::scm_astInternalFBs[] = {
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdSRV_SERVER, g_nStringIdSRV_SERVER}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_CANCEL_GOAL::scm_astParamters[] = {
  {3, g_nStringIdIN, "\"/_action/cancel_goal\""},
  {4, g_nStringIdTOPIC_TYPE, "\"action_msgs/srv/CancelGoal\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_CANCEL_GOAL::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdRSP), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdIND), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_CANCEL_GOAL::scm_astFannedOutEventConnections[] = {
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_CANCEL_GOAL::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdTOPIC_NAME), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdRES_DATA), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdSTATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdREQ_DATA), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1},
};

const SCFB_FBNData FORTE_ACTION_SERVER_CANCEL_GOAL::scm_stFBNData = {
  5, scm_astInternalFBs,
  8, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  9, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



