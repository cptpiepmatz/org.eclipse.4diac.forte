/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_SEND_GOAL
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER_SEND_GOAL.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_SEND_GOAL_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER_SEND_GOAL, g_nStringIdACTION_SERVER_SEND_GOAL)

const CStringDictionary::TStringId FORTE_ACTION_SERVER_SEND_GOAL::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdROS_TOPIC, g_nStringIdROS_TYPE, g_nStringIdRES_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_SEND_GOAL::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_SEND_GOAL::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdREQ_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_SEND_GOAL::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdANY};

const TForteInt16 FORTE_ACTION_SERVER_SEND_GOAL::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_SEND_GOAL::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TForteInt16 FORTE_ACTION_SERVER_SEND_GOAL::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_SEND_GOAL::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_ACTION_SERVER_SEND_GOAL::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER_SEND_GOAL::scm_astInternalFBs[] = {
  {g_nStringIdREQ_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdCONSTRUCT_DDS_TOPIC_1, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdE_REND_INIT, g_nStringIdE_REND},
  {g_nStringIdE_REND_RES, g_nStringIdE_REND},
  {g_nStringIdREQ_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdE_REND_REQ, g_nStringIdE_REND},
  {g_nStringIdCONSTRUCT_DDS_TYPE_1, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdDDS_SERVER, g_nStringIdDDS_SERVER}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_SEND_GOAL::scm_astParamters[] = {
  {0, g_nStringIdSUFFIX, "\"_SendGoal_Request_\""},
  {1, g_nStringIdPREFIX, "\"rr\""},
  {1, g_nStringIdSUFFIX, "\"/_action/send_goalReply\""},
  {4, g_nStringIdPREFIX, "\"rq\""},
  {4, g_nStringIdSUFFIX, "\"/_action/send_goalRequest\""},
  {6, g_nStringIdSUFFIX, "\"_SendGoal_Response_\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_SEND_GOAL::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_REQ, g_nStringIdEI1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_RES, g_nStringIdEI1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_REQ, g_nStringIdEI2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_RES, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_INIT, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE_1, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_RES, g_nStringIdEI2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_REQ, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_INIT, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_INIT, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdINIT), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRSP), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdINITO), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdIND), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_SEND_GOAL::scm_astFannedOutEventConnections[] = {
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC_1, g_nStringIdREQ), 1},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdREQ), 0},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE_1, g_nStringIdREQ), 6},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_SEND_GOAL::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdDDS_TOPIC), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdREQ_TOPIC), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdDDS_TYPE), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdREQ_TYPE), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC_1, g_nStringIdDDS_TOPIC), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRES_TOPIC), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE_1, g_nStringIdDDS_TYPE), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRES_TYPE), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRES_DATA), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdROS_TOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdROS2_TOPIC), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdROS_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdROS2_TYPE), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdQI), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdQO), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdSTATUS), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdREQ_DATA), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_SEND_GOAL::scm_astFannedOutDataConnections[] = {
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC_1, g_nStringIdROS2_TOPIC), 1},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE_1, g_nStringIdROS2_TYPE), 6},
};

const SCFB_FBNData FORTE_ACTION_SERVER_SEND_GOAL::scm_stFBNData = {
  8, scm_astInternalFBs,
  11, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  11, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  6, scm_astParamters
};



