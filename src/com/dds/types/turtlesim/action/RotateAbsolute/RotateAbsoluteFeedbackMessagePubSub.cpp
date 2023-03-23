#include "../../../../util/convert.h"

#include "modules/ros2/turtlesim/action/RotateAbsolute/ROS2_turtlesim__action__RotateAbsolute__FeedbackMessage.h"

#include "RotateAbsoluteFeedbackMessagePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RotateAbsoluteFeedbackMessagePubSub_gen.cpp"
#endif

using namespace turtlesim;
using namespace unique_identifier_msgs::msg;

std::string RotateAbsoluteFeedbackMessagePubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool RotateAbsoluteFeedbackMessagePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__action__RotateAbsolute__FeedbackMessage;
}

bool RotateAbsoluteFeedbackMessagePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__action__RotateAbsolute__FeedbackMessage *casted =
    (CIEC_ROS2_turtlesim__action__RotateAbsolute__FeedbackMessage *) data;

  UUID uuid = ciec2dds(casted->goal_id());

  RotateAbsolute_Feedback feedback;
  float remaining = casted->feedback().remaining();
  feedback.remaining(remaining);

  RotateAbsolute_FeedbackMessage feedbackMessage;
  feedbackMessage.goal_id(uuid);
  feedbackMessage.feedback(feedback);

  return this->write(&feedbackMessage);
}

std::optional<CIEC_STRUCT> RotateAbsoluteFeedbackMessagePubSub::receive() {
  RotateAbsolute_FeedbackMessage feedbackMessage;
  bool taken;
  this->take(&taken, &feedbackMessage);
  if (!taken) return std::nullopt;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__FeedbackMessage ciecStruct;

  CIEC_ROS2_turtlesim__action__RotateAbsolute__Feedback ciecFeedback;
  ciecFeedback.remaining() = feedbackMessage.feedback().remaining();
  ciecStruct.feedback() = ciecFeedback;

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciecUUID = dds2ciec(feedbackMessage.goal_id());
  ciecStruct.goal_id() = ciecUUID;

  return ciecStruct;
}
