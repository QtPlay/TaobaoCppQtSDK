#include <TaoApiCpp/domain/RefundRemindTimeout.h>
bool RefundRemindTimeout::getExistTimeout() const {
  return existTimeout;
}
void RefundRemindTimeout::setExistTimeout (bool existTimeout) {
  this->existTimeout = existTimeout;
}

qlonglong RefundRemindTimeout::getRemindType() const {
  return remindType;
}
void RefundRemindTimeout::setRemindType (qlonglong remindType) {
  this->remindType = remindType;
}

QDateTime RefundRemindTimeout::getTimeout() const {
  return timeout;
}
void RefundRemindTimeout::setTimeout (QDateTime timeout) {
  this->timeout = timeout;
}


void RefundRemindTimeout::parseResponse() {
  if (responseParser->hasName("exist_timeout")) {
  existTimeout = responseParser->getBoolByName("exist_timeout");
  }
  if (responseParser->hasName("remind_type")) {
  remindType = responseParser->getNumByName("remind_type");
  }
  if (responseParser->hasName("timeout")) {
  timeout = responseParser->getDateByName("timeout");
  }

}

