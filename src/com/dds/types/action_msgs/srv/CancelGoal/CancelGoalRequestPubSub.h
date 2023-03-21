#ifndef _COM_DDS_TYPES_ACTION_MSGS_SRV_CANCEL_GOAL_REQUEST_PUBSUB_H_
#define _COM_DDS_TYPES_ACTION_MSGS_SRV_CANCEL_GOAL_REQUEST_PUBSUB_H_

#include "ddspubsub.h"

#include "CancelGoalPubSubTypes.h"
using namespace action_msgs::srv;

namespace action_msgs {

class CancelGoalRequestPubSub : public CDDSPubSub {
  public:
    CancelGoalRequestPubSub(std::string topicName, EPubSubRole role) : 
      CDDSPubSub(topicName, role),
      type(new CancelGoal_RequestPubSubType()) {}

    std::string registerType(DomainParticipant* participant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<CIEC_STRUCT> receive() override;

  private:
    TypeSupport type;
};

}

#endif
