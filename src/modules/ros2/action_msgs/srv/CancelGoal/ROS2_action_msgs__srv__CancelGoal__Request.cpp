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

#include "ROS2_action_msgs__srv__CancelGoal__Request.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_action_msgs__srv__CancelGoal__Request_gen.cpp"
#endif

DEFINE_FIRMWARE_DATATYPE(ROS2_action_msgs__srv__CancelGoal__Request, g_nStringIdROS2_action_msgs__srv__CancelGoal__Request);

CIEC_ROS2_action_msgs__srv__CancelGoal__Request::CIEC_ROS2_action_msgs__srv__CancelGoal__Request() :
    CIEC_STRUCT(g_nStringIdROS2_action_msgs__srv__CancelGoal__Request, 1, scmElementTypes, scmElementNames, e_APPLICATION + e_CONSTRUCTED + 1) {
}

const CStringDictionary::TStringId CIEC_ROS2_action_msgs__srv__CancelGoal__Request::scmElementNames[] = {g_nStringIdgoal_info};
const CStringDictionary::TStringId CIEC_ROS2_action_msgs__srv__CancelGoal__Request::scmElementTypes[] = {g_nStringIdROS2_action_msgs__msg__GoalInfo};


