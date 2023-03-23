forte_add_sourcefile_cpp(
  RotateAbsolute.cxx 
  RotateAbsolutePubSubTypes.cxx
  RotateAbsolute_action.cxx
  RotateAbsolute_actionPubSubTypes.cxx
)

forte_add_sourcefile_h(
  RotateAbsolute.h
  RotateAbsolutePubSubTypes.h
  RotateAbsolute_action.h
  RotateAbsolute_actionPubSubTypes.h
)

forte_add_sourcefile_hcpp(
  RotateAbsoluteFeedbackMessagePubSub
  RotateAbsoluteFeedbackPubSub
  RotateAbsoluteGetResultRequestPubSub
  RotateAbsoluteGetResultResponsePubSub
  RotateAbsoluteGoalPubSub
  RotateAbsoluteResultPubSub
  RotateAbsoluteSendGoalRequestPubSub
  RotateAbsoluteSendGoalResponsePubSub
)
