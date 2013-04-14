#include <TaoApiCpp/domain/Subscription.h>
QString Subscription::getStatus() const {
  return status;
}
void Subscription::setStatus (QString status) {
  this->status = status;
}

QString Subscription::getTopic() const {
  return topic;
}
void Subscription::setTopic (QString topic) {
  this->topic = topic;
}


void Subscription::parseResponse() {
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("topic")) {
  topic = responseParser->getStrByName("topic");
  }

}

