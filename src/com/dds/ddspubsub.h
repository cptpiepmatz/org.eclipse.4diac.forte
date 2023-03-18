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

namespace forte {
  namespace com_infra {
    class CDDSHandler;
  }
}

using namespace forte::com_infra;
using namespace eprosima::fastdds::dds;
using namespace eprosima::fastrtps::types;
using namespace eprosima::fastrtps::rtps;

typedef std::queue<GUID_t> IdentityQueue;

class CDDSPubSub {
  public:
    CDDSPubSub(std::string m_sTopicName) : 
      m_sTopicName(m_sTopicName),
      m_pParticipant(nullptr), 
      m_pTopic(nullptr),
      m_pPublisher(nullptr),  
      m_pWriter(nullptr) {}
    virtual ~CDDSPubSub();
    static CDDSPubSub* selectPubSub(std::string m_sTopicName, std::string m_sTopicType);

    bool initCommon();
    bool initPublisher();
    bool initSubscriber(CDDSHandler* handler);
    void setIdentityQueue(IdentityQueue* paIdentities);

    virtual std::string registerType(DomainParticipant* paParticipant) = 0;
    virtual bool validateType(const CStringDictionary::TStringId typeId) = 0; 
    virtual bool publish(CIEC_STRUCT* data) = 0;
    // read in data and construct a CIEC_STRUCT
    virtual CIEC_STRUCT receive() = 0;

  protected:
    bool write(void* data);
    ReturnCode_t take(void* data);

  private:
    std::string m_sTopicName;
    std::string m_sTopicType;

    DomainParticipant* m_pParticipant;
    Topic* m_pTopic;

    Publisher* m_pPublisher;
    DataWriter* m_pWriter;

    Subscriber* m_pSubscriber;
    DataReader* m_pReader;
    class CSubListener : public DataReaderListener {
      public:
        CSubListener() {}
        ~CSubListener() override {}
        
        CDDSHandler* handler;

        inline void on_data_available(DataReader* m_pReader);
    } mReaderListener;

    IdentityQueue* m_pIdentities;
};

#endif /* _DDSPUBSUB_H_ */
