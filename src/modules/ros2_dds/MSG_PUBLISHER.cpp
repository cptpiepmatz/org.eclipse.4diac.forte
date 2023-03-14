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

const TDataIOID FORTE_MSG_PUBLISHER::scm_anEIWith[] = {0, 1, 2, 255, 0, 3, 255};
const TForteInt16 FORTE_MSG_PUBLISHER::scm_anEIWithIndexes[] = {0, 4};
const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_MSG_PUBLISHER::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_MSG_PUBLISHER::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_MSG_PUBLISHER::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_MSG_PUBLISHER::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_MSG_PUBLISHER::scm_astInternalFBs[] = {
  {g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdCONSTRUCT_DDS_ID},
  {g_nStringIdPUBLISH_1, g_nStringIdPUBLISH_1}
};

const SCFB_FBParameter FORTE_MSG_PUBLISHER::scm_astParamters[] = {
  {0, g_nStringIdTOPIC_PREFIX, "\"rt\""},
  {0, g_nStringIdTYPE_NAMESPACE, "\"msg\""},
  {0, g_nStringIdTYPE_SUFFIX, "\"_\""},
};

const SCFB_FBConnectionData FORTE_MSG_PUBLISHER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdREQ), 1},
};

const SCFB_FBConnectionData FORTE_MSG_PUBLISHER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdID), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdROS2_TOPIC), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdROS2_TYPE), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSD_1), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSTATUS), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
};

const SCFB_FBNData FORTE_MSG_PUBLISHER::scm_stFBNData = {
  2, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  7, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



