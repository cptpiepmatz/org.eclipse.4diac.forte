#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__Result.h"

#include "RotateAbsoluteResultPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteResultPubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string RotateAbsoluteResultPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteResultPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__Result;
}

bool RotateAbsoluteResultPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__Result *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__Result *) data;
  float delta = casted->delta();

  RotateAbsolute_Result result;
  result.delta(delta);

  return this->write(&result);
}

std::optional<CIEC_STRUCT> RotateAbsoluteResultPubSub::receive() {
  RotateAbsolute_Result result;
  bool taken;
  this->take(&taken, &result);
  if (!taken) return std::nullopt;

  CIEC_REAL ciecDelta = CIEC_REAL(result.delta());
  CIEC_ROS2_turtlesim__action__RotateAbsolute__Result ciecStruct = 
    CIEC_ROS2_turtlesim__action__RotateAbsolute__Result();
  ciecStruct.delta() = ciecDelta;

  return ciecStruct;
}
