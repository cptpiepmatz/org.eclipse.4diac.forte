#include "convert.h"

#include <boost/format.hpp>

namespace unique_identifier_msgs {
namespace msg {

UUID ciec2dds(CIEC_ROS2_unique_identifier_msgs__msg__UUID paCIEC) {
  unique_identifier_msgs::msg::uint8__16 uuidArray = {};
  for (size_t i = 0; i < 16; i++) uuidArray[i] = paCIEC.uuid()[i];

  UUID uuid;
  uuid.uuid(uuidArray);

  return uuid;
}

CIEC_ROS2_unique_identifier_msgs__msg__UUID dds2ciec(UUID paDDS) {
  unique_identifier_msgs::msg::uint8__16 uuid = paDDS.uuid();

  boost::format fmt("(uuid:[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d])");
  for (const auto& value : uuid) fmt % value;

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciec;
  ciec.fromString(fmt.str().c_str());

  return ciec;
};

}
}