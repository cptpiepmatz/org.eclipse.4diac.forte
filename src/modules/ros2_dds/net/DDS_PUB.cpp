/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: DDS_PUB
 *** Description: Wrapper for DDS Publisher
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#include "DDS_PUB.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "DDS_PUB_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_DDS_PUB, g_nStringIdDDS_PUB)

const CStringDictionary::TStringId FORTE_DDS_PUB::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC, g_nStringIdTYPE, g_nStringIdPUB_DATA};

const CStringDictionary::TStringId FORTE_DDS_PUB::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_DDS_PUB::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_DDS_PUB::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_DDS_PUB::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_DDS_PUB::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_DDS_PUB::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_DDS_PUB::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_DDS_PUB::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_DDS_PUB::scm_astInternalFBs[] = {
  {g_nStringIdPUBLISH_1, g_nStringIdPUBLISH_1},
  {g_nStringIdCONSTRUCT_DDS_ID_1, g_nStringIdCONSTRUCT_DDS_ID}
};


const SCFB_FBConnectionData FORTE_DDS_PUB::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdREQ), 0},
};

const SCFB_FBConnectionData FORTE_DDS_PUB::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSD_1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID_1, g_nStringIdTOPIC), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID_1, g_nStringIdTYPE), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_ID_1, g_nStringIdID), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdID), 0},
};

const SCFB_FBNData FORTE_DDS_PUB::scm_stFBNData = {
  2, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  7, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



