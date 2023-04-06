/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_FEEDBACK_MESSAGE
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#include "ACTION_SERVER_FEEDBACK_MESSAGE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ACTION_SERVER_FEEDBACK_MESSAGE_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ACTION_SERVER_FEEDBACK_MESSAGE, g_nStringIdACTION_SERVER_FEEDBACK_MESSAGE)

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdPUB_DATA};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astInternalFBs[] = {
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND_3, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING_1, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_3, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND_2, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdF_CONCAT_1, g_nStringIdF_CONCAT},
  {g_nStringIdMSG_PUBLISHER, g_nStringIdMSG_PUBLISHER}
};

const SCFB_FBParameter FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astParamters[] = {
  {0, g_nStringIdIN, "\"/_action/feedback\""},
  {2, g_nStringIdIN, "\"_FeedbackMessage\""},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEI1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_3, g_nStringIdEI2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdINIT), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdINITO), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astFannedOutEventConnections[] = {
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdREQ), 4},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdREQ), 2},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 0},
};

const SCFB_FBConnectionData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdTOPIC_NAME), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdTOPIC_TYPE), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPUB_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdPUB_DATA), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdQI), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdQO), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMSG_PUBLISHER, g_nStringIdSTATUS), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
};

const SCFB_FBNData FORTE_ACTION_SERVER_FEEDBACK_MESSAGE::scm_stFBNData = {
  10, scm_astInternalFBs,
  13, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  12, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



