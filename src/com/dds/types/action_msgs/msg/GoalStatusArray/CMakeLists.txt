forte_add_sourcefile_cpp(
  GoalStatus.cxx 
  GoalStatusPubSubTypes.cxx
  GoalStatusArray.cxx
  GoalStatusArrayPubSubTypes.cxx
)

forte_add_sourcefile_h(
  Time.h
  TimePubSubTypes.h
  UUID.h
  UUIDPubSubTypes.h
  GoalInfo.h
  GoalInfoPubSubTypes.h
  GoalStatus.h
  GoalStatusPubSubTypes.h
  GoalStatusArray.h
  GoalStatusArrayPubSubTypes.h
)

forte_add_sourcefile_hcpp(
  GoalStatusArrayPubSub
)
