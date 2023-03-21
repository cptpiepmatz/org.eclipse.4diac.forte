/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: DDS_SERVER
 *** Description: Wrapper for DDS Publisher and Subscriber Pair as a Client
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#include "DDS_SERVER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "DDS_SERVER_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_DDS_SERVER, g_nStringIdDDS_SERVER)

const CStringDictionary::TStringId FORTE_DDS_SERVER::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdREQ_TOPIC, g_nStringIdREQ_TYPE, g_nStringIdRES_TOPIC, g_nStringIdRES_TYPE, g_nStringIdRES_DATA};

const CStringDictionary::TStringId FORTE_DDS_SERVER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_DDS_SERVER::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdREQ_DATA};

const CStringDictionary::TStringId FORTE_DDS_SERVER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdANY};

const TForteInt16 FORTE_DDS_SERVER::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_DDS_SERVER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TForteInt16 FORTE_DDS_SERVER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_DDS_SERVER::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_DDS_SERVER::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_DDS_SERVER::scm_astInternalFBs[] = {
  {g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdCONSTRUCT_DDS_ID},
  {g_nStringIdSERVER_1, g_nStringIdSERVER_1}
};


const SCFB_FBConnectionData FORTE_DDS_SERVER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdREQ2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdRSP), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBConnectionData FORTE_DDS_SERVER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_TOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdTOPIC_L), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdTYPE_L), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_TOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdTOPIC_R), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdTYPE_R), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID, g_nStringIdID), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdSD_1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdSTATUS), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSERVER_1, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
};

const SCFB_FBNData FORTE_DDS_SERVER::scm_stFBNData = {
  2, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  10, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



