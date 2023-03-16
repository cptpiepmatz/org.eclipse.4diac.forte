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

#include "ROS2_action_msgs__msg__GoalInfo.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_action_msgs__msg__GoalInfo_gen.cpp"
#endif

DEFINE_FIRMWARE_DATATYPE(ROS2_action_msgs__msg__GoalInfo, g_nStringIdROS2_action_msgs__msg__GoalInfo);

CIEC_ROS2_action_msgs__msg__GoalInfo::CIEC_ROS2_action_msgs__msg__GoalInfo() :
    CIEC_STRUCT(g_nStringIdROS2_action_msgs__msg__GoalInfo, 2, scmElementTypes, scmElementNames, e_APPLICATION + e_CONSTRUCTED + 1) {
}

const CStringDictionary::TStringId CIEC_ROS2_action_msgs__msg__GoalInfo::scmElementNames[] = {g_nStringIdgoal_id, g_nStringIdstamp};
const CStringDictionary::TStringId CIEC_ROS2_action_msgs__msg__GoalInfo::scmElementTypes[] = {g_nStringIdROS2_unique_identifier_msgs__msg__UUID, g_nStringIdROS2_builtin_interfaces__msg__Time};


