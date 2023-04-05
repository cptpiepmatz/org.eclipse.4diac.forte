#include "../../../../util/convert.h"

#include "modules/ros2/action_msgs/msg/GoalInfo/ROS2_action_msgs__msg__GoalInfo.h"

#include "GoalInfoPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "GoalInfoPubSub_gen.cpp"
#endif

#include "UUIDPubSubTypes.h"
#include "TimePubSubTypes.h"

using namespace action_msgs;
using namespace builtin_interfaces::msg;
using namespace unique_identifier_msgs::msg;

std::string GoalInfoPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool GoalInfoPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_action_msgs__msg__GoalInfo;
}

bool GoalInfoPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_action_msgs__msg__GoalInfo *casted = (CIEC_ROS2_action_msgs__msg__GoalInfo *) data;
  
  unique_identifier_msgs::msg::uint8__16 uuidArray = {};
  for (size_t i = 0; i < 16; i++) uuidArray[i] = casted->goal_id().uuid()[i];
  int sec = casted->stamp().sec();
  unsigned int nanosec = casted->stamp().nanosec();

  UUID uuid;
  uuid.uuid(uuidArray);

  Time time;
  time.sec(sec);
  time.nanosec(nanosec);

  GoalInfo goalInfo;
  goalInfo.goal_id(uuid);
  goalInfo.stamp(time);

  return this->write(&goalInfo);
}

std::optional<CIEC_STRUCT> GoalInfoPubSub::receive() {
  GoalInfo goalInfo;
  bool taken;
  this->take(&taken, &goalInfo);
  if (!taken) return std::nullopt;
  
  unique_identifier_msgs::msg::uint8__16 uuid = goalInfo.goal_id().uuid();
  int sec = goalInfo.stamp().sec();
  unsigned int nanosec = goalInfo.stamp().nanosec();

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciecUUID = dds2ciec(goalInfo.goal_id());
  CIEC_ROS2_builtin_interfaces__msg__Time ciecTime;
  ciecTime.nanosec() = goalInfo.stamp().nanosec();
  ciecTime.sec() = goalInfo.stamp().sec();

  CIEC_ROS2_action_msgs__msg__GoalInfo ciecStruct;
  ciecStruct.stamp() = ciecTime;
  ciecStruct.goal_id() = ciecUUID;

  return ciecStruct;
}
