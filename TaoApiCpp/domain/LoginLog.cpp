#include <TaoApiCpp/domain/LoginLog.h>
QString LoginLog::getTime() const {
  return time;
}
void LoginLog::setTime (QString time) {
  this->time = time;
}

QString LoginLog::getType() const {
  return type;
}
void LoginLog::setType (QString type) {
  this->type = type;
}


void LoginLog::parseResponse() {
  if (responseParser->hasName("time")) {
  time = responseParser->getStrByName("time");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }

}

