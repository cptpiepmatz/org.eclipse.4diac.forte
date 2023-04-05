#ifndef _COM_DDS_TYPES_ACTION_MSGS_MSG_GOAL_STATUS_ARRAY_PUB_SUB_H_
#define _COM_DDS_TYPES_ACTION_MSGS_MSG_GOAL_STATUS_ARRAY_PUB_SUB_H_

#include "ddspubsub.h"

#include "GoalStatusArrayPubSubTypes.h"
using namespace action_msgs::msg;

namespace action_msgs {

class GoalStatusArrayPubSub : public CDDSPubSub {
  public:
    GoalStatusArrayPubSub(std::string topicName, EPubSubRole role) : 
      CDDSPubSub(topicName, role),
      type(new GoalStatusArrayPubSubType()) {}

    std::string registerType(DomainParticipant* paParticipant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<CIEC_STRUCT> receive() override;

  private:
    TypeSupport type;
};

}

#endif
