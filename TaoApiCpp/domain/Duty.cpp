#include <TaoApiCpp/domain/Duty.h>
qlonglong Duty::getDutyId() const {
  return dutyId;
}
void Duty::setDutyId (qlonglong dutyId) {
  this->dutyId = dutyId;
}

qlonglong Duty::getDutyLevel() const {
  return dutyLevel;
}
void Duty::setDutyLevel (qlonglong dutyLevel) {
  this->dutyLevel = dutyLevel;
}

QString Duty::getDutyName() const {
  return dutyName;
}
void Duty::setDutyName (QString dutyName) {
  this->dutyName = dutyName;
}


void Duty::parseResponse() {
  if (responseParser->hasName("duty_id")) {
  dutyId = responseParser->getNumByName("duty_id");
  }
  if (responseParser->hasName("duty_level")) {
  dutyLevel = responseParser->getNumByName("duty_level");
  }
  if (responseParser->hasName("duty_name")) {
  dutyName = responseParser->getStrByName("duty_name");
  }

}

