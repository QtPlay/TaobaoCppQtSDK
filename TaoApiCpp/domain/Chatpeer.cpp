#include <TaoApiCpp/domain/Chatpeer.h>
QString Chatpeer::getDate() const {
  return date;
}
void Chatpeer::setDate (QString date) {
  this->date = date;
}

QString Chatpeer::getUid() const {
  return uid;
}
void Chatpeer::setUid (QString uid) {
  this->uid = uid;
}


void Chatpeer::parseResponse() {
  if (responseParser->hasName("date")) {
  date = responseParser->getStrByName("date");
  }
  if (responseParser->hasName("uid")) {
  uid = responseParser->getStrByName("uid");
  }

}

