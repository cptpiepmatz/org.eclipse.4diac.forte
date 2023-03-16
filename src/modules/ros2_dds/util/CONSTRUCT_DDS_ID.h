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

#ifndef _CONSTRUCT_DDS_ID_H_
#define _CONSTRUCT_DDS_ID_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_CONSTRUCT_DDS_ID: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_ID)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
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

  CIEC_WSTRING &st_TOPIC() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  }
  
  CIEC_WSTRING &st_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_WSTRING &st_ID() {
    return *static_cast<CIEC_WSTRING*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 2, 1, 0);

public:
  FORTE_CONSTRUCT_DDS_ID(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_CONSTRUCT_DDS_ID() = default;
};

#endif // _CONSTRUCT_DDS_ID_H_


