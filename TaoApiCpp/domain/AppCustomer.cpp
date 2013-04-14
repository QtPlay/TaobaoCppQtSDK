#include <TaoApiCpp/domain/AppCustomer.h>
QDateTime AppCustomer::getCreated() const {
  return created;
}
void AppCustomer::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime AppCustomer::getModified() const {
  return modified;
}
void AppCustomer::setModified (QDateTime modified) {
  this->modified = modified;
}

QString AppCustomer::getNick() const {
  return nick;
}
void AppCustomer::setNick (QString nick) {
  this->nick = nick;
}

QString AppCustomer::getStatus() const {
  return status;
}
void AppCustomer::setStatus (QString status) {
  this->status = status;
}

QList<Subscription> AppCustomer::getSubscriptions() const {
  return subscriptions;
}
void AppCustomer::setSubscriptions (QList<Subscription> subscriptions) {
  this->subscriptions = subscriptions;
}

QList<QString> AppCustomer::getType() const {
  return type;
}
void AppCustomer::setType (QList<QString> type) {
  this->type = type;
}

qlonglong AppCustomer::getUserId() const {
  return userId;
}
void AppCustomer::setUserId (qlonglong userId) {
  this->userId = userId;
}


void AppCustomer::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("subscriptions")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("subscriptions");
  Parser *parser;
  foreach (parser, listParser) {
    Subscription tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    subscriptions.append(tmp);
  }
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getListStrByName("type");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

