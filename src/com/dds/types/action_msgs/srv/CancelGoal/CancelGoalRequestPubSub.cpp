#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Request.h"

#include "CancelGoalRequestPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CancelGoalRequestPubSub_gen.cpp"
#endif

#include "GoalInfoPubSubTypes.h"
#include "UUIDPubSubTypes.h"
#include "TimePubSubTypes.h"

#include <boost/format.hpp>

using namespace action_msgs;
using namespace action_msgs::msg;
using namespace unique_identifier_msgs::msg;
using namespace builtin_interfaces::msg;

std::string CancelGoalRequestPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool CancelGoalRequestPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_action_msgs__srv__CancelGoal__Request;
}

bool CancelGoalRequestPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_action_msgs__srv__CancelGoal__Request *casted = 
    (CIEC_ROS2_action_msgs__srv__CancelGoal__Request *) data;

  unique_identifier_msgs::msg::uint8__16 uuidArray = {};
  for (size_t i = 0; i < 16; i++) uuidArray[i] = casted->goal_info().goal_id().uuid()[i];
  int sec = casted->goal_info().stamp().sec();
  unsigned int nanosec = casted->goal_info().stamp().nanosec();

  UUID uuid;
  uuid.uuid(uuidArray);

  Time time;
  time.sec(sec);
  time.nanosec(nanosec);

  GoalInfo goalInfo;
  goalInfo.goal_id(uuid);
  goalInfo.stamp(time);

  CancelGoal_Request request;
  request.goal_info() = goalInfo;

  return this->write(&request);
}

std::optional<CIEC_STRUCT> CancelGoalRequestPubSub::receive() {
  CancelGoal_Request request;
  bool taken;
  this->take(&taken, &request);
  if (!taken) return std::nullopt;
  
  unique_identifier_msgs::msg::uint8__16 uuid = request.goal_info().goal_id().uuid();
  int sec = request.goal_info().stamp().sec();
  unsigned int nanosec = request.goal_info().stamp().nanosec();

  boost::format fmt(
    "(goal_info:=(goal_id:=(uuid:[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]),stamp:=(sec:=%d,nanosec:=%d)))"
  );
  for (const auto& value : uuid) fmt % value;
  fmt % sec % nanosec;

  CIEC_ROS2_action_msgs__srv__CancelGoal__Request ciecStruct;
  ciecStruct.fromString(fmt.str().c_str());

  return ciecStruct;
}
