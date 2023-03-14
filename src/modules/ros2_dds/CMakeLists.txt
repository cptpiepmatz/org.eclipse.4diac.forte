forte_add_module(ROS2_DDS OFF "ROS2 DDS wrappers")
if (FORTE_MODULE_ROS2_DDS)
  forte_add_sourcefile_hcpp(util/CONSTRUCT_DDS_ID)

  forte_add_sourcefile_hcpp(MSG_PUBLISHER)
  forte_add_sourcefile_hcpp(MSG_SUBSCRIBER)
endif()