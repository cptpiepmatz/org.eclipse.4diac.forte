/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ACTION_SERVER
 *** Description: 
 *** Version:
***     1.0: 2023-04-02/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ACTION_SERVER_H_
#define _ACTION_SERVER_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_any.h"
#include "forte_bool.h"
#include "modules/ros2/action_msgs/msg/GoalStatusArray/ROS2_action_msgs__msg__GoalStatusArray.h"
#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Request.h"
#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Response.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_ACTION_SERVER: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_ACTION_SERVER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventSEND_GOAL_RSPID = 1;
  static const TEventID scm_nEventCANCEL_GOAL_RSPID = 2;
  static const TEventID scm_nEventGET_RESULT_RSPID = 3;
  static const TEventID scm_nEventFEEDBACK_REQID = 4;
  static const TEventID scm_nEventSTATUS_REQID = 5;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventSEND_GOAL_INDID = 1;
  static const TEventID scm_nEventCANCEL_GOAL_INDID = 2;
  static const TEventID scm_nEventGET_RESULT_INDID = 3;
  static const TEventID scm_nEventFEEDBACK_CNFID = 4;
  static const TEventID scm_nEventSTATUS_CNFID = 5;
  
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

  CIEC_BOOL &st_SEND_GOAL_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_CANCEL_GOAL_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_GET_RESULT_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_FEEDBACK_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_STATUS_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_WSTRING &st_TOPIC_NAME() {
    return *static_cast<CIEC_WSTRING*>(getDI(5));
  }
  
  CIEC_WSTRING &st_TOPIC_TYPE() {
    return *static_cast<CIEC_WSTRING*>(getDI(6));
  }
  
  CIEC_ANY &st_SEND_GOAL_RES_DATA() {
    return *static_cast<CIEC_ANY*>(getDI(7));
  }
  
  CIEC_ROS2_action_msgs__srv__CancelGoal__Response &st_CANCEL_GOAL_RES_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__srv__CancelGoal__Response*>(getDI(8));
  }
  
  CIEC_ANY &st_GET_RESULT_RES_DATA() {
    return *static_cast<CIEC_ANY*>(getDI(9));
  }
  
  CIEC_ANY &st_FEEDBACK_DATA() {
    return *static_cast<CIEC_ANY*>(getDI(10));
  }
  
  CIEC_ROS2_action_msgs__msg__GoalStatusArray &st_STATUS_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__msg__GoalStatusArray*>(getDI(11));
  }
  
  CIEC_BOOL &st_SEND_GOAL_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_CANCEL_GOAL_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_GET_RESULT_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_FEEDBACK_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_STATUS_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_WSTRING &st_SEND_GOAL_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(5));
  }
  
  CIEC_WSTRING &st_CANCEL_GOAL_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(6));
  }
  
  CIEC_WSTRING &st_GET_RESULT_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(7));
  }
  
  CIEC_WSTRING &st_FEEDBACK_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(8));
  }
  
  CIEC_WSTRING &st_STATUS_STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(9));
  }
  
  CIEC_ANY &st_SEND_GOAL_REQ_DATA() {
    return *static_cast<CIEC_ANY*>(getDO(10));
  }
  
  CIEC_ROS2_action_msgs__srv__CancelGoal__Request &st_CANCEL_GOAL_REQ_DATA() {
    return *static_cast<CIEC_ROS2_action_msgs__srv__CancelGoal__Request*>(getDO(11));
  }
  
  CIEC_ANY &st_GET_RESULT_REQ_DATA() {
    return *static_cast<CIEC_ANY*>(getDO(12));
  }
  

  FORTE_FB_DATA_ARRAY(6, 12, 13, 0);

public:
  FORTE_ACTION_SERVER(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_ACTION_SERVER() = default;
};

#endif // _ACTION_SERVER_H_


