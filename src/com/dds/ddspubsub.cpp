#include "ddspubsub.h"
#include "ddshandler.h"
#include "types/std_msgs/String/StringPubSub.h"

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
  if (this->writer != nullptr) this->publisher->delete_datawriter(this->writer);
  if (this->publisher != nullptr) this->participant->delete_publisher(this->publisher);

  if (this->reader != nullptr) this->subscriber->delete_datareader(this->reader);
  if (this->subscriber != nullptr) this->participant->delete_subscriber(this->subscriber);

  if (this->topic != nullptr) this->participant->delete_topic(this->topic);
  DomainParticipantFactory::get_instance()->delete_participant(this->participant);
}

bool CDDSPubSub::initCommon() {
  DomainParticipantQos participantQos;
  participantQos.name("4diac Publisher");
  this->participant = DomainParticipantFactory::get_instance()->create_participant(0, participantQos);
  if (this->participant == nullptr) return false;

  this->topicType = this->registerType();
  DEVLOG_DEBUG(("[DDS PubSub] Registered type '" + this->topicType + "'.\n").c_str());

  this->topic = this->participant->create_topic(this->topicName, this->topicType, TOPIC_QOS_DEFAULT);
  if (this->topic == nullptr) return false;

  return true;
}

bool CDDSPubSub::initPublisher() {
  if (!this->initCommon()) return false;

  this->publisher = this->participant->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  if (this->publisher == nullptr) return false;

  this->writer = this->publisher->create_datawriter(this->topic, DATAWRITER_QOS_DEFAULT, nullptr);
  if (this->writer == nullptr) return false;

  DEVLOG_DEBUG("[DDS PubSub] Initialized publisher.\n");
  return true;
}

bool CDDSPubSub::initSubscriber(CDDSHandler* handler) {
  if (!this->initCommon()) return false;

  this->readerListener.handler = handler;

  this->subscriber = this->participant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  if (this->subscriber == nullptr) return false;

  this->reader = this->subscriber->create_datareader(this->topic, DATAREADER_QOS_DEFAULT, &(this->readerListener));
  if (this->reader == nullptr) return false;

  DEVLOG_DEBUG("[DDS PubSub] Initialized subscriber.\n");
  return true;
}

inline void CDDSPubSub::SubListener::on_data_available(DataReader* reader) {
  this->handler->onDataAvailable(reader);
}

CDDSPubSub* CDDSPubSub::selectPubSub(std::string topicName, std::string topicType) {
  if (topicType == "std_msgs::msg::dds_::String_") return new std_msgs::StringPubSub(topicName);

  // add other topic types here

  return nullptr;
}
