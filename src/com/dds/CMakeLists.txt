forte_add_network_layer(DDS OFF "dds" CDDSComLayer ddslayer "Enable a DDS Com Layer")
if(FORTE_COM_DDS)

  # include libs
  # forte_add_include_directories(
  #   "/home/piepmatz/ros2_humble/install/fastcdr/include"
  #   "/home/piepmatz/ros2_humble/install/fastrtps/include"
  # )
  # forte_add_link_directories(
  #   "/home/piepmatz/ros2_humble/install/fastcdr/lib"
  #   "/home/piepmatz/ros2_humble/install/fastrtps/lib"
  # )
  forte_add_include_directories("/home/piepmatz/Fast-DDS/install/include")
  forte_add_link_directories("/home/piepmatz/Fast-DDS/install/lib")
  

  # include this directory
  forte_add_include_directories(${CMAKE_CURRENT_SOURCE_DIR})
  forte_add_handler(CDDSHandler ddshandler)
  forte_add_sourcefile_hcpp(ddspubsub ddshandler)

  # include types
  add_subdirectory("types/action_msgs")
  add_subdirectory("types/example_interfaces")
  add_subdirectory("types/std_msgs")
  add_subdirectory("types/turtlesim")
  add_subdirectory("types/unique_identifier_msgs")

  # include util
  forte_add_sourcefile_hcpp(util/convert)

  # add link libraries
  forte_add_link_library(
    fastrtps 
    fastcdr 
    # foonathan_memory-0.7.3
    tinyxml2
  )

  # fast-dds requires this
  forte_add_definition(-fexceptions)
  forte_add_definition(-pthread)

  forte_add_custom_configuration("#cmakedefine FORTE_COM_DDS")

endif(FORTE_COM_DDS)
