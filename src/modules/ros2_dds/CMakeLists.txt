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
    ACTION_SERVER

    # action/
    action/ACTION_CLIENT_CANCEL_GOAL
    action/ACTION_CLIENT_FEEDBACK_MESSAGE
    action/ACTION_CLIENT_GET_RESULT
    action/ACTION_CLIENT_SEND_GOAL
    action/ACTION_SERVER_CANCEL_GOAL
    action/ACTION_SERVER_FEEDBACK_MESSAGE
    action/ACTION_SERVER_GET_RESULT
    action/ACTION_SERVER_SEND_GOAL

    # net/
    net/DDS_PUB
    net/DDS_SUB
    net/DDS_SERVER
    net/DDS_CLIENT

    # util/
    util/CONSTRUCT_DDS_ID
    util/CONSTRUCT_DDS_TOPIC
    util/CONSTRUCT_DDS_TYPE
    util/GEN_UUID

  )
endif()