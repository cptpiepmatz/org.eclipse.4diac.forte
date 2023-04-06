/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_CLIENT
 *** Description: 
 *** Version:
***     1.0: 2023-03-21/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_CLIENT.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_CLIENT_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_CLIENT, g_nStringIdACTION_CLIENT)

const CStringDictionary::TStringId FORTE_ACTION_CLIENT::scm_anDataInputNames[] = {g_nStringIdSEND_GOAL_QI, g_nStringIdCANCEL_GOAL_QI, g_nStringIdGET_RESULT_QI, g_nStringIdFEEDBACK_QI, g_nStringIdSTATUS_QI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdSEND_GOAL_REQ_DATA, g_nStringIdCANCEL_GOAL_REQ_DATA, g_nStringIdGET_RESULT_REQ_DATA};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY, g_nStringIdROS2_action_msgs__srv__CancelGoal__Request, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT::scm_anDataOutputNames[] = {g_nStringIdSEND_GOAL_QO, g_nStringIdCANCEL_GOAL_QO, g_nStringIdGET_RESULT_QO, g_nStringIdFEEDBACK_QO, g_nStringIdSTATUS_QO, g_nStringIdSEND_GOAL_STATUS, g_nStringIdCANCEL_GOAL_STATUS, g_nStringIdGET_RESULT_STATUS, g_nStringIdFEEDBACK_STATUS, g_nStringIdSTATUS_STATUS, g_nStringIdSEND_GOAL_RES_DATA, g_nStringIdCANCEL_GOAL_RES_DATA, g_nStringIdGET_RESULT_RES_DATA, g_nStringIdFEEDBACK_DATA, g_nStringIdSTATUS_DATA};

const CStringDictionary::TStringId FORTE_ACTION_CLIENT::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY, g_nStringIdROS2_action_msgs__srv__CancelGoal__Response, g_nStringIdANY, g_nStringIdANY, g_nStringIdROS2_action_msgs__msg__GoalStatusArray};

const TForteInt16 FORTE_ACTION_CLIENT::scm_anEIWithIndexes[] = {-1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_ACTION_CLIENT::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdSEND_GOAL_REQ, g_nStringIdCANCEL_GOAL_REQ, g_nStringIdGET_RESULT_REQ, g_nStringIdFEEDBACK_RSP, g_nStringIdSTATUS_RSP};

const TForteInt16 FORTE_ACTION_CLIENT::scm_anEOWithIndexes[] = {-1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_ACTION_CLIENT::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdSEND_GOAL_CNF, g_nStringIdCANCEL_GOAL_CNF, g_nStringIdGET_RESULT_CNF, g_nStringIdFEEDBACK_IND, g_nStringIdSTATUS_IND};


const SFBInterfaceSpec FORTE_ACTION_CLIENT::scm_stFBInterfaceSpec = {
  6, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  6, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  10, scm_anDataInputNames, scm_anDataInputTypeIds,
  15, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_CLIENT::scm_astInternalFBs[] = {
  {g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdACTION_CLIENT_SEND_GOAL},
  {g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdACTION_CLIENT_CANCEL_GOAL},
  {g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdACTION_CLIENT_GET_RESULT},
  {g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE},
  {g_nStringIdACTION_CLIENT_STATUS, g_nStringIdACTION_CLIENT_STATUS},
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdE_REND_2, g_nStringIdE_REND},
  {g_nStringIdE_REND_3, g_nStringIdE_REND}
};


const SCFB_FBConnectionData FORTE_ACTION_CLIENT::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_REQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_REQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_REQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_RSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdRSP), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_CNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_CNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_CNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdIND), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_IND), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS_RSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdRSP), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdIND), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS_IND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI2), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEI2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEO), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEI1), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdINIT), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_CLIENT::scm_astFannedOutEventConnections[] = {
  {19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdINIT), 2},
  {19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdINIT), 1},
  {19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdINIT), 3},
  {19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdINIT), 4},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_REQ_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdREQ_DATA), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_REQ_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdREQ_DATA), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_REQ_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdREQ_DATA), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdRES_DATA), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_RES_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdSTATUS), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdRES_DATA), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_RES_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdSTATUS), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdRES_DATA), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_RES_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdSTATUS), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdSUB_DATA), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdSTATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdSUB_DATA), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdTOPIC_NAME), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_SEND_GOAL, g_nStringIdTOPIC_TYPE), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_CLIENT::scm_astFannedOutDataConnections[] = {
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_CANCEL_GOAL, g_nStringIdTOPIC_NAME), 1},
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdTOPIC_NAME), 2},
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdTOPIC_NAME), 3},
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_STATUS, g_nStringIdTOPIC_NAME), 4},
  {24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_GET_RESULT, g_nStringIdTOPIC_TYPE), 2},
  {24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_CLIENT_FEEDBACK_MESSAGE, g_nStringIdTOPIC_TYPE), 3},
};

const SCFB_FBNData FORTE_ACTION_CLIENT::scm_stFBNData = {
  9, scm_astInternalFBs,
  20, scm_astEventConnections,
  4, scm_astFannedOutEventConnections,
  25, scm_astDataConnections,
  6, scm_astFannedOutDataConnections,
  0, nullptr
};



