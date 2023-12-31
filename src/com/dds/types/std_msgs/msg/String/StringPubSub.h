#ifndef _COM_DDS_TYPES_STD_MSGS_MSG_STRING_PUBLISHER_H_
#define _COM_DDS_TYPES_STD_MSGS_MSG_STRING_PUBLISHER_H_

#include "ddspubsub.h"

#include "StringPubSubTypes.h"
using namespace std_msgs::msg;

namespace std_msgs {

class StringPubSub : public CDDSPubSub {
  public:
    StringPubSub(std::string topicName, EPubSubRole role) : 
      CDDSPubSub(topicName, role),
      type(new StringPubSubType()) {}

    std::string registerType(DomainParticipant* paParticipant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<CIEC_STRUCT> receive() override;

  private:
    TypeSupport type;
};

}

#endif
