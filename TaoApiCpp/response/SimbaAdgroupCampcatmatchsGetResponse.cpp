#include <TaoApiCpp/response/SimbaAdgroupCampcatmatchsGetResponse.h>

ADGroupCatMatchPage SimbaAdgroupCampcatmatchsGetResponse::getAdgroupcatmatchs() const {
  return adgroupcatmatchs;
}
void SimbaAdgroupCampcatmatchsGetResponse::setAdgroupcatmatchs (ADGroupCatMatchPage adgroupcatmatchs) {
  this->adgroupcatmatchs = adgroupcatmatchs;
}

void SimbaAdgroupCampcatmatchsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroupcatmatchs")) {
  adgroupcatmatchs.setParser(responseParser->getObjectParser("adgroupcatmatchs"));
  adgroupcatmatchs.parseResponse();
  }

}

