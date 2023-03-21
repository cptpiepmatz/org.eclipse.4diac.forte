#ifndef _COM_DDS_TYPES_TURTLESIM_ACTION_ROTATE_ABSOLUTE_GOAL_PUBSUB_H_
#define _COM_DDS_TYPES_TURTLESIM_ACTION_ROTATE_ABSOLUTE_GOAL_PUBSUB_H_

#include "ddspubsub.h"

#include "RotateAbsolutePubSubTypes.h"
using namespace turtlesim::action;

namespace turtlesim {

class RotateAbsoluteGoalPubSub : public CDDSPubSub {
  public:
    RotateAbsoluteGoalPubSub(std::string topicName, EPubSubRole role) : 
      CDDSPubSub(topicName, role),
      type(new RotateAbsolute_GoalPubSubType()) {}

    std::string registerType(DomainParticipant* participant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<CIEC_STRUCT> receive() override;

  private:
    TypeSupport type;
};

}

#endif
