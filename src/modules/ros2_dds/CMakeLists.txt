forte_add_module(ROS2_DDS OFF "ROS2 DDS wrappers")
if (FORTE_MODULE_ROS2_DDS)
  forte_add_sourcefile_hcpp(
    
    # MSG
    MSG_SUBSCRIBER
    MSG_PUBLISHER

    # SRV
    SRV_CLIENT
    SRV_SERVER

    # ACTION
    ACTION_CLIENT

    # net
    net/DDS_PUB_SUB
    net/DDS_PUB
    net/DDS_SUB

    # util
    util/CONSTRUCT_DDS_ID
    util/CONSTRUCT_DDS_TOPIC
    util/CONSTRUCT_DDS_TYPE

  )
endif()