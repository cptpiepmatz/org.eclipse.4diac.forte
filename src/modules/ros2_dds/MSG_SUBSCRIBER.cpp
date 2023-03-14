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
  {g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdCONSTRUCT_DDS_ID},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1}
};

const SCFB_FBParameter FORTE_MSG_SUBSCRIBER::scm_astParamters[] = {
  {0, g_nStringIdTOPIC_PREFIX, "\"rt\""},
  {0, g_nStringIdTYPE_NAMESPACE, "\"msg\""},
  {0, g_nStringIdTYPE_SUFFIX, "\"_\""},
};

const SCFB_FBConnectionData FORTE_MSG_SUBSCRIBER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRSP), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBConnectionData FORTE_MSG_SUBSCRIBER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdROS2_TOPIC), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdROS2_TYPE), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdID), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdSTATUS), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
};

const SCFB_FBNData FORTE_MSG_SUBSCRIBER::scm_stFBNData = {
  2, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  7, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



