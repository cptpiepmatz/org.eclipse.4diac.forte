#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__GetResult__Response.h"
#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__Result.h"

#include "RotateAbsoluteGetResultResponsePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteGetResultResponsePubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string RotateAbsoluteGetResultResponsePubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteGetResultResponsePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__GetResult__Response;
}

bool RotateAbsoluteGetResultResponsePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__GetResult__Response *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__GetResult__Response *) data;

  int8_t status = casted->status();
  float delta = casted->result().delta();

  RotateAbsolute_GetResult_Response response;
  response.status(status);
  response.result().delta(delta);

  return this->write(&response);
}

std::optional<CIEC_STRUCT> RotateAbsoluteGetResultResponsePubSub::receive() {
  RotateAbsolute_GetResult_Response response;
  bool taken;
  this->take(&taken, &response);
  if (!taken) return std::nullopt;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__GetResult__Response ciecStruct;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__Result ciecResult;
  ciecResult.delta() = response.result().delta();
  ciecStruct.result() = ciecResult;

  ciecStruct.status() = CIEC_SINT(response.status());

  return ciecStruct;
}
