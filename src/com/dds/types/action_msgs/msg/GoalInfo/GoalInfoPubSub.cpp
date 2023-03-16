#include "modules/ros2/action_msgs/msg/GoalInfo/ROS2_action_msgs__msg__GoalInfo.h"

#include "GoalInfoPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "GoalInfoPubSub_gen.cpp"
#endif

#include "UUIDPubSubTypes.h"
#include "TimePubSubTypes.h"

#include <boost/format.hpp>

using namespace action_msgs;
using namespace builtin_interfaces::msg;
using namespace unique_identifier_msgs::msg;

std::string GoalInfoPubSub::registerType() {
  this->type.register_type(this->m_pParticipant);
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

  return this->m_pWriter->write(&goalInfo);
}

CIEC_STRUCT GoalInfoPubSub::receive() {
  GoalInfo goalInfo;
  SampleInfo info;
  this->m_pReader->take_next_sample(&goalInfo, &info);
  
  unique_identifier_msgs::msg::uint8__16 uuid = goalInfo.goal_id().uuid();
  int sec = goalInfo.stamp().sec();
  unsigned int nanosec = goalInfo.stamp().nanosec();

  boost::format fmt(
    "(goal_id:=(uuid:[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]),stamp:=(sec:=%d,nanosec:=%d))"
  );
  for (const auto& value : uuid) fmt % value;
  fmt % sec % nanosec;

  CIEC_ROS2_action_msgs__msg__GoalInfo ciecStruct;
  ciecStruct.fromString(fmt.str().c_str());

  return ciecStruct;
}
