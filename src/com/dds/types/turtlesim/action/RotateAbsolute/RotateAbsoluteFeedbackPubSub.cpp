#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__Feedback.h"

#include "RotateAbsoluteFeedbackPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteFeedbackPubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string RotateAbsoluteFeedbackPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteFeedbackPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__Feedback;
}

bool RotateAbsoluteFeedbackPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__Feedback *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__Feedback *) data;
  float remaining = casted->remaining();

  RotateAbsolute_Feedback feedback;
  feedback.remaining(remaining);

  return this->write(&feedback);
}

std::optional<CIEC_STRUCT> RotateAbsoluteFeedbackPubSub::receive() {
  RotateAbsolute_Feedback feedback;
  bool taken;
  this->take(&taken, &feedback);
  if (!taken) return std::nullopt;

  CIEC_REAL ciecRemaining = CIEC_REAL(feedback.remaining());
  CIEC_ROS2_turtlesim__action__RotateAbsolute__Feedback ciecStruct = 
    CIEC_ROS2_turtlesim__action__RotateAbsolute__Feedback();
  ciecStruct.remaining() = ciecRemaining;

  return ciecStruct;
}
