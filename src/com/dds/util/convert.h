#ifndef _COM_DDS_UTIL_CONVERT_H_
#define _COM_DDS_UTIL_CONVERT_H_

#include "../types/unique_identifier_msgs/msg/UUID/UUID.h"
#include "modules/ros2/unique_identifier_msgs/msg/UUID/ROS2_unique_identifier_msgs__msg__UUID.h"

namespace unique_identifier_msgs {
namespace msg {

UUID ciec2dds(CIEC_ROS2_unique_identifier_msgs__msg__UUID paCIEC);
CIEC_ROS2_unique_identifier_msgs__msg__UUID dds2ciec(UUID paDDS);

} // namespace msg
} // namespace unique_identifier_msgs

#endif