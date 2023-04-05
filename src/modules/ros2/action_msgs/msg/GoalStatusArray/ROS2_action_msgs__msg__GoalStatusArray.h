/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_action_msgs__msg__GoalStatusArray
 *** Description: A Template for a Data Type
 *** Version:
***     1.0: 2023-04-05/derPi -  - 
 *************************************************************************/

#ifndef _ROS2_ACTION_MSGS__MSG__GOALSTATUSARRAY_H_
#define _ROS2_ACTION_MSGS__MSG__GOALSTATUSARRAY_H_

#include "forte_struct.h"

#include "../GoalStatus/ROS2_action_msgs__msg__GoalStatus.h"
#include "forte_array.h"
#include "forte_array_at.h"


class CIEC_ROS2_action_msgs__msg__GoalStatusArray: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_action_msgs__msg__GoalStatusArray)

  public:
      CIEC_ROS2_action_msgs__msg__GoalStatusArray();

      virtual ~CIEC_ROS2_action_msgs__msg__GoalStatusArray() {
      }

          CIEC_ROS2_action_msgs__msg__GoalStatus *status_list() {
            return static_cast<CIEC_ROS2_action_msgs__msg__GoalStatus*>((*static_cast<CIEC_ARRAY *>(getMember(0)))[0]); //the first element marks the start of the array
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_ACTION_MSGS__MSG__GOALSTATUSARRAY_H_


