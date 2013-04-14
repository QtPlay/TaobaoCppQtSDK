#include <TaoApiCpp/response/SimbaAdgroupChangedcatmatchsGetResponse.h>

ADGroupCatMatchPage SimbaAdgroupChangedcatmatchsGetResponse::getChangedCatmatchs() const {
  return changedCatmatchs;
}
void SimbaAdgroupChangedcatmatchsGetResponse::setChangedCatmatchs (ADGroupCatMatchPage changedCatmatchs) {
  this->changedCatmatchs = changedCatmatchs;
}

void SimbaAdgroupChangedcatmatchsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("changed_catmatchs")) {
  changedCatmatchs.setParser(responseParser->getObjectParser("changed_catmatchs"));
  changedCatmatchs.parseResponse();
  }

}

