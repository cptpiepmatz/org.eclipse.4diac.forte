#include "modules/ros2/action_msgs/srv/CancelGoal/ROS2_action_msgs__srv__CancelGoal__Response.h"

#include "CancelGoalResponsePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CancelGoalResponsePubSub_gen.cpp"
#endif

#include "GoalInfoPubSubTypes.h"
#include "UUIDPubSubTypes.h"
#include "TimePubSubTypes.h"

#include <boost/format.hpp>

using namespace action_msgs;
using namespace action_msgs::msg;
using namespace unique_identifier_msgs::msg;
using namespace builtin_interfaces::msg;

std::string CancelGoalResponsePubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool CancelGoalResponsePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_action_msgs__srv__CancelGoal__Response;
}

bool CancelGoalResponsePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_action_msgs__srv__CancelGoal__Response *casted = 
    (CIEC_ROS2_action_msgs__srv__CancelGoal__Response *) data;

  std::vector<GoalInfo> goalsCanceling = std::vector<GoalInfo>();
  for (int i = 0; i < 16; i++) {
    CIEC_ROS2_action_msgs__msg__GoalInfo goalCanceling = casted->goals_canceling()[i];
    unique_identifier_msgs::msg::uint8__16 uuidArray = {};
    bool allZero = true;
    for (size_t j = 0; j < 16; j++) {
      auto entry = goalCanceling.goal_id().uuid()[j];
      if (entry != 0) allZero = false;
      uuidArray[i] = entry;
    }
    if (allZero) break;
    int sec = goalCanceling.stamp().sec();
    unsigned int nanosec = goalCanceling.stamp().nanosec();

    UUID uuid;
    uuid.uuid(uuidArray);

    Time time;
    time.sec(sec);
    time.nanosec(nanosec);

    GoalInfo goalInfo;
    goalInfo.goal_id(uuid);
    goalInfo.stamp(time);

    goalsCanceling.push_back(goalInfo);
  }

  uint8_t returnCode = casted->return_code();

  CancelGoal_Response response;
  response.goals_canceling(goalsCanceling);
  response.return_code(returnCode);

  return this->write(&response);
}

std::optional<CIEC_STRUCT> CancelGoalResponsePubSub::receive() {
  CancelGoal_Response response;
  bool taken;
  this->take(&taken, &response);
  if (!taken) return std::nullopt;

  std::string constructor;
  constructor.reserve(4096);

  constructor += "(goals_canceling:=[";
  int counter = 0;
  for (GoalInfo goalInfo : response.goals_canceling()) {
    unique_identifier_msgs::msg::uint8__16 uuid = goalInfo.goal_id().uuid();
    int sec = goalInfo.stamp().sec();
    unsigned int nanosec = goalInfo.stamp().nanosec();

    boost::format fmt(
      "(goal_id:=(uuid:=[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]),stamp:=(sec:=%d,nanosec:=%d)),"
    );
    for (const auto& value : uuid) fmt % value;
    fmt % sec % nanosec;

    constructor += fmt.str();

    if (counter++ >= 16) break;
  }

  for (;counter < 16; counter++) {
    constructor += "(goal_id:=(uuid:=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]),stamp:=(sec:=0,nanosec:=0)),";
  }

  constructor.pop_back();
  constructor += "],return_code:=" + std::to_string(response.return_code()) + ")";

  CIEC_SINT returnCode = CIEC_SINT(response.return_code());

  CIEC_ROS2_action_msgs__srv__CancelGoal__Response ciecStruct = 
    CIEC_ROS2_action_msgs__srv__CancelGoal__Response();
  ciecStruct.fromString(constructor.c_str());

  return ciecStruct;
}
