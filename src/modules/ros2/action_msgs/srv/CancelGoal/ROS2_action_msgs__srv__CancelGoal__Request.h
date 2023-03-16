/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_action_msgs__srv__CancelGoal__Request
 *** Description: A Template for a Data Type
 *** Version:
***     1.0: 2023-03-15/derPi -  - 
 *************************************************************************/

#ifndef _ROS2_ACTION_MSGS__SRV__CANCELGOAL__REQUEST_H_
#define _ROS2_ACTION_MSGS__SRV__CANCELGOAL__REQUEST_H_

#include "forte_struct.h"

#include "modules/ros2/action_msgs/msg/GoalInfo/ROS2_action_msgs__msg__GoalInfo.h"
#include "forte_array_at.h"


class CIEC_ROS2_action_msgs__srv__CancelGoal__Request: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_action_msgs__srv__CancelGoal__Request)

  public:
      CIEC_ROS2_action_msgs__srv__CancelGoal__Request();

      virtual ~CIEC_ROS2_action_msgs__srv__CancelGoal__Request() {
      }

          CIEC_ROS2_action_msgs__msg__GoalInfo &goal_info() {
            return *static_cast<CIEC_ROS2_action_msgs__msg__GoalInfo*>(getMember(0));
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_ACTION_MSGS__SRV__CANCELGOAL__REQUEST_H_


