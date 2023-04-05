/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER, g_nStringIdACTION_SERVER)

const CStringDictionary::TStringId FORTE_ACTION_SERVER::scm_anDataInputNames[] = {g_nStringIdSEND_GOAL_QI, g_nStringIdCANCEL_GOAL_QI, g_nStringIdGET_RESULT_QI, g_nStringIdFEEDBACK_QI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdSEND_GOAL_RES_DATA, g_nStringIdCANCEL_GOAL_RES_DATA, g_nStringIdGET_RESULT_RES_DATA, g_nStringIdFEEDBACK_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY, g_nStringIdROS2_action_msgs__srv__CancelGoal__Response, g_nStringIdANY, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_ACTION_SERVER::scm_anDataOutputNames[] = {g_nStringIdSEND_GOAL_QO, g_nStringIdCANCEL_GOAL_QO, g_nStringIdGET_RESULT_QO, g_nStringIdFEEDBACK_QO, g_nStringIdSEND_GOAL_STATUS, g_nStringIdCANCEL_GOAL_STATUS, g_nStringIdGET_RESULT_STATUS, g_nStringIdFEEDBACK_STATUS, g_nStringIdSEND_GOAL_REQ_DATA, g_nStringIdCANCEL_GOAL_REQ_DATA, g_nStringIdGET_RESULT_REQ_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY, g_nStringIdROS2_action_msgs__srv__CancelGoal__Request, g_nStringIdANY};

const TForteInt16 FORTE_ACTION_SERVER::scm_anEIWithIndexes[] = {-1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdSEND_GOAL_RSP, g_nStringIdCANCEL_GOAL_RSP, g_nStringIdGET_RESULT_RSP, g_nStringIdFEEDBACK_REQ};

const TForteInt16 FORTE_ACTION_SERVER::scm_anEOWithIndexes[] = {-1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdSEND_GOAL_IND, g_nStringIdCANCEL_GOAL_IND, g_nStringIdGET_RESULT_IND, g_nStringIdFEEDBACK_CNF};


const SFBInterfaceSpec FORTE_ACTION_SERVER::scm_stFBInterfaceSpec = {
  5, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  5, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  10, scm_anDataInputNames, scm_anDataInputTypeIds,
  11, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER::scm_astInternalFBs[] = {
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdE_REND_2, g_nStringIdE_REND},
  {g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdACTION_SERVER_SEND_GOAL},
  {g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdACTION_SERVER_CANCEL_GOAL},
  {g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdACTION_SERVER_GET_RESULT},
  {g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE}
};


const SCFB_FBConnectionData FORTE_ACTION_SERVER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdINITO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdINITO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_RSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdRSP), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_RSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdRSP), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_RSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdRSP), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_REQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdIND), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_IND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdIND), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_IND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdIND), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_IND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_CNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER::scm_astFannedOutEventConnections[] = {
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdINIT), 4},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdINIT), 5},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdINIT), 6},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdQI), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdQI), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdROS_TOPIC), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdROS_TYPE), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_RES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdRES_DATA), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_RES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdRES_DATA), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_RES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdRES_DATA), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdPUB_DATA), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdSTATUS), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_SEND_GOAL, g_nStringIdREQ_DATA), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSEND_GOAL_REQ_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdSTATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdREQ_DATA), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCANCEL_GOAL_REQ_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdQO), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdSTATUS), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdREQ_DATA), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGET_RESULT_REQ_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdQO), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdSTATUS), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFEEDBACK_STATUS), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER::scm_astFannedOutDataConnections[] = {
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_CANCEL_GOAL, g_nStringIdTOPIC_NAME), 4},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdTOPIC_NAME), 5},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdTOPIC_NAME), 6},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_GET_RESULT, g_nStringIdTOPIC_TYPE), 5},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdTOPIC_TYPE), 6},
};

const SCFB_FBNData FORTE_ACTION_SERVER::scm_stFBNData = {
  7, scm_astInternalFBs,
  16, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  21, scm_astDataConnections,
  5, scm_astFannedOutDataConnections,
  0, nullptr
};



