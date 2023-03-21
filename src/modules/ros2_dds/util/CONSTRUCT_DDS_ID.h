/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CONSTRUCT_DDS_ID
 *** Description: Construct ID for DDS COM FB
 *** Version:
***     1.0: 2023-03-21/Tim Hesse -  - 
 *************************************************************************/

#ifndef _CONSTRUCT_DDS_ID_H_
#define _CONSTRUCT_DDS_ID_H_

#include "funcbloc.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_CONSTRUCT_DDS_ID: public CFunctionBlock {
  DECLARE_FIRMWARE_FB(FORTE_CONSTRUCT_DDS_ID)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQ1ID = 0;
  static const TEventID scm_nEventREQ2ID = 1;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  CIEC_WSTRING &st_TOPIC_L() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  }
  
  CIEC_WSTRING &st_TYPE_L() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_WSTRING &st_TOPIC_R() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  }
  
  CIEC_WSTRING &st_TYPE_R() {
    return *static_cast<CIEC_WSTRING*>(getDI(3));
  }
  
  CIEC_WSTRING &st_ID() {
    return *static_cast<CIEC_WSTRING*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 4, 1, 0);

  void executeEvent(int pa_nEIID);

public:
   FORTE_CONSTRUCT_DDS_ID(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CFunctionBlock( pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, m_anFBConnData, m_anFBVarsData) {
   };

  virtual ~FORTE_CONSTRUCT_DDS_ID() = default;
};

#endif // _CONSTRUCT_DDS_ID_H_


