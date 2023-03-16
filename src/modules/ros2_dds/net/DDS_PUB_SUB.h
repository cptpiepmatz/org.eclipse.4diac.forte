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

#ifndef _DDS_PUB_SUB_H_
#define _DDS_PUB_SUB_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_any.h"
#include "forte_bool.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_DDS_PUB_SUB: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_DDS_PUB_SUB)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TEventID scm_nEventRSPID = 2;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TEventID scm_nEventINDID = 2;
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBInstanceData scm_astInternalFBs[];
  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_BOOL &st_PUB_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_SUB_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_WSTRING &st_PUB_TOPIC() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  }
  
  CIEC_WSTRING &st_SUB_TOPIC() {
    return *static_cast<CIEC_WSTRING*>(getDI(3));
  }
  
  CIEC_WSTRING &st_PUB_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDI(4));
  }
  
  CIEC_WSTRING &st_SUB_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDI(5));
  }
  
  CIEC_ANY &st_PUB_DATA() {
    return *static_cast<CIEC_ANY*>(getDI(6));
  }
  
  CIEC_BOOL &st_PUB_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_SUB_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_WSTRING &st_PUB_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(2));
  }
  
  CIEC_WSTRING &st_SUB_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(3));
  }
  
  CIEC_ANY &st_SUB_DATA() {
    return *static_cast<CIEC_ANY*>(getDO(4));
  }
  

  FORTE_FB_DATA_ARRAY(3, 7, 5, 0);

public:
  FORTE_DDS_PUB_SUB(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_DDS_PUB_SUB() = default;
};

#endif // _DDS_PUB_SUB_H_


