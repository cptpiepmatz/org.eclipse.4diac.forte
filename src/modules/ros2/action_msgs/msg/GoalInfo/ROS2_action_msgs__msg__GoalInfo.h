/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_action_msgs__msg__GoalInfo
 *** Description: 
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ROS2_ACTION_MSGS__MSG__GOALINFO_H_
#define _ROS2_ACTION_MSGS__MSG__GOALINFO_H_

#include "forte_struct.h"

#include "modules/ros2/builtin_interfaces/msg/Time/ROS2_builtin_interfaces__msg__Time.h"
#include "modules/ros2/unique_identifier_msgs/msg/UUID/ROS2_unique_identifier_msgs__msg__UUID.h"
#include "forte_array_at.h"


class CIEC_ROS2_action_msgs__msg__GoalInfo: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_action_msgs__msg__GoalInfo)

  public:
      CIEC_ROS2_action_msgs__msg__GoalInfo();

      virtual ~CIEC_ROS2_action_msgs__msg__GoalInfo() {
      }

          CIEC_ROS2_unique_identifier_msgs__msg__UUID &goal_id() {
            return *static_cast<CIEC_ROS2_unique_identifier_msgs__msg__UUID*>(getMember(0));
          }
          
          CIEC_ROS2_builtin_interfaces__msg__Time &stamp() {
            return *static_cast<CIEC_ROS2_builtin_interfaces__msg__Time*>(getMember(1));
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_ACTION_MSGS__MSG__GOALINFO_H_


