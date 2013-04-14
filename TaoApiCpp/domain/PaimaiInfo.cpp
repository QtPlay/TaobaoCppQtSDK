#include <TaoApiCpp/domain/PaimaiInfo.h>
qlonglong PaimaiInfo::getDeposit() const {
  return deposit;
}
void PaimaiInfo::setDeposit (qlonglong deposit) {
  this->deposit = deposit;
}

qlonglong PaimaiInfo::getInterval() const {
  return interval;
}
void PaimaiInfo::setInterval (qlonglong interval) {
  this->interval = interval;
}

qlonglong PaimaiInfo::getMode() const {
  return mode;
}
void PaimaiInfo::setMode (qlonglong mode) {
  this->mode = mode;
}

QString PaimaiInfo::getReserve() const {
  return reserve;
}
void PaimaiInfo::setReserve (QString reserve) {
  this->reserve = reserve;
}

qlonglong PaimaiInfo::getValidHour() const {
  return validHour;
}
void PaimaiInfo::setValidHour (qlonglong validHour) {
  this->validHour = validHour;
}

qlonglong PaimaiInfo::getValidMinute() const {
  return validMinute;
}
void PaimaiInfo::setValidMinute (qlonglong validMinute) {
  this->validMinute = validMinute;
}


void PaimaiInfo::parseResponse() {
  if (responseParser->hasName("deposit")) {
  deposit = responseParser->getNumByName("deposit");
  }
  if (responseParser->hasName("interval")) {
  interval = responseParser->getNumByName("interval");
  }
  if (responseParser->hasName("mode")) {
  mode = responseParser->getNumByName("mode");
  }
  if (responseParser->hasName("reserve")) {
  reserve = responseParser->getStrByName("reserve");
  }
  if (responseParser->hasName("valid_hour")) {
  validHour = responseParser->getNumByName("valid_hour");
  }
  if (responseParser->hasName("valid_minute")) {
  validMinute = responseParser->getNumByName("valid_minute");
  }

}

