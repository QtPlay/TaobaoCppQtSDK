#include <TaoApiCpp/response/SimbaAdgroupsbyadgroupidsGetResponse.h>

ADGroupPage SimbaAdgroupsbyadgroupidsGetResponse::getAdgroups() const {
  return adgroups;
}
void SimbaAdgroupsbyadgroupidsGetResponse::setAdgroups (ADGroupPage adgroups) {
  this->adgroups = adgroups;
}

void SimbaAdgroupsbyadgroupidsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroups")) {
  adgroups.setParser(responseParser->getObjectParser("adgroups"));
  adgroups.parseResponse();
  }

}

