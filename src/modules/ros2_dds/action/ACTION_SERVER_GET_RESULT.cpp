/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_GET_RESULT
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER_GET_RESULT.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_GET_RESULT_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER_GET_RESULT, g_nStringIdACTION_SERVER_GET_RESULT)

const CStringDictionary::TStringId FORTE_ACTION_SERVER_GET_RESULT::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdRES_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_GET_RESULT::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_GET_RESULT::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdREQ_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_GET_RESULT::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdANY};

const TForteInt16 FORTE_ACTION_SERVER_GET_RESULT::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_GET_RESULT::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TForteInt16 FORTE_ACTION_SERVER_GET_RESULT::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_GET_RESULT::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_ACTION_SERVER_GET_RESULT::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER_GET_RESULT::scm_astInternalFBs[] = {
  {g_nStringIdE_REND_2, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING_3, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_1, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT_1, g_nStringIdF_CONCAT},
  {g_nStringIdSRV_SERVER, g_nStringIdSRV_SERVER}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_GET_RESULT::scm_astParamters[] = {
  {4, g_nStringIdIN, "\"_GetResult\""},
  {7, g_nStringIdIN, "\"/_action/get_result\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdINIT), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdRSP), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdINITO), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdIND), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astFannedOutEventConnections[] = {
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 6},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 7},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdREQ), 1},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdTOPIC_NAME), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdTOPIC_TYPE), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdRES_DATA), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdQI), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdQO), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdSTATUS), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSRV_SERVER, g_nStringIdREQ_DATA), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1},
};

const SCFB_FBNData FORTE_ACTION_SERVER_GET_RESULT::scm_stFBNData = {
  10, scm_astInternalFBs,
  13, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  13, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



