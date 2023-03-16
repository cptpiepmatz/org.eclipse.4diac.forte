#ifndef _COM_DDS_TYPES_TURTLESIM_SRV_CancelGoal_RESPONSE_PUBSUB_H_
#define _COM_DDS_TYPES_TURTLESIM_SRV_CancelGoal_RESPONSE_PUBSUB_H_

#include "ddspubsub.h"

#include "CancelGoalPubSubTypes.h"
using namespace turtlesim::srv;

namespace turtlesim {

class CancelGoalResponsePubSub : public CDDSPubSub {
  public:
    CancelGoalResponsePubSub(std::string m_sTopicName) : 
      CDDSPubSub(m_sTopicName),
      type(new CancelGoal_ResponsePubSubType()) {}

    std::string registerType() override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    CIEC_STRUCT receive() override;

  private:
    TypeSupport type;
};

}

#endif
