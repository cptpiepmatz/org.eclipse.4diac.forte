#include "modules/ros2/turtlesim/srv/CancelGoal/ROS2_turtlesim__srv__CancelGoal__Response.h"

#include "CancelGoalResponsePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CancelGoalResponsePubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string CancelGoalResponsePubSub::registerType() {
  this->type.register_type(this->m_pParticipant);
  return this->type.get_type_name();
}

bool CancelGoalResponsePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__srv__CancelGoal__Response;
}

bool CancelGoalResponsePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__srv__CancelGoal__Response *casted = 
    (CIEC_ROS2_turtlesim__srv__CancelGoal__Response *) data;
  std::string name = casted->name().getValue();

  CancelGoal_Response CancelGoalResponse;
  CancelGoalResponse.name(name);

  return this->m_pWriter->write(&CancelGoalResponse);
}

CIEC_STRUCT CancelGoalResponsePubSub::receive() {
  CancelGoal_Response CancelGoalResponse;
  SampleInfo info;
  this->m_pReader->take_next_sample(&CancelGoalResponse, &info);

  CIEC_STRING ciecName = CIEC_STRING(CancelGoalResponse.name().c_str());
  CIEC_ROS2_turtlesim__srv__CancelGoal__Response ciecStruct = CIEC_ROS2_turtlesim__srv__CancelGoal__Response();
  ciecStruct.name() = ciecName;

  return ciecStruct;
}
