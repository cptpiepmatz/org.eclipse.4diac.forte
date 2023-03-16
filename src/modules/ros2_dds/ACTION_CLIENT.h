/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_CLIENT
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2023-03-14/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ACTION_CLIENT_H_
#define _ACTION_CLIENT_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_any.h"
#include "forte_bool.h"
#include "modules/ros2/action_msgs/msg/GoalInfo/ROS2_action_msgs__msg__GoalInfo.h"
#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Request.h"
#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Response.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_ACTION_CLIENT: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_ACTION_CLIENT)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventSEND_GOAL_REQID = 1;
  static const TEventID scm_nEventSEND_GOAL_RSPID = 2;
  static const TEventID scm_nEventCANCEL_GOAL_REQID = 3;
  static const TEventID scm_nEventCANCEL_GOAL_RSPID = 4;
  static const TEventID scm_nEventGET_RESULT_REQID = 5;
  static const TEventID scm_nEventGET_RESULT_RSPID = 6;
  static const TEventID scm_nEventFEEDBACK_RSPID = 7;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventSEND_GOAL_CNFID = 1;
  static const TEventID scm_nEventSEND_GOAL_INDID = 2;
  static const TEventID scm_nEventCANCEL_GOAL_CNFID = 3;
  static const TEventID scm_nEventCANCEL_GOAL_INDID = 4;
  static const TEventID scm_nEventGET_RESULT_CNFID = 5;
  static const TEventID scm_nEventGET_RESULT_INDID = 6;
  static const TEventID scm_nEventFEEDBACK_INDID = 7;
  
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

  CIEC_BOOL &st_SEND_GOAL_REQ_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_SEND_GOAL_RES_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_CANCEL_GOAL_REQ_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_CANCEL_GOAL_RES_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_GET_RESULT_REQ_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_GET_RESULT_RES_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_FEEDBACK_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_WSTRING &st_TOPIC_NAME() {
    return *static_cast<CIEC_WSTRING*>(getDI(7));
  }
  
  CIEC_WSTRING &st_TOPIC_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDI(8));
  }
  
  CIEC_ANY &st_SEND_GOAL_REQ_DATA() {
    return *static_cast<CIEC_ANY*>(getDI(9));
  }
  
  CIEC_ROS2_action_msgs__srv__CancelGoal__Request &st_CANCEL_GOAL_REQ_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__srv__CancelGoal__Request*>(getDI(10));
  }
  
  CIEC_ROS2_action_msgs__msg__GoalInfo &st_GET_RESULT_REQ_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__msg__GoalInfo*>(getDI(11));
  }
  
  CIEC_BOOL &st_SEND_GOAL_REQ_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_SEND_GOAL_RES_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_CANCEL_GOAL_REQ_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_CANCEL_GOAL_RES_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_GET_RESULT_REQ_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_GET_RESULT_RES_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_FEEDBACK_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_WSTRING &st_SEND_GOAL_REQ_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(7));
  }
  
  CIEC_WSTRING &st_SEND_GOAL_RES_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(8));
  }
  
  CIEC_WSTRING &st_CANCEL_GOAL_REQ_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(9));
  }
  
  CIEC_WSTRING &st_CANCEL_GOAL_RES_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(10));
  }
  
  CIEC_WSTRING &st_GET_RESULT_REQ_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(11));
  }
  
  CIEC_WSTRING &st_GET_RESULT_RES_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(12));
  }
  
  CIEC_WSTRING &st_FEEDBACK_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(13));
  }
  
  CIEC_ROS2_action_msgs__msg__GoalInfo &st_SEND_GOAL_RES_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__msg__GoalInfo*>(getDO(14));
  }
  
  CIEC_ROS2_action_msgs__srv__CancelGoal__Response &st_CANCEL_GOAL_RES_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__srv__CancelGoal__Response*>(getDO(15));
  }
  
  CIEC_ANY &st_GET_RESULT_RES_DATA() {
    return *static_cast<CIEC_ANY*>(getDO(16));
  }
  
  CIEC_ANY &st_FEEDBACK_DATA() {
    return *static_cast<CIEC_ANY*>(getDO(17));
  }
  

  FORTE_FB_DATA_ARRAY(8, 12, 18, 0);

public:
  FORTE_ACTION_CLIENT(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_ACTION_CLIENT() = default;
};

#endif // _ACTION_CLIENT_H_


