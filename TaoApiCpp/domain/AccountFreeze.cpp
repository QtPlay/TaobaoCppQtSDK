#include <TaoApiCpp/domain/AccountFreeze.h>
QString AccountFreeze::getFreezeAmount() const {
  return freezeAmount;
}
void AccountFreeze::setFreezeAmount (QString freezeAmount) {
  this->freezeAmount = freezeAmount;
}

QString AccountFreeze::getFreezeName() const {
  return freezeName;
}
void AccountFreeze::setFreezeName (QString freezeName) {
  this->freezeName = freezeName;
}

QString AccountFreeze::getFreezeType() const {
  return freezeType;
}
void AccountFreeze::setFreezeType (QString freezeType) {
  this->freezeType = freezeType;
}


void AccountFreeze::parseResponse() {
  if (responseParser->hasName("freeze_amount")) {
  freezeAmount = responseParser->getStrByName("freeze_amount");
  }
  if (responseParser->hasName("freeze_name")) {
  freezeName = responseParser->getStrByName("freeze_name");
  }
  if (responseParser->hasName("freeze_type")) {
  freezeType = responseParser->getStrByName("freeze_type");
  }

}

