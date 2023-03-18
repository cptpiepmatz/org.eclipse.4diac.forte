#include "ddspubsub.h"
#include "ddshandler.h"

#include "types/std_msgs/msg/String/StringPubSub.h"
#include "types/turtlesim/srv/Spawn/SpawnRequestPubSub.h"
#include "types/turtlesim/srv/Spawn/SpawnResponsePubSub.h"
#include "types/example_interfaces/srv/AddTwoInts/AddTwoIntsRequestPubSub.h"
#include "types/example_interfaces/srv/AddTwoInts/AddTwoIntsResponsePubSub.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp> 
#include <fastdds/dds/topic/TypeSupport.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>

#include "basecommfb.h"

using namespace eprosima::fastdds::dds;
using namespace eprosima::fastrtps::types;
using namespace forte::com_infra;

CDDSPubSub::~CDDSPubSub() {
  if (this->m_pWriter != nullptr) this->m_pPublisher->delete_datawriter(this->m_pWriter);
  if (this->m_pPublisher != nullptr) this->m_pParticipant->delete_publisher(this->m_pPublisher);

  if (this->m_pReader != nullptr) this->m_pSubscriber->delete_datareader(this->m_pReader);
  if (this->m_pSubscriber != nullptr) this->m_pParticipant->delete_subscriber(this->m_pSubscriber);

  if (this->m_pTopic != nullptr) this->m_pParticipant->delete_topic(this->m_pTopic);
  DomainParticipantFactory::get_instance()->delete_participant(this->m_pParticipant);
}

bool CDDSPubSub::initCommon() {
  DomainParticipantQos participantQos;
  participantQos.name("4diac PubSub");
  this->m_pParticipant = DomainParticipantFactory::get_instance()->create_participant(0, participantQos);
  if (this->m_pParticipant == nullptr) return false;

  this->m_sTopicType = this->registerType(this->m_pParticipant);
  DEVLOG_DEBUG(("[DDS PubSub] Registered type '" + this->m_sTopicType + "'.\n").c_str());

  this->m_pTopic = this->m_pParticipant->create_topic(this->m_sTopicName, this->m_sTopicType, TOPIC_QOS_DEFAULT);
  if (this->m_pTopic == nullptr) return false;

  return true;
}

bool CDDSPubSub::initPublisher() {
  if (!this->initCommon()) return false;

  this->m_pPublisher = this->m_pParticipant->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  if (this->m_pPublisher == nullptr) return false;

  this->m_pWriter = this->m_pPublisher->create_datawriter(this->m_pTopic, DATAWRITER_QOS_DEFAULT, nullptr);
  if (this->m_pWriter == nullptr) return false;

  DEVLOG_DEBUG("[DDS PubSub] Initialized Publisher.\n");
  return true;
}

bool CDDSPubSub::initSubscriber(CDDSHandler* handler) {
  if (!this->initCommon()) return false;

  this->mReaderListener.handler = handler;

  this->m_pSubscriber = this->m_pParticipant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  if (this->m_pSubscriber == nullptr) return false;

  this->m_pReader = this->m_pSubscriber->create_datareader(this->m_pTopic, DATAREADER_QOS_DEFAULT, &(this->mReaderListener));
  if (this->m_pReader == nullptr) return false;

  DEVLOG_DEBUG("[DDS PubSub] Initialized Subscriber.\n");
  return true;
}

void CDDSPubSub::setIdentityQueue(std::queue<RequestInfo>* paRequestInfos) {
  this->m_pRequestInfos = paRequestInfos;
}

inline void CDDSPubSub::CSubListener::on_data_available(DataReader* m_pReader) {
  this->handler->onDataAvailable(m_pReader);
}

CDDSPubSub* CDDSPubSub::selectPubSub(std::string m_sTopicName, std::string m_sTopicType) {
  if (m_sTopicType == "std_msgs::msg::dds_::String_") 
    return new std_msgs::StringPubSub(m_sTopicName);

  if (m_sTopicType == "turtlesim::srv::dds_::Spawn_Request") 
    return new turtlesim::SpawnRequestPubSub(m_sTopicName);
  if (m_sTopicType == "turtlesim::srv::dds_::Spawn_Response") 
    return new turtlesim::SpawnResponsePubSub(m_sTopicName);

  if (m_sTopicType == "example_interfaces::srv::dds_::AddTwoInts_Request_")
    return new example_interfaces::AddTwoIntsRequestPubSub(m_sTopicName);
  if (m_sTopicType == "example_interfaces::srv::dds_::AddTwoInts_Response_")
    return new example_interfaces::AddTwoIntsResponsePubSub(m_sTopicName);
    
  // add other topic types here

  return nullptr;
}

bool CDDSPubSub::write(void* data) {
  if (this->m_pRequestInfos != nullptr && !this->m_pRequestInfos->empty()) {
    auto writeParams = WriteParams();
    RequestInfo reqInfo = this->m_pRequestInfos->front();
    this->m_pRequestInfos->pop();
    writeParams.related_sample_identity().writer_guid(reqInfo.guid);
    writeParams.related_sample_identity().sequence_number().high =
      (int32_t)((reqInfo.sequence & 0xFFFFFFFF00000000) >> 32);
    writeParams.related_sample_identity().sequence_number().low =
      (int32_t)(reqInfo.sequence & 0xFFFFFFFF);
    return this->m_pWriter->write(data, writeParams);
  }
  return this->m_pWriter->write(data);
};

ReturnCode_t CDDSPubSub::take(void* data) {
  SampleInfo info;
  auto ret = this->m_pReader->take_next_sample(data, &info);
  if (this->m_pRequestInfos != nullptr) {
    RequestInfo reqInfo;
    reqInfo.guid = info.related_sample_identity.writer_guid();
    reqInfo.sequence = ((int64_t)info.sample_identity.sequence_number().high) << 32 | 
      info.sample_identity.sequence_number().low;
    this->m_pRequestInfos->push(reqInfo);
  }
  return ret;
};