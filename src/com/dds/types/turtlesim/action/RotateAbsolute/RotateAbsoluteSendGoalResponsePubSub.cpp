#include "../../../../util/convert.h"

#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__SendGoal__Response.h"
#include "modules/ros2/builtin_interfaces/msg/Time/ROS2_builtin_interfaces__msg__Time.h"

#include "RotateAbsoluteSendGoalResponsePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteSendGoalResponsePubSub_gen.cpp"
#endif
#include "TimePubSubTypes.h"

using namespace turtlesim;
using namespace unique_identifier_msgs::msg;
using namespace builtin_interfaces::msg;

std::string RotateAbsoluteSendGoalResponsePubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteSendGoalResponsePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__SendGoal__Response;
}

bool RotateAbsoluteSendGoalResponsePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__SendGoal__Response *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__SendGoal__Response *) data;

  bool accepted = casted->accepted();

  Time time;
  int32_t sec = casted->stamp().sec();
  uint32_t nanosec = casted->stamp().nanosec();
  time.sec() = sec;
  time.nanosec() = nanosec;

  RotateAbsolute_SendGoal_Response response;
  response.accepted(accepted);
  response.stamp(time);

  return this->write(&response);
}

std::optional<CIEC_STRUCT> RotateAbsoluteSendGoalResponsePubSub::receive() {
  RotateAbsolute_SendGoal_Response response;
  bool taken;
  this->take(&taken, &response);
  if (!taken) return std::nullopt;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__SendGoal__Response ciecStruct;

  CIEC_BOOL ciecAccepted = CIEC_BOOL(response.accepted());
  ciecStruct.accepted() = ciecAccepted;

  CIEC_ROS2_builtin_interfaces__msg__Time ciecStamp;
  ciecStamp.sec() = CIEC_INT(response.stamp().sec());
  ciecStamp.nanosec() = CIEC_UINT(response.stamp().nanosec());
  ciecStruct.stamp() = ciecStamp;

  return ciecStruct;
}
