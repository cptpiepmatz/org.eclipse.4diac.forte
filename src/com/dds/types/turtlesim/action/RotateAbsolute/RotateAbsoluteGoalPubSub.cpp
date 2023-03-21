#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__Goal.h"

#include "RotateAbsoluteGoalPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteGoalPubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string RotateAbsoluteGoalPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteGoalPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__Goal;
}

bool RotateAbsoluteGoalPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__Goal *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__Goal *) data;
  float theta = casted->theta();

  RotateAbsolute_Goal goal;
  goal.theta(theta);

  return this->write(&goal);
}

std::optional<CIEC_STRUCT> RotateAbsoluteGoalPubSub::receive() {
  RotateAbsolute_Goal goal;
  bool taken;
  this->take(&taken, &goal);
  if (!taken) return std::nullopt;

  CIEC_REAL ciecTheta = CIEC_REAL(goal.theta());
  CIEC_ROS2_turtlesim__action__RotateAbsolute__Goal ciecStruct = 
    CIEC_ROS2_turtlesim__action__RotateAbsolute__Goal();
  ciecStruct.theta() = ciecTheta;

  return ciecStruct;
}
