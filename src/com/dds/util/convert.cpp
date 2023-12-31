#include "convert.h"

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

  char fmt[100];
  sprintf(
    fmt, 
    "(uuid:=[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d])",
    uuid[0],
    uuid[1],
    uuid[2],
    uuid[3],
    uuid[4],
    uuid[5],
    uuid[6],
    uuid[7],
    uuid[8],
    uuid[9],
    uuid[10],
    uuid[11],
    uuid[12],
    uuid[13],
    uuid[14],
    uuid[15]
  );

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciec;
  ciec.fromString(fmt);

  return ciec;
};

}
}