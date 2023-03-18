#include "modules/ros2/turtlesim/srv/Spawn/ROS2_turtlesim__srv__Spawn__Request.h"

#include "SpawnRequestPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SpawnRequestPubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string SpawnRequestPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool SpawnRequestPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__srv__Spawn__Request;
}

bool SpawnRequestPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__srv__Spawn__Request *casted = 
    (CIEC_ROS2_turtlesim__srv__Spawn__Request *) data;
  float x = casted->x();
  float y = casted->y();
  float theta = casted->theta();
  std::string name = casted->name().getValue();

  Spawn_Request spawnRequest;
  spawnRequest.x(x);
  spawnRequest.y(y);
  spawnRequest.theta(theta);
  spawnRequest.name(name);

  return this->write(&spawnRequest);
}

CIEC_STRUCT SpawnRequestPubSub::receive() {
  Spawn_Request spawnRequest;
  this->take(&spawnRequest);

  CIEC_REAL ciecX = CIEC_REAL(spawnRequest.x());
  CIEC_REAL ciecY = CIEC_REAL(spawnRequest.y());
  CIEC_REAL ciecTheta = CIEC_REAL(spawnRequest.theta());
  CIEC_STRING ciecName = CIEC_STRING(spawnRequest.name().c_str());
  CIEC_ROS2_turtlesim__srv__Spawn__Request ciecStruct = CIEC_ROS2_turtlesim__srv__Spawn__Request();
  ciecStruct.x() = ciecX;
  ciecStruct.y() = ciecY;
  ciecStruct.theta() = ciecTheta;
  ciecStruct.name() = ciecName;

  return ciecStruct;
}
