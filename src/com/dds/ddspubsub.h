#ifndef _DDSPUBSUB_H_
#define _DDSPUBSUB_H_

// forte
#include "basecommfb.h"
#include "stringdict.h"

// fast dds generic
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp> 
#include <fastdds/dds/topic/TypeSupport.hpp>

// fast dds publisher
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>

// fast dds subscriber
#include<fastdds/dds/subscriber/Subscriber.hpp>
#include<fastdds/dds/subscriber/DataReader.hpp>
#include<fastdds/dds/subscriber/DataReaderListener.hpp>

#include "ddshandler.h"

using namespace eprosima::fastdds::dds;

class CDDSPubSub {
  public:
    CDDSPubSub(std::string topicName, CDDSHandler* handler) : 
      topicName(topicName),
      handler(handler),
      participant(nullptr), 
      topic(nullptr),
      publisher(nullptr),  
      writer(nullptr) {}
    virtual ~CDDSPubSub();
    static CDDSPubSub* selectPubSub(std::string topicName, std::string topicType, CDDSHandler* handler);

    bool initCommon();
    bool initPublisher();
    bool initSubscriber();

    virtual std::string registerType() = 0;
    virtual bool validateType(const CStringDictionary::TStringId typeId) = 0; 
    virtual bool publish(CIEC_STRUCT* data) = 0;
    // read in data and construct a CIEC_STRUCT
    virtual CIEC_STRUCT receive() = 0;

  protected:
    CDDSHandler* handler;

    std::string topicName;
    std::string topicType;

    DomainParticipant* participant;
    Topic* topic;

    Publisher* publisher;
    DataWriter* writer;

    Subscriber* subscriber;
    DataReader* reader;
    DataReaderListener* readerListener;

    class SubListener : public DataReaderListener {
      public:
        SubListener(CDDSPubSub* pubSub) : outer(pubSub) {}

        // call the handler, that a message arrived
        void on_data_available(DataReader* reader) override;

      private:
        CDDSPubSub* outer;
    };
};

#endif /* _DDSPUBSUB_H_ */
