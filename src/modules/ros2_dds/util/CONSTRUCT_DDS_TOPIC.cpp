/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_TOPIC
 *** Description: Construct DDS Topic
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#include "CONSTRUCT_DDS_TOPIC.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CONSTRUCT_DDS_TOPIC_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC)

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TOPIC::scm_anDataInputNames[] = {g_nStringIdPREFIX, g_nStringIdROS2_TOPIC, g_nStringIdSUFFIX};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TOPIC::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TOPIC::scm_anDataOutputNames[] = {g_nStringIdDDS_TOPIC};

const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TOPIC::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TForteInt16 FORTE_CONSTRUCT_DDS_TOPIC::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TOPIC::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_CONSTRUCT_DDS_TOPIC::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_CONSTRUCT_DDS_TOPIC::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CONSTRUCT_DDS_TOPIC::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_CONSTRUCT_DDS_TOPIC::scm_astInternalFBs[] = {
  {g_nStringIdPREFIX2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdTOPIC2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdSUFFIX2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdF_CONCAT, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_CONCAT_1, g_nStringIdF_CONCAT},
  {g_nStringIdWSTRING2WSTRING_1, g_nStringIdWSTRING2WSTRING}
};


const SCFB_FBConnectionData FORTE_CONSTRUCT_DDS_TOPIC::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPREFIX2WSTRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPREFIX2WSTRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUFFIX2WSTRING, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_CONSTRUCT_DDS_TOPIC::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdREQ), 1},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUFFIX2WSTRING, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_CONSTRUCT_DDS_TOPIC::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPREFIX), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPREFIX2WSTRING, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdROS2_TOPIC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSUFFIX), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUFFIX2WSTRING, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPREFIX2WSTRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTOPIC2WSTRING, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdIN2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUFFIX2WSTRING, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdIN2), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_CONCAT_1, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDDS_TOPIC), -1},
};

const SCFB_FBNData FORTE_CONSTRUCT_DDS_TOPIC::scm_stFBNData = {
  9, scm_astInternalFBs,
  10, scm_astEventConnections,
  2, scm_astFannedOutEventConnections,
  10, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



