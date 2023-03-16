/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: DDS_PUB_SUB
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2023-03-15/derPi -  - 
 *************************************************************************/

#include "DDS_PUB_SUB.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "DDS_PUB_SUB_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_DDS_PUB_SUB, g_nStringIdDDS_PUB_SUB)

const CStringDictionary::TStringId FORTE_DDS_PUB_SUB::scm_anDataInputNames[] = {g_nStringIdPUB_QI, g_nStringIdSUB_QI, g_nStringIdPUB_TOPIC, g_nStringIdSUB_TOPIC, g_nStringIdPUB_TYPE, g_nStringIdSUB_TYPE, g_nStringIdPUB_DATA};

const CStringDictionary::TStringId FORTE_DDS_PUB_SUB::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_DDS_PUB_SUB::scm_anDataOutputNames[] = {g_nStringIdPUB_QO, g_nStringIdSUB_QO, g_nStringIdPUB_STATUS, g_nStringIdSUB_STATUS, g_nStringIdSUB_DATA};

const CStringDictionary::TStringId FORTE_DDS_PUB_SUB::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const TForteInt16 FORTE_DDS_PUB_SUB::scm_anEIWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_DDS_PUB_SUB::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ, g_nStringIdRSP};

const TForteInt16 FORTE_DDS_PUB_SUB::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_DDS_PUB_SUB::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF, g_nStringIdIND};


const SFBInterfaceSpec FORTE_DDS_PUB_SUB::scm_stFBInterfaceSpec = {
  3, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  3, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  7, scm_anDataInputNames, scm_anDataInputTypeIds,
  5, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_DDS_PUB_SUB::scm_astInternalFBs[] = {
  {g_nStringIdDDS_PUB, g_nStringIdDDS_PUB},
  {g_nStringIdDDS_SUB, g_nStringIdDDS_SUB},
  {g_nStringIdE_REND, g_nStringIdE_REND}
};


const SCFB_FBConnectionData FORTE_DDS_PUB_SUB::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdRSP), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_DDS_PUB_SUB::scm_astFannedOutEventConnections[] = {
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdINIT), 1},
};

const SCFB_FBConnectionData FORTE_DDS_PUB_SUB::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdSTATUS), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdSUB_DATA), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdPUB_DATA), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdTYPE), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTYPE), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_TOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdTOPIC), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_TOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdTOPIC), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUB_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SUB, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB, g_nStringIdQI), 0},
};

const SCFB_FBNData FORTE_DDS_PUB_SUB::scm_stFBNData = {
  3, scm_astInternalFBs,
  8, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  12, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



