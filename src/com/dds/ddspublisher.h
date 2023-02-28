#ifndef _DDSPUBLISHER_H_
#define _DDSPUBLISHER_H_

#include "basecommfb.h"
#include "stringdict.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp> 
#include <fastdds/dds/topic/TypeSupport.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>

using namespace eprosima::fastdds::dds;

class CDDSPublisher {
  public:
    CDDSPublisher(std::string topicName) : 
      topicName(topicName),
      participant(nullptr), 
      publisher(nullptr), 
      topic(nullptr), 
      writer(nullptr) {}
    virtual ~CDDSPublisher();
    static CDDSPublisher* selectPublisher(std::string topicName, std::string topicType);

    bool init();

    virtual std::string registerType() = 0;
    virtual bool validateType(const CStringDictionary::TStringId typeId) = 0; 
    virtual bool publish(CIEC_STRUCT* data) = 0;

  protected:
    std::string topicName;

    DomainParticipant* participant;
    Publisher* publisher;
    Topic* topic;
    DataWriter* writer;
};

#endif /* _DDSPUBLISHER_H_ */
