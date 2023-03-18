#include "modules/ros2/turtlesim/srv/Spawn/ROS2_turtlesim__srv__Spawn__Response.h"

#include "SpawnResponsePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SpawnResponsePubSub_gen.cpp"
#endif

using namespace turtlesim;

std::string SpawnResponsePubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool SpawnResponsePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_turtlesim__srv__Spawn__Response;
}

bool SpawnResponsePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_turtlesim__srv__Spawn__Response *casted = 
    (CIEC_ROS2_turtlesim__srv__Spawn__Response *) data;
  std::string name = casted->name().getValue();

  Spawn_Response spawnResponse;
  spawnResponse.name(name);

  return this->write(&spawnResponse);
}

CIEC_STRUCT SpawnResponsePubSub::receive() {
  Spawn_Response spawnResponse;
  this->take(&spawnResponse);

  CIEC_STRING ciecName = CIEC_STRING(spawnResponse.name().c_str());
  CIEC_ROS2_turtlesim__srv__Spawn__Response ciecStruct = CIEC_ROS2_turtlesim__srv__Spawn__Response();
  ciecStruct.name() = ciecName;

  return ciecStruct;
}
