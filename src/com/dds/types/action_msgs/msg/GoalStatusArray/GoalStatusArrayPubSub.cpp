#include "../../../../util/convert.h";

#include "modules/ros2/action_msgs/msg/GoalStatusArray/ROS2_action_msgs__msg__GoalStatusArray.h";


#include "GoalStatusArrayPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "GoalStatusArrayPubSub_gen.cpp"
#endif;

using namespace action_msgs;
using namespace action_msgs::msg;
using namespace unique_identifier_msgs::msg;

std::string GoalStatusArrayPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool GoalStatusArrayPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_action_msgs__msg__GoalStatusArray;
}

bool GoalStatusArrayPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_action_msgs__msg__GoalStatusArray *casted = (CIEC_ROS2_action_msgs__msg__GoalStatusArray *) data;

  std::vector<GoalStatus> statusList;
  for (int i = 0; i < 16; i++) {
    CIEC_ROS2_action_msgs__msg__GoalStatus status = casted->status_list()[i];
    GoalStatus goalStatus;
    goalStatus.goal_info().goal_id(ciec2dds(status.goal_info().goal_id()));
    goalStatus.goal_info().stamp().sec() = status.goal_info().stamp().sec();
    goalStatus.goal_info().stamp().nanosec() = status.goal_info().stamp().nanosec();
    goalStatus.status(status.status());
    statusList.push_back(goalStatus);
  }

  GoalStatusArray statusArray;
  statusArray.status_list(statusList);

  return this->write(&statusArray);
}

std::optional<CIEC_STRUCT> GoalStatusArrayPubSub::receive() {
  GoalStatusArray goalStatusArray;
  bool taken;
  this->take(&taken, &goalStatusArray);
  if (!taken) return std::nullopt;

  CIEC_ROS2_action_msgs__msg__GoalStatusArray ciecGoalStatusArray;
  for (size_t i = 0; i < goalStatusArray.status_list().size(); i++) {
    ciecGoalStatusArray.status_list()[i].status() = 
      goalStatusArray.status_list()[i].status();

    ciecGoalStatusArray.status_list()[i].goal_info().goal_id() = 
      dds2ciec(goalStatusArray.status_list()[i].goal_info().goal_id());

    ciecGoalStatusArray.status_list()[i].goal_info().stamp().sec() = 
      goalStatusArray.status_list()[i].goal_info().stamp().sec();

    ciecGoalStatusArray.status_list()[i].goal_info().stamp().nanosec() = 
      goalStatusArray.status_list()[i].goal_info().stamp().nanosec();
  }

  return ciecGoalStatusArray;
}
