/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SRV_CLIENT
 *** Description: ROS 2 SRV Client
 *** Version:
***     1.0: 2023-03-14/Tim Hesse -  - 
 *************************************************************************/

#include "SRV_CLIENT.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SRV_CLIENT_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SRV_CLIENT, g_nStringIdSRV_CLIENT)

const CStringDictionary::TStringId FORTE_SRV_CLIENT::scm_anDataInputNames[] = {g_nStringIdREQ_QI, g_nStringIdRES_QI, g_nStringIdTOPIC_NAME, g_nStringIdTOPIC_TYPE, g_nStringIdREQ_DATA};

const CStringDictionary::TStringId FORTE_SRV_CLIENT::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const CStringDictionary::TStringId FORTE_SRV_CLIENT::scm_anDataOutputNames[] = {g_nStringIdREQ_QO, g_nStringIdRES_QO, g_nStringIdREQ_STATUS, g_nStringIdRES_STATUS, g_nStringIdRES_DATA};

const CStringDictionary::TStringId FORTE_SRV_CLIENT::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdANY};

const TForteInt16 FORTE_SRV_CLIENT::scm_anEIWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_SRV_CLIENT::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ, g_nStringIdRSP};

const TForteInt16 FORTE_SRV_CLIENT::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_SRV_CLIENT::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF, g_nStringIdIND};


const SFBInterfaceSpec FORTE_SRV_CLIENT::scm_stFBInterfaceSpec = {
  3, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  3, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  5, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_SRV_CLIENT::scm_astInternalFBs[] = {
  {g_nStringIdCONSTRUCT_DDS_PUB_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdCONSTRUCT_DDS_SUB_TYPE, g_nStringIdCONSTRUCT_DDS_TYPE},
  {g_nStringIdE_REND, g_nStringIdE_REND},
  {g_nStringIdE_REND_1, g_nStringIdE_REND},
  {g_nStringIdDDS_PUB_SUB, g_nStringIdDDS_PUB_SUB},
  {g_nStringIdE_REND_2, g_nStringIdE_REND},
  {g_nStringIdCONSTRUCT_DDS_PUB_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC},
  {g_nStringIdCONSTRUCT_DDS_SUB_TOPIC, g_nStringIdCONSTRUCT_DDS_TOPIC}
};

const SCFB_FBParameter FORTE_SRV_CLIENT::scm_astParamters[] = {
  {0, g_nStringIdSUFFIX, "\"_Request_\""},
  {1, g_nStringIdSUFFIX, "\"_Response_\""},
  {6, g_nStringIdPREFIX, "\"rq\""},
  {6, g_nStringIdSUFFIX, "\"Request\""},
  {7, g_nStringIdPREFIX, "\"rr\""},
  {7, g_nStringIdSUFFIX, "\"Reply\""},
};

const SCFB_FBConnectionData FORTE_SRV_CLIENT::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TYPE, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TYPE, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI2), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TYPE, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEI2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_2, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdRSP), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdIND), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIND), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TOPIC, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND_1, g_nStringIdEI1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TOPIC, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_REND, g_nStringIdEI1), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_SRV_CLIENT::scm_astFannedOutEventConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TYPE, g_nStringIdREQ), 1},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TOPIC, g_nStringIdREQ), 6},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TOPIC, g_nStringIdREQ), 7},
};

const SCFB_FBConnectionData FORTE_SRV_CLIENT::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_TYPE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TYPE, g_nStringIdROS2_TYPE), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdPUB_QI), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_QI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdSUB_QI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TYPE, g_nStringIdDDS_TYPE), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdPUB_TYPE), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TYPE, g_nStringIdDDS_TYPE), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdSUB_TYPE), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_DATA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdPUB_DATA), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdPUB_QO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdSUB_QO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_QO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdPUB_STATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdSUB_STATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_STATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdSUB_DATA), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRES_DATA), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOPIC_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TOPIC, g_nStringIdROS2_TOPIC), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_PUB_TOPIC, g_nStringIdDDS_TOPIC), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdPUB_TOPIC), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TOPIC, g_nStringIdDDS_TOPIC), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDDS_PUB_SUB, g_nStringIdSUB_TOPIC), 4},
};

const SCFB_FBFannedOutConnectionData FORTE_SRV_CLIENT::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TYPE, g_nStringIdROS2_TYPE), 1},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCONSTRUCT_DDS_SUB_TOPIC, g_nStringIdROS2_TOPIC), 7},
};

const SCFB_FBNData FORTE_SRV_CLIENT::scm_stFBNData = {
  8, scm_astInternalFBs,
  13, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  14, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  6, scm_astParamters
};



