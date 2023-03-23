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
  {g_nStringIdDDS_CLIENT, g_nStringIdDDS_CLIENT},
  {g_nStringIdREQ_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdRES_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdE_REND, g_nStringIdE_REND}
};

const SCFB_FBParameter FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astParamters[] = {
  {0, g_nStringIdREQ_TYPE, "\"action_msgs::srv::dds_::CancelGoal_Request_\""},
  {0, g_nStringIdRES_TYPE, "\"action_msgs::srv::dds_::CancelGoal_Response_\""},
  {1, g_nStringIdPREFIX, "\"rq\""},
  {1, g_nStringIdSUFFIX, "\"/_action/cancel_goalRequest\""},
  {2, g_nStringIdPREFIX, "\"rr\""},
  {2, g_nStringIdSUFFIX, "\"/_action/cancel_goalReply\""},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdREQ), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astFannedOutEventConnections[] = {
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdRES_DATA), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdROS2_TOPIC), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdREQ_DATA), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdDDS_TOPIC), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdREQ_TOPIC), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdDDS_TOPIC), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_CLIENT, g_nStringIdRES_TOPIC), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_astFannedOutDataConnections[] = {
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdROS2_TOPIC), 2},
};

const SCFB_FBNData FORTE_ACTION_CLIENT_CANCEL_GOAL::scm_stFBNData = {
  4, scm_astInternalFBs,
  7, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  6, scm_astParamters
};



