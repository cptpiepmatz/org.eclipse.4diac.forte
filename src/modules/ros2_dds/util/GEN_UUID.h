/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: GEN_UUID
 *** Description: 
 *** Version:
***     1.0: 2023-03-23/Tim Hesse -  - 
 *************************************************************************/

#ifndef _GEN_UUID_H_
#define _GEN_UUID_H_

#include "funcbloc.h"
#include "modules/ros2/unique_identifier_msgs/msg/UUID/ROS2_unique_identifier_msgs__msg__UUID.h"
#include "forte_array_at.h"

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

class FORTE_GEN_UUID: public CFunctionBlock {
  DECLARE_FIRMWARE_FB(FORTE_GEN_UUID)

private:

  boost::uuids::random_generator mGen;
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  CIEC_ROS2_unique_identifier_msgs__msg__UUID &st_UUID() {
    return *static_cast<CIEC_ROS2_unique_identifier_msgs__msg__UUID*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 0, 1, 0);

  void executeEvent(int pa_nEIID);

public:
   FORTE_GEN_UUID(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CFunctionBlock( pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, m_anFBConnData, m_anFBVarsData) {
   };

  virtual ~FORTE_GEN_UUID() = default;
};

#endif // _GEN_UUID_H_


