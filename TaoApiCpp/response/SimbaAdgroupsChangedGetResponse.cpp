#include <TaoApiCpp/response/SimbaAdgroupsChangedGetResponse.h>

ADGroupPage SimbaAdgroupsChangedGetResponse::getAdgroups() const {
  return adgroups;
}
void SimbaAdgroupsChangedGetResponse::setAdgroups (ADGroupPage adgroups) {
  this->adgroups = adgroups;
}

void SimbaAdgroupsChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroups")) {
  adgroups.setParser(responseParser->getObjectParser("adgroups"));
  adgroups.parseResponse();
  }

}

