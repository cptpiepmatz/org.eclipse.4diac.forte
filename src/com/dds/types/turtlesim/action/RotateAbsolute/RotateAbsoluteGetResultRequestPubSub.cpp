#include "../../../../util/convert.h"

#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__GetResult__Request.h"

#include "RotateAbsoluteGetResultRequestPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteGetResultRequestPubSub_gen.cpp"
#endif

using namespace turtlesim;
using namespace unique_identifier_msgs::msg;

std::string RotateAbsoluteGetResultRequestPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteGetResultRequestPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__GetResult__Request;
}

bool RotateAbsoluteGetResultRequestPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__GetResult__Request *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__GetResult__Request *) data;

  UUID uuid = ciec2dds(casted->goal_id());

  RotateAbsolute_GetResult_Request request;
  request.goal_id(uuid);

  return this->write(&request);
}

std::optional<CIEC_STRUCT> RotateAbsoluteGetResultRequestPubSub::receive() {
  RotateAbsolute_GetResult_Request request;
  bool taken;
  this->take(&taken, &request);
  if (!taken) return std::nullopt;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__GetResult__Request ciecStruct;

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciecUUID = dds2ciec(request.goal_id());
  ciecStruct.goal_id() = ciecUUID;

  return ciecStruct;
}
