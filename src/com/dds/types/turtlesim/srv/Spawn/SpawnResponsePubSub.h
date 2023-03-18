#ifndef _COM_DDS_TYPES_TURTLESIM_SRV_SPAWN_RESPONSE_PUBSUB_H_
#define _COM_DDS_TYPES_TURTLESIM_SRV_SPAWN_RESPONSE_PUBSUB_H_

#include "ddspubsub.h"

#include "SpawnPubSubTypes.h"
using namespace turtlesim::srv;

namespace turtlesim {

class SpawnResponsePubSub : public CDDSPubSub {
  public:
    SpawnResponsePubSub(std::string m_sTopicName) : 
      CDDSPubSub(m_sTopicName),
      type(new Spawn_ResponsePubSubType()) {}

    std::string registerType(DomainParticipant* participant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    CIEC_STRUCT receive() override;

  private:
    TypeSupport type;
};

}

#endif
