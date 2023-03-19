#ifndef _COM_DDS_TYPES_EXAMPLE_INTERFACES_SRV_ADD_TWO_INTS_REQUEST_PUBSUB_H_
#define _COM_DDS_TYPES_EXAMPLE_INTERFACES_SRV_ADD_TWO_INTS_REQUEST_PUBSUB_H_

#include "ddspubsub.h"

#include "AddTwoIntsPubSubTypes.h"
using namespace example_interfaces::srv;

namespace example_interfaces {

class AddTwoIntsRequestPubSub : public CDDSPubSub {
  public:
    AddTwoIntsRequestPubSub(std::string topicName, EPubSubRole role) : 
      CDDSPubSub(topicName, role),
      type(new AddTwoInts_RequestPubSubType()) {}

    std::string registerType(DomainParticipant* participant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<CIEC_STRUCT> receive() override;

  private:
    TypeSupport type;
};

}

#endif
