/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_FEEDBACK_MESSAGE
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER_FEEDBACK_MESSAGE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_FEEDBACK_MESSAGE_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE)

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdPUB_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astInternalFBs[] = {
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdDDS_PUB, g_nStringIdDDS_PUB}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astParamters[] = {
  {1, g_nStringIdSUFFIX, "\"_FeedbackMessage_\""},
  {2, g_nStringIdPREFIX, "\"rt\""},
  {2, g_nStringIdSUFFIX, "\"/_action/feedback\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdREQ), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astFannedOutEventConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdREQ), 1},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdROS2_TOPIC), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdROS2_TYPE), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdSTATUS), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdDDS_TYPE), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTYPE), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdDDS_TOPIC), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTOPIC), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdPUB_DATA), 3},
};

const SCFB_FBNData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_stFBNData = {
  4, scm_astInternalFBs,
  7, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



