/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: RotateAbsolute
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2023-03-31/derPi -  - 
 *************************************************************************/

#include "RotateAbsolute.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsolute_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_RotateAbsolute, g_nStringIdRotateAbsolute)

const CStringDictionary::TStringId FORTE_RotateAbsolute::scm_anDataInputNames[] = {g_nStringIdTHETA};

const CStringDictionary::TStringId FORTE_RotateAbsolute::scm_anDataInputTypeIds[] = {g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_RotateAbsolute::scm_anDataOutputNames[] = {g_nStringIdREMAINING, g_nStringIdDELTA};

const CStringDictionary::TStringId FORTE_RotateAbsolute::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL};

const TDataIOID FORTE_RotateAbsolute::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_RotateAbsolute::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_RotateAbsolute::scm_anEventInputNames[] = {g_nStringIdROTATE};

const TDataIOID FORTE_RotateAbsolute::scm_anEOWith[] = {0, 255, 1, 255};
const TForteInt16 FORTE_RotateAbsolute::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_RotateAbsolute::scm_anEventOutputNames[] = {g_nStringIdFDBK, g_nStringIdDONE};


const SFBInterfaceSpec FORTE_RotateAbsolute::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_RotateAbsolute::scm_astInternalFBs[] = {
  {g_nStringIdFB_CTU, g_nStringIdFB_CTU},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdF_LT, g_nStringIdF_LT},
  {g_nStringIdINT2INT, g_nStringIdINT2INT},
  {g_nStringIdE_SWITCH, g_nStringIdE_SWITCH},
  {g_nStringIdFB_RANDOM, g_nStringIdFB_RANDOM},
  {g_nStringIdREAL2REAL, g_nStringIdREAL2REAL}
};

const SCFB_FBParameter FORTE_RotateAbsolute::scm_astParamters[] = {
  {0, g_nStringIdCU, "1"},
  {0, g_nStringIdPV, "0"},
  {1, g_nStringIdDT, "T#1s"},
  {3, g_nStringIdIN, "10"},
  {6, g_nStringIdIN, "22.2"},
};

const SCFB_FBConnectionData FORTE_RotateAbsolute::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEI), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdROTATE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RANDOM, g_nStringIdINIT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RANDOM, g_nStringIdINITO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEO1), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RANDOM, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RANDOM, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFDBK), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEO0), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREAL2REAL, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDONE), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_RotateAbsolute::scm_astFannedOutEventConnections[] = {
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREAL2REAL, g_nStringIdREQ), 6},
};

const SCFB_FBConnectionData FORTE_RotateAbsolute::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdCV), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LT, g_nStringIdIN1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LT, g_nStringIdIN2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LT, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdG), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RANDOM, g_nStringIdVAL), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREMAINING), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREAL2REAL, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDELTA), -1},
};

const SCFB_FBNData FORTE_RotateAbsolute::scm_stFBNData = {
  7, scm_astInternalFBs,
  10, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  5, scm_astDataConnections,
  0, nullptr,
  5, scm_astParamters
};



