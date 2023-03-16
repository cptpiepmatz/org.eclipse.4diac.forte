/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MSG_SUBSCRIBER
 *** Description: ROS 2 MSG Subscriber
 *** Version:
***     1.0: 2023-03-14/Tim Hesse -  - 
 *************************************************************************/

#include "MSG_SUBSCRIBER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "MSG_SUBSCRIBER_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_MSG_SUBSCRIBER, g_nStringIdMSG_SUBSCRIBER)

const CStringDictionary::TStringId FORTE_MSG_SUBSCRIBER::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE};

const CStringDictionary::TStringId FORTE_MSG_SUBSCRIBER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_MSG_SUBSCRIBER::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdSUB_DATA};

const CStringDictionary::TStringId FORTE_MSG_SUBSCRIBER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdANY};

const TForteInt16 FORTE_MSG_SUBSCRIBER::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_MSG_SUBSCRIBER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TForteInt16 FORTE_MSG_SUBSCRIBER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_MSG_SUBSCRIBER::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_MSG_SUBSCRIBER::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_MSG_SUBSCRIBER::scm_astInternalFBs[] = {
  {g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdDDS_SUB, g_nStringIdDDS_SUB},
  {g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC}
};

const SCFB_FBParameter FORTE_MSG_SUBSCRIBER::scm_astParamters[] = {
  {0, g_nStringIdSUFFIX, "\"_\""},
  {3, g_nStringIdPREFIX, "\"rt\""},
  {3, g_nStringIdSUFFIX, "\"\""},
};

const SCFB_FBConnectionData FORTE_MSG_SUBSCRIBER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdIND), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdRSP), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_MSG_SUBSCRIBER::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_MSG_SUBSCRIBER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdROS2_TYPE), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdDDS_TYPE), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdTYPE), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdSUB_DATA), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdSTATUS), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdROS2_TOPIC), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdDDS_TOPIC), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdTOPIC), 2},
};

const SCFB_FBNData FORTE_MSG_SUBSCRIBER::scm_stFBNData = {
  4, scm_astInternalFBs,
  7, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



