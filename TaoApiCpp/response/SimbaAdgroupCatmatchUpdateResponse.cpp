#include <TaoApiCpp/response/SimbaAdgroupCatmatchUpdateResponse.h>

ADGroupCatmatch SimbaAdgroupCatmatchUpdateResponse::getAdgroupcatmatch() const {
  return adgroupcatmatch;
}
void SimbaAdgroupCatmatchUpdateResponse::setAdgroupcatmatch (ADGroupCatmatch adgroupcatmatch) {
  this->adgroupcatmatch = adgroupcatmatch;
}

void SimbaAdgroupCatmatchUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroupcatmatch")) {
  adgroupcatmatch.setParser(responseParser->getObjectParser("adgroupcatmatch"));
  adgroupcatmatch.parseResponse();
  }

}

