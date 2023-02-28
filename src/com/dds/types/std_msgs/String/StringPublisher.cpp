#include "modules/ros2/std_msgs/String/ROS2_std_msgs__String.h"

#include "StringPublisher.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "StringPublisher_gen.cpp"
#endif

using namespace std_msgs;

std::string StringPublisher::registerType() {
  this->type.register_type(this->participant);
  return this->type.get_type_name();
}

bool StringPublisher::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_std_msgs__String;
}

bool StringPublisher::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_std_msgs__String *casted = (CIEC_ROS2_std_msgs__String *) data;
  std::cout << casted->data().getValue() << std::endl;

  String string;
  string.data(casted->data().getValue());

  return this->writer->write(&string);
}
