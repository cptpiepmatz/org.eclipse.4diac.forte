/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_ID
 *** Description: Construct DDS IDs
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#include "CONSTRUCT_DDS_ID.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CONSTRUCT_DDS_ID_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_ID, g_nStringIdCONSTRUCT_DDS_ID)

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataInputNames[] = {g_nStringIdTOPIC, g_nStringIdTYPE};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataOutputNames[] = {g_nStringIdID};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TForteInt16 FORTE_CONSTRUCT_DDS_ID::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_CONSTRUCT_DDS_ID::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_ID::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CONSTRUCT_DDS_ID::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_CONSTRUCT_DDS_ID::scm_astInternalFBs[] = {
  {g_nStringIdTOPIC2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdTYPE2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_3, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT_1, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_4, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdF_CONCAT_2, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_5, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdWSTRING2WSTRING_6, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdWSTRING2WSTRING_7, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND_2, g_nStringIdE_REND},
  {g_nStringIdF_CONCAT_3, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_8, g_nStringIdWSTRING2WSTRING}
};

const SCFB_FBParameter FORTE_CONSTRUCT_DDS_ID::scm_astParamters[] = {
  {3, g_nStringIdIN, "\"dds[\""},
  {5, g_nStringIdIN, "\":\""},
  {12, g_nStringIdIN, "\"]\""},
};

const SCFB_FBConnectionData FORTE_CONSTRUCT_DDS_ID::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTYPE2WSTRING, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_4, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_5, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_5, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_2, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_2, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_6, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_7, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI1), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_6, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI2), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEO), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_3, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_3, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_8, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_8, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_CONSTRUCT_DDS_ID::scm_astFannedOutEventConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTYPE2WSTRING, g_nStringIdREQ), 1},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_4, g_nStringIdREQ), 7},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_7, g_nStringIdREQ), 12},
};

const SCFB_FBConnectionData FORTE_CONSTRUCT_DDS_ID::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTYPE2WSTRING, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_4, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_3, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN2), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_4, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_5, g_nStringIdIN), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_5, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_2, g_nStringIdIN1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTYPE2WSTRING, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_2, g_nStringIdIN2), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_2, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_6, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_7, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_3, g_nStringIdIN2), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_6, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_3, g_nStringIdIN1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_3, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_8, g_nStringIdIN), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_8, g_nStringIdOUT), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID), -1},
};

const SCFB_FBNData FORTE_CONSTRUCT_DDS_ID::scm_stFBNData = {
  16, scm_astInternalFBs,
  17, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  15, scm_astDataConnections,
  0, nullptr,
  3, scm_astParamters
};



