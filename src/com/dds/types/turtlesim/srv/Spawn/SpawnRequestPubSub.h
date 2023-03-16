#ifndef _COM_DDS_TYPES_TURTLESIM_SRV_SPAWN_REQUEST_PUBSUB_H_
#define _COM_DDS_TYPES_TURTLESIM_SRV_SPAWN_REQUEST_PUBSUB_H_

#include "ddspubsub.h"

#include "SpawnPubSubTypes.h"
using namespace turtlesim::srv;

namespace turtlesim {

class SpawnRequestPubSub : public CDDSPubSub {
  public:
    SpawnRequestPubSub(std::string m_sTopicName) : 
      CDDSPubSub(m_sTopicName),
      type(new Spawn_RequestPubSubType()) {}

    std::string registerType() override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    CIEC_STRUCT receive() override;

  private:
    TypeSupport type;
};

}

#endif
