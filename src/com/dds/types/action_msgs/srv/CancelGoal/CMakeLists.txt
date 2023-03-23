forte_add_sourcefile_cpp(
  CancelGoal.cxx
  CancelGoalPubSubTypes.cxx

  # already defined
  # GoalInfo.cxx 
  # GoalInfoPubSubTypes.cxx
  # Time.cxx
  # TimePubSubTypes.cxx
  # UUID.cxx
  # UUIDPubSubTypes.cxx
)

forte_add_sourcefile_h(
  CancelGoal.h
  CancelGoalPubSubTypes.h
  GoalInfo.h
  GoalInfoPubSubTypes.h
  Time.h
  TimePubSubTypes.h
  UUID.h
  UUIDPubSubTypes.h
)

forte_add_sourcefile_hcpp(
  CancelGoalRequestPubSub
  CancelGoalResponsePubSub
)
