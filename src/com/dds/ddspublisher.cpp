#include "ddspublisher.h"
#include "types/std_msgs/String/StringPublisher.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp> 
#include <fastdds/dds/topic/TypeSupport.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>

#include "basecommfb.h"

using namespace eprosima::fastdds::dds;

CDDSPublisher::~CDDSPublisher() {
  if (writer != nullptr) publisher->delete_datawriter(writer);
  if (publisher != nullptr) participant->delete_publisher(publisher);
  if (topic != nullptr) participant->delete_topic(topic);
  DomainParticipantFactory::get_instance()->delete_participant(participant);
}

bool CDDSPublisher::init() {
  DomainParticipantQos participantQos;
  participantQos.name("4diac Publisher");
  participant = DomainParticipantFactory::get_instance()->create_participant(0, participantQos);
  if (participant == nullptr) return false;

  std::string typeName = this->registerType();
  DEVLOG_DEBUG(("[DDS Publisher] Registered type '" + typeName + "'.\n").c_str());

  topic = participant->create_topic(this->topicName, typeName, TOPIC_QOS_DEFAULT);
  if (topic == nullptr) return false;

  publisher = participant->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  if (publisher == nullptr) return false;

  writer = publisher->create_datawriter(topic, DATAWRITER_QOS_DEFAULT, nullptr);
  if (writer == nullptr) return false;

  return true;
}

CDDSPublisher* CDDSPublisher::selectPublisher(std::string topicName, std::string topicType) {
  if (topicType == "std_msgs/String") return new std_msgs::StringPublisher(topicName);

  // add other topic types here

  return nullptr;
}
