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

#include "ROS2_action_msgs__msg__GoalStatus.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_action_msgs__msg__GoalStatus_gen.cpp"
#endif

DEFINE_FIRMWARE_DATATYPE(ROS2_action_msgs__msg__GoalStatus, g_nStringIdROS2_action_msgs__msg__GoalStatus);

CIEC_ROS2_action_msgs__msg__GoalStatus::CIEC_ROS2_action_msgs__msg__GoalStatus() :
    CIEC_STRUCT(g_nStringIdROS2_action_msgs__msg__GoalStatus, 2, scmElementTypes, scmElementNames, e_APPLICATION + e_CONSTRUCTED + 1) {
}

const CStringDictionary::TStringId CIEC_ROS2_action_msgs__msg__GoalStatus::scmElementNames[] = {g_nStringIdgoal_info, g_nStringIdstatus};
const CStringDictionary::TStringId CIEC_ROS2_action_msgs__msg__GoalStatus::scmElementTypes[] = {g_nStringIdROS2_action_msgs__msg__GoalInfo, g_nStringIdSINT};


