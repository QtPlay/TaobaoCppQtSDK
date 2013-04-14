#include <TaoApiCpp/response/SimbaAdgroupUpdateResponse.h>

ADGroup SimbaAdgroupUpdateResponse::getAdgroup() const {
  return adgroup;
}
void SimbaAdgroupUpdateResponse::setAdgroup (ADGroup adgroup) {
  this->adgroup = adgroup;
}

void SimbaAdgroupUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup")) {
  adgroup.setParser(responseParser->getObjectParser("adgroup"));
  adgroup.parseResponse();
  }

}

