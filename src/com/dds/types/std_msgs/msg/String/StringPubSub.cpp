#include "modules/ros2/std_msgs/msg/String/ROS2_std_msgs__msg__String.h"

#include "StringPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "StringPubSub_gen.cpp"
#endif

using namespace std_msgs;

std::string StringPubSub::registerType(DomainParticipant* paParticipant) {
  this->type.register_type(paParticipant);
  return this->type.get_type_name();
}

bool StringPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_std_msgs__msg__String;
}

bool StringPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_std_msgs__msg__String *casted = (CIEC_ROS2_std_msgs__msg__String *) data;
  std::string value = casted->data().getValue();
  
  DEVLOG_DEBUG(("[DDS Publisher/std_msgs/String] Sent message '" + value + "'.\n").c_str());

  String string;
  string.data(value);

  return this->write(&string);
}

CIEC_STRUCT StringPubSub::receive() {
  String string;
  this->take(&string);

  CIEC_STRING ciecString = CIEC_STRING(string.data().c_str());
  CIEC_ROS2_std_msgs__msg__String ciecStruct = CIEC_ROS2_std_msgs__msg__String();
  ciecStruct.data() = ciecString;

  return ciecStruct;
}
