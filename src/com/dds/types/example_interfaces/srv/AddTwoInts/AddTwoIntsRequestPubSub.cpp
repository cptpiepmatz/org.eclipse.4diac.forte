#include "modules/ros2/example_interfaces/srv/AddTwoInts/ROS2_example_interfaces__srv__AddTwoInts__Request.h"

#include "AddTwoIntsRequestPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AddTwoIntsRequestPubSub_gen.cpp"
#endif

using namespace example_interfaces;

std::string AddTwoIntsRequestPubSub::registerType(DomainParticipant* participant) {
  this->type.register_type(participant);
  return this->type.get_type_name();
}

bool AddTwoIntsRequestPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_example_interfaces__srv__AddTwoInts__Request;
}

bool AddTwoIntsRequestPubSub::publish(CIEC_STRUCT* data) {
  CIEC_ROS2_example_interfaces__srv__AddTwoInts__Request *casted = 
    (CIEC_ROS2_example_interfaces__srv__AddTwoInts__Request *) data;

  int64_t a = casted->a();
  int64_t b = casted->b();

  AddTwoInts_Request addTwoIntsRequest;
  addTwoIntsRequest.a(a);
  addTwoIntsRequest.b(b);

  return this->write(&addTwoIntsRequest);
}

std::optional<CIEC_STRUCT> AddTwoIntsRequestPubSub::receive() {
  AddTwoInts_Request addTwoIntsRequest;
  bool taken;
  this->take(&taken, &addTwoIntsRequest);
  if (!taken) return std::nullopt;

  CIEC_LINT ciecA = CIEC_LINT(addTwoIntsRequest.a());
  CIEC_LINT ciecB = CIEC_LINT(addTwoIntsRequest.b());
  CIEC_ROS2_example_interfaces__srv__AddTwoInts__Request ciecStruct =
    CIEC_ROS2_example_interfaces__srv__AddTwoInts__Request();
  ciecStruct.a() = ciecA;
  ciecStruct.b() = ciecB;

  return ciecStruct;
}
