#include <TaoApiCpp/domain/DiscardInfo.h>
qlonglong DiscardInfo::getEnd() const {
  return end;
}
void DiscardInfo::setEnd (qlonglong end) {
  this->end = end;
}

QString DiscardInfo::getNick() const {
  return nick;
}
void DiscardInfo::setNick (QString nick) {
  this->nick = nick;
}

qlonglong DiscardInfo::getStart() const {
  return start;
}
void DiscardInfo::setStart (qlonglong start) {
  this->start = start;
}

QString DiscardInfo::getSubscribeKey() const {
  return subscribeKey;
}
void DiscardInfo::setSubscribeKey (QString subscribeKey) {
  this->subscribeKey = subscribeKey;
}

QString DiscardInfo::getSubscribeValue() const {
  return subscribeValue;
}
void DiscardInfo::setSubscribeValue (QString subscribeValue) {
  this->subscribeValue = subscribeValue;
}

QString DiscardInfo::getType() const {
  return type;
}
void DiscardInfo::setType (QString type) {
  this->type = type;
}

qlonglong DiscardInfo::getUserId() const {
  return userId;
}
void DiscardInfo::setUserId (qlonglong userId) {
  this->userId = userId;
}


void DiscardInfo::parseResponse() {
  if (responseParser->hasName("end")) {
  end = responseParser->getNumByName("end");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("start")) {
  start = responseParser->getNumByName("start");
  }
  if (responseParser->hasName("subscribe_key")) {
  subscribeKey = responseParser->getStrByName("subscribe_key");
  }
  if (responseParser->hasName("subscribe_value")) {
  subscribeValue = responseParser->getStrByName("subscribe_value");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

