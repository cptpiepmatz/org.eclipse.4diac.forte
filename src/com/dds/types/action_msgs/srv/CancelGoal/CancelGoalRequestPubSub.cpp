#include "modules/ros2/turtlesim/srv/CancelGoal/ROS2_turtlesim__srv__CancelGoal__Request.h"

#include "CancelGoalRequestPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CancelGoalRequestPubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string CancelGoalRequestPubSub::registerType() {
  this->type.register_type(this->m_pParticipant);
  return this->type.get_type_name();
}

bool CancelGoalRequestPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__srv__CancelGoal__Request;
}

bool CancelGoalRequestPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__srv__CancelGoal__Request *casted = 
    (CIEC_ROS2_turtlesim__srv__CancelGoal__Request *) data;
  float x = casted->x();
  float y = casted->y();
  float theta = casted->theta();
  std::string name = casted->name().getValue();

  CancelGoal_Request CancelGoalRequest;
  CancelGoalRequest.x(x);
  CancelGoalRequest.y(y);
  CancelGoalRequest.theta(theta);
  CancelGoalRequest.name(name);

  return this->m_pWriter->write(&CancelGoalRequest);
}

CIEC_STRUCT CancelGoalRequestPubSub::receive() {
  CancelGoal_Request CancelGoalRequest;
  SampleInfo info;
  this->m_pReader->take_next_sample(&CancelGoalRequest, &info);

  CIEC_REAL ciecX = CIEC_REAL(CancelGoalRequest.x());
  CIEC_REAL ciecY = CIEC_REAL(CancelGoalRequest.y());
  CIEC_REAL ciecTheta = CIEC_REAL(CancelGoalRequest.theta());
  CIEC_STRING ciecName = CIEC_STRING(CancelGoalRequest.name().c_str());
  CIEC_ROS2_turtlesim__srv__CancelGoal__Request ciecStruct = CIEC_ROS2_turtlesim__srv__CancelGoal__Request();
  ciecStruct.x() = ciecX;
  ciecStruct.y() = ciecY;
  ciecStruct.theta() = ciecTheta;
  ciecStruct.name() = ciecName;

  return ciecStruct;
}
