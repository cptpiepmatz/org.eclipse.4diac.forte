#include "ddspubsub.h"
#include "ddshandler.h"
#include "types/std_msgs/msg/String/StringPubSub.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp> 
#include <fastdds/dds/topic/TypeSupport.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>

#include "basecommfb.h"

using namespace eprosima::fastdds::dds;
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
  participantQos.name("4diac Publisher");
  this->m_pParticipant = DomainParticipantFactory::get_instance()->create_participant(0, participantQos);
  if (this->m_pParticipant == nullptr) return false;

  this->m_sTopicType = this->registerType();
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

  DEVLOG_DEBUG("[DDS PubSub] Initialized m_pPublisher.\n");
  return true;
}

bool CDDSPubSub::initSubscriber(CDDSHandler* handler) {
  if (!this->initCommon()) return false;

  this->mReaderListener.handler = handler;

  this->m_pSubscriber = this->m_pParticipant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  if (this->m_pSubscriber == nullptr) return false;

  this->m_pReader = this->m_pSubscriber->create_datareader(this->m_pTopic, DATAREADER_QOS_DEFAULT, &(this->mReaderListener));
  if (this->m_pReader == nullptr) return false;

  DEVLOG_DEBUG("[DDS PubSub] Initialized m_pSubscriber.\n");
  return true;
}

inline void CDDSPubSub::CSubListener::on_data_available(DataReader* m_pReader) {
  this->handler->onDataAvailable(m_pReader);
}

CDDSPubSub* CDDSPubSub::selectPubSub(std::string m_sTopicName, std::string m_sTopicType) {
  if (m_sTopicType == "std_msgs::msg::dds_::String_") return new std_msgs::StringPubSub(m_sTopicName);

  // add other topic types here

  return nullptr;
}
