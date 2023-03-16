/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_TYPE
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2023-03-14/derPi -  - 
 *************************************************************************/

#ifndef _CONSTRUCT_DDS_TYPE_H_
#define _CONSTRUCT_DDS_TYPE_H_

#include "funcbloc.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_CONSTRUCT_DDS_TYPE: public CFunctionBlock {
  DECLARE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_TYPE)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  CIEC_WSTRING &st_ROS2_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  }
  
  CIEC_WSTRING &st_SUFFIX() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_WSTRING &st_DDS_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 2, 1, 0);

  void executeEvent(int pa_nEIID);

public:
   FORTE_CONSTRUCT_DDS_TYPE(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CFunctionBlock( pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, m_anFBConnData, m_anFBVarsData) {
   };

  virtual ~FORTE_CONSTRUCT_DDS_TYPE() = default;
};

#endif // _CONSTRUCT_DDS_TYPE_H_


