#ifndef _COM_DDS_TYPES_STD_MSGS_STRING_PUBLISHER_H_
#define _COM_DDS_TYPES_STD_MSGS_STRING_PUBLISHER_H_

#include "ddspubsub.h"

#include "StringPubSubTypes.h"
using namespace std_msgs::msg;

namespace std_msgs {

class StringPublisher : public CDDSPublisher {
  public:
    static constexpr char* PUBLIC_TOPIC_TYPE = "std_msgs/String";

    StringPublisher(std::string topicName) : 
      CDDSPublisher(topicName),
      type(new StringPubSubType()) {}

    std::string registerType() override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;

  private:
    TypeSupport type;
};

}

#endif
