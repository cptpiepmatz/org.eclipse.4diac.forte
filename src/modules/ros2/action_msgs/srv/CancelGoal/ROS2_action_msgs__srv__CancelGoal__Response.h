/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_action_msgs__srv__CancelGoal__Response
 *** Description: 
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ROS2_ACTION_MSGS__SRV__CANCELGOAL__RESPONSE_H_
#define _ROS2_ACTION_MSGS__SRV__CANCELGOAL__RESPONSE_H_

#include "forte_struct.h"

#include "modules/ros2/action_msgs/msg/GoalInfo/ROS2_action_msgs__msg__GoalInfo.h"
#include "forte_sint.h"
#include "forte_array.h"
#include "forte_array_at.h"


class CIEC_ROS2_action_msgs__srv__CancelGoal__Response: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_action_msgs__srv__CancelGoal__Response)

  public:
      CIEC_ROS2_action_msgs__srv__CancelGoal__Response();

      virtual ~CIEC_ROS2_action_msgs__srv__CancelGoal__Response() {
      }

          CIEC_SINT &return_code() {
            return *static_cast<CIEC_SINT*>(getMember(0));
          }
          
          CIEC_ROS2_action_msgs__msg__GoalInfo *goals_canceling() {
            return static_cast<CIEC_ROS2_action_msgs__msg__GoalInfo*>((*static_cast<CIEC_ARRAY *>(getMember(1)))[0]); //the first element marks the start of the array
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_ACTION_MSGS__SRV__CANCELGOAL__RESPONSE_H_


