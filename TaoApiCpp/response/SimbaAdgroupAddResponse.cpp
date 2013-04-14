#include <TaoApiCpp/response/SimbaAdgroupAddResponse.h>

ADGroup SimbaAdgroupAddResponse::getAdgroup() const {
  return adgroup;
}
void SimbaAdgroupAddResponse::setAdgroup (ADGroup adgroup) {
  this->adgroup = adgroup;
}

void SimbaAdgroupAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup")) {
  adgroup.setParser(responseParser->getObjectParser("adgroup"));
  adgroup.parseResponse();
  }

}

