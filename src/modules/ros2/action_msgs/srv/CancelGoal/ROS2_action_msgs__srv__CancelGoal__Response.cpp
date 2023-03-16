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

#include "ROS2_action_msgs__srv__CancelGoal__Response.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_action_msgs__srv__CancelGoal__Response_gen.cpp"
#endif

DEFINE_FIRMWARE_DATATYPE(ROS2_action_msgs__srv__CancelGoal__Response, g_nStringIdROS2_action_msgs__srv__CancelGoal__Response);

CIEC_ROS2_action_msgs__srv__CancelGoal__Response::CIEC_ROS2_action_msgs__srv__CancelGoal__Response() :
    CIEC_STRUCT(g_nStringIdROS2_action_msgs__srv__CancelGoal__Response, 2, scmElementTypes, scmElementNames, e_APPLICATION + e_CONSTRUCTED + 1) {
}

const CStringDictionary::TStringId CIEC_ROS2_action_msgs__srv__CancelGoal__Response::scmElementNames[] = {g_nStringIdreturn_code, g_nStringIdgoals_canceling};
const CStringDictionary::TStringId CIEC_ROS2_action_msgs__srv__CancelGoal__Response::scmElementTypes[] = {g_nStringIdSINT, g_nStringIdARRAY, 16, g_nStringIdROS2_action_msgs__msg__GoalInfo};


