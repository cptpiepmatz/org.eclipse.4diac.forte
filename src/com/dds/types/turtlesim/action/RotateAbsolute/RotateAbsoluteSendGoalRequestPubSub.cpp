#include "../../../../util/convert.h"

#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__SendGoal__Request.h"

#include "RotateAbsoluteSendGoalRequestPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteSendGoalRequestPubSub_gen.cpp"
#endif

using namespace turtlesim;
using namespace unique_identifier_msgs::msg;

std::string RotateAbsoluteSendGoalRequestPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteSendGoalRequestPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__SendGoal__Request;
}

bool RotateAbsoluteSendGoalRequestPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__SendGoal__Request *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__SendGoal__Request *) data;

  UUID uuid = ciec2dds(casted->goal_id());

  RotateAbsolute_Goal goal;
  float theta = casted->goal().theta();
  goal.theta(theta);

  RotateAbsolute_SendGoal_Request request;
  request.goal_id(uuid);
  request.goal(goal);

  return this->write(&request);
}

std::optional<CIEC_STRUCT> RotateAbsoluteSendGoalRequestPubSub::receive() {
  RotateAbsolute_SendGoal_Request request;
  bool taken;
  this->take(&taken, &request);
  if (!taken) return std::nullopt;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__SendGoal__Request ciecStruct;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__Goal ciecGoal;
  ciecGoal.theta() = request.goal().theta();
  ciecStruct.goal() = ciecGoal;

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciecUUID = dds2ciec(request.goal_id());
  ciecStruct.goal_id() = ciecUUID;

  return ciecStruct;
}
