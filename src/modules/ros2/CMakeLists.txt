forte_add_module(ROS2 OFF "ROS2 data types")
if (FORTE_MODULE_ROS2)
  forte_add_sourcefile_hcpp(std_msgs/String/ROS2_std_msgs__String)
endif()