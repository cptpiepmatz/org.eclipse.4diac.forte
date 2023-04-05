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
  {g_nStringIdE_REND_REQ, g_nStringIdE_REND},
  {g_nStringIdE_REND_INIT, g_nStringIdE_REND},
  {g_nStringIdRES_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdREQ_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdRES_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdE_REND_RES, g_nStringIdE_REND},
  {g_nStringIdREQ_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdDDS_SERVER, g_nStringIdDDS_SERVER}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_GET_RESULT::scm_astParamters[] = {
  {2, g_nStringIdSUFFIX, "\"_GetResult_Response_\""},
  {3, g_nStringIdSUFFIX, "\"_GetResult_Request_\""},
  {4, g_nStringIdPREFIX, "\"rr\""},
  {4, g_nStringIdSUFFIX, "\"/_action/get_resultReply\""},
  {6, g_nStringIdPREFIX, "\"rq\""},
  {6, g_nStringIdSUFFIX, "\"/_action/get_resultRequest\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TYPE, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_RES, g_nStringIdEI2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_REQ, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_INIT, g_nStringIdEI1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_RES, g_nStringIdEI1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_RES, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_INIT, g_nStringIdEI2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_REQ, g_nStringIdEI2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_REQ, g_nStringIdEI1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_INIT, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdINIT), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRSP), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdINITO), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdIND), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astFannedOutEventConnections[] = {
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdREQ), 4},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdREQ), 3},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TYPE, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdDDS_TOPIC), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdREQ_TOPIC), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdDDS_TYPE), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdREQ_TYPE), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdDDS_TOPIC), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRES_TOPIC), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TYPE, g_nStringIdDDS_TYPE), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRES_TYPE), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdQI), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TOPIC, g_nStringIdROS2_TOPIC), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdREQ_TYPE, g_nStringIdROS2_TYPE), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdRES_DATA), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdQO), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdSTATUS), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_SERVER, g_nStringIdREQ_DATA), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_GET_RESULT::scm_astFannedOutDataConnections[] = {
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TOPIC, g_nStringIdROS2_TOPIC), 4},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRES_TYPE, g_nStringIdROS2_TYPE), 2},
};

const SCFB_FBNData FORTE_ACTION_SERVER_GET_RESULT::scm_stFBNData = {
  8, scm_astInternalFBs,
  11, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  11, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  6, scm_astParamters
};



