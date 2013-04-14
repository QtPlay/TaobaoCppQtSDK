#include <TaoApiCpp/response/SimbaAdgroupCatmatchGetResponse.h>

ADGroupCatmatch SimbaAdgroupCatmatchGetResponse::getAdgroupcatmatch() const {
  return adgroupcatmatch;
}
void SimbaAdgroupCatmatchGetResponse::setAdgroupcatmatch (ADGroupCatmatch adgroupcatmatch) {
  this->adgroupcatmatch = adgroupcatmatch;
}

void SimbaAdgroupCatmatchGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroupcatmatch")) {
  adgroupcatmatch.setParser(responseParser->getObjectParser("adgroupcatmatch"));
  adgroupcatmatch.parseResponse();
  }

}

