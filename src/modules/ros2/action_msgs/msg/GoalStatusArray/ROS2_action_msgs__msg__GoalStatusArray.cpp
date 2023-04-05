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

#include "ROS2_action_msgs__msg__GoalStatusArray.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_action_msgs__msg__GoalStatusArray_gen.cpp"
#endif

DEFINE_FIRMWARE_DATATYPE(ROS2_action_msgs__msg__GoalStatusArray, g_nStringIdROS2_action_msgs__msg__GoalStatusArray);

CIEC_ROS2_action_msgs__msg__GoalStatusArray::CIEC_ROS2_action_msgs__msg__GoalStatusArray() :
    CIEC_STRUCT(g_nStringIdROS2_action_msgs__msg__GoalStatusArray, 1, scmElementTypes, scmElementNames, e_APPLICATION + e_CONSTRUCTED + 1) {
}

const CStringDictionary::TStringId CIEC_ROS2_action_msgs__msg__GoalStatusArray::scmElementNames[] = {g_nStringIdstatus_list};
const CStringDictionary::TStringId CIEC_ROS2_action_msgs__msg__GoalStatusArray::scmElementTypes[] = {g_nStringIdARRAY, 16, g_nStringIdROS2_action_msgs__msg__GoalStatus};


