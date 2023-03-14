forte_add_module(ROS2 OFF "ROS2 data types")
if (FORTE_MODULE_ROS2)
  add_subdirectory("std_msgs")
endif()