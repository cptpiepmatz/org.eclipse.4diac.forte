/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MSG_PUBLISHER
 *** Description: ROS 2 MSG Publisher
 *** Version:
***     1.0: 2023-03-14/Tim Hesse -  - 
 *************************************************************************/

#include "MSG_PUBLISHER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "MSG_PUBLISHER_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_MSG_PUBLISHER, g_nStringIdMSG_PUBLISHER)

const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdPUB_DATA};

const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_MSG_PUBLISHER::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_MSG_PUBLISHER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_MSG_PUBLISHER::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_MSG_PUBLISHER::scm_astInternalFBs[] = {
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdDDS_PUB, g_nStringIdDDS_PUB},
  {g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC}
};

const SCFB_FBParameter FORTE_MSG_PUBLISHER::scm_astParamters[] = {
  {1, g_nStringIdSUFFIX, "\"_\""},
  {3, g_nStringIdPREFIX, "\"rt\""},
  {3, g_nStringIdSUFFIX, "\"\""},
};

const SCFB_FBConnectionData FORTE_MSG_PUBLISHER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdREQ), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_MSG_PUBLISHER::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_MSG_PUBLISHER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdROS2_TYPE), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TYPE, g_nStringIdDDS_TYPE), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTYPE), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdPUB_DATA), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdSTATUS), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdROS2_TOPIC), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_TOPIC, g_nStringIdDDS_TOPIC), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTOPIC), 2},
};

const SCFB_FBNData FORTE_MSG_PUBLISHER::scm_stFBNData = {
  4, scm_astInternalFBs,
  7, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



