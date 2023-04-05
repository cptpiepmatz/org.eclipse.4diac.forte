/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER_CANCEL_GOAL
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ACTION_SERVER_CANCEL_GOAL_H_
#define _ACTION_SERVER_CANCEL_GOAL_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Request.h"
#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Response.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_ACTION_SERVER_CANCEL_GOAL: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_ACTION_SERVER_CANCEL_GOAL)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventRSPID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventINDID = 1;
  
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

  CIEC_BOOL &st_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_WSTRING &st_TOPIC_NAME() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_ROS2_action_msgs__srv__CancelGoal__Response &st_RES_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__srv__CancelGoal__Response*>(getDI(2));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_WSTRING &st_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  }
  
  CIEC_ROS2_action_msgs__srv__CancelGoal__Request &st_REQ_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__srv__CancelGoal__Request*>(getDO(2));
  }
  

  FORTE_FB_DATA_ARRAY(2, 3, 3, 0);

public:
  FORTE_ACTION_SERVER_CANCEL_GOAL(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_ACTION_SERVER_CANCEL_GOAL() = default;
};

#endif // _ACTION_SERVER_CANCEL_GOAL_H_


