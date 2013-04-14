#include <TaoApiCpp/response/SimbaAdgroupDeleteResponse.h>

ADGroup SimbaAdgroupDeleteResponse::getAdgroup() const {
  return adgroup;
}
void SimbaAdgroupDeleteResponse::setAdgroup (ADGroup adgroup) {
  this->adgroup = adgroup;
}

void SimbaAdgroupDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup")) {
  adgroup.setParser(responseParser->getObjectParser("adgroup"));
  adgroup.parseResponse();
  }

}

