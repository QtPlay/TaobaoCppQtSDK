#include <TaoApiCpp/domain/Range.h>
qlonglong Range::getParticipateId() const {
  return participateId;
}
void Range::setParticipateId (qlonglong participateId) {
  this->participateId = participateId;
}

qlonglong Range::getParticipateType() const {
  return participateType;
}
void Range::setParticipateType (qlonglong participateType) {
  this->participateType = participateType;
}


void Range::parseResponse() {
  if (responseParser->hasName("participate_id")) {
  participateId = responseParser->getNumByName("participate_id");
  }
  if (responseParser->hasName("participate_type")) {
  participateType = responseParser->getNumByName("participate_type");
  }

}

