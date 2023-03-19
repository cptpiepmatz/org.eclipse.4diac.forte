#include "modules/ros2/example_interfaces/srv/AddTwoInts/ROS2_example_interfaces__srv__AddTwoInts__Response.h"

#include "AddTwoIntsResponsePubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AddTwoIntsResponsePubSub_gen.cpp"
#endif

using namespace example_interfaces;

std::string AddTwoIntsResponsePubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool AddTwoIntsResponsePubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_example_interfaces__srv__AddTwoInts__Response;
}

bool AddTwoIntsResponsePubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response *casted = 
    (CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response *) data;
  int64_t sum = casted->sum();

  AddTwoInts_Response addTwoIntsResponse;
  addTwoIntsResponse.sum(sum);

  return this->write(&addTwoIntsResponse);
}

std::optional<CIEC_STRUCT> AddTwoIntsResponsePubSub::receive() {
  AddTwoInts_Response addTwoIntsResponse;
  bool taken;
  this->take(&taken, &addTwoIntsResponse);
  if (!taken) return std::nullopt;

  CIEC_LINT ciecSum = CIEC_LINT(addTwoIntsResponse.sum());
  CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response ciecStruct =
    CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response();
  ciecStruct.sum() = ciecSum;

  return ciecStruct;
}
