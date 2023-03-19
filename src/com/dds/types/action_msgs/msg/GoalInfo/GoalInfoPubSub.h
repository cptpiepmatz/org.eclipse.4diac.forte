#ifndef _COM_DDS_TYPES_STD_MSGS_MSG_STRING_PUBLISHER_H_
#define _COM_DDS_TYPES_STD_MSGS_MSG_STRING_PUBLISHER_H_

#include "ddspubsub.h"

#include "GoalInfoPubSubTypes.h"
using namespace action_msgs::msg;

namespace action_msgs {

class GoalInfoPubSub : public CDDSPubSub {
  public:
    GoalInfoPubSub(std::string topicName, EPubSubRole role) : 
      CDDSPubSub(topicName, role),
      type(new GoalInfoPubSubType()) {}

    std::string registerType(DomainParticipant* participant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<CIEC_STRUCT> receive() override;

  private:
    TypeSupport type;
};

}

#endif
