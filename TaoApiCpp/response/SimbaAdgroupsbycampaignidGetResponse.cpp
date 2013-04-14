#include <TaoApiCpp/response/SimbaAdgroupsbycampaignidGetResponse.h>

ADGroupPage SimbaAdgroupsbycampaignidGetResponse::getAdgroups() const {
  return adgroups;
}
void SimbaAdgroupsbycampaignidGetResponse::setAdgroups (ADGroupPage adgroups) {
  this->adgroups = adgroups;
}

void SimbaAdgroupsbycampaignidGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroups")) {
  adgroups.setParser(responseParser->getObjectParser("adgroups"));
  adgroups.parseResponse();
  }

}

