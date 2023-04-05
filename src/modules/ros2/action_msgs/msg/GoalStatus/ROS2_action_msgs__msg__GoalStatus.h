/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_action_msgs__msg__GoalStatus
 *** Description: 
 *** Version:
***     1.0: 2023-04-05/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ROS2_ACTION_MSGS__MSG__GOALSTATUS_H_
#define _ROS2_ACTION_MSGS__MSG__GOALSTATUS_H_

#include "forte_struct.h"

#include "../GoalInfo/ROS2_action_msgs__msg__GoalInfo.h"
#include "forte_sint.h"
#include "forte_array_at.h"


class CIEC_ROS2_action_msgs__msg__GoalStatus: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_action_msgs__msg__GoalStatus)

  public:
      CIEC_ROS2_action_msgs__msg__GoalStatus();

      virtual ~CIEC_ROS2_action_msgs__msg__GoalStatus() {
      }

          CIEC_ROS2_action_msgs__msg__GoalInfo &goal_info() {
            return *static_cast<CIEC_ROS2_action_msgs__msg__GoalInfo*>(getMember(0));
          }
          
          CIEC_SINT &status() {
            return *static_cast<CIEC_SINT*>(getMember(1));
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_ACTION_MSGS__MSG__GOALSTATUS_H_


