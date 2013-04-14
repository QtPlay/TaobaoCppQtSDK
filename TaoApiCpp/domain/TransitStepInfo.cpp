#include <TaoApiCpp/domain/TransitStepInfo.h>
QString TransitStepInfo::getStatusDesc() const {
  return statusDesc;
}
void TransitStepInfo::setStatusDesc (QString statusDesc) {
  this->statusDesc = statusDesc;
}

QString TransitStepInfo::getStatusTime() const {
  return statusTime;
}
void TransitStepInfo::setStatusTime (QString statusTime) {
  this->statusTime = statusTime;
}


void TransitStepInfo::parseResponse() {
  if (responseParser->hasName("status_desc")) {
  statusDesc = responseParser->getStrByName("status_desc");
  }
  if (responseParser->hasName("status_time")) {
  statusTime = responseParser->getStrByName("status_time");
  }

}

