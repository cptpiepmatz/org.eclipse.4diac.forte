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

#ifndef _ROTATEABSOLUTE_H_
#define _ROTATEABSOLUTE_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_real.h"
#include "forte_array_at.h"


class FORTE_RotateAbsolute: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_RotateAbsolute)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventROTATEID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventFDBKID = 0;
  static const TEventID scm_nEventDONEID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
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

  CIEC_REAL &st_THETA() {
    return *static_cast<CIEC_REAL*>(getDI(0));
  }
  
  CIEC_REAL &st_REMAINING() {
    return *static_cast<CIEC_REAL*>(getDO(0));
  }
  
  CIEC_REAL &st_DELTA() {
    return *static_cast<CIEC_REAL*>(getDO(1));
  }
  

  FORTE_FB_DATA_ARRAY(2, 1, 2, 0);

public:
  FORTE_RotateAbsolute(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_RotateAbsolute() = default;
};

#endif // _ROTATEABSOLUTE_H_


