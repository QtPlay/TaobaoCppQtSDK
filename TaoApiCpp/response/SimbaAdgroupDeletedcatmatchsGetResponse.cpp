#include <TaoApiCpp/response/SimbaAdgroupDeletedcatmatchsGetResponse.h>

ADGroupCatMatchPage SimbaAdgroupDeletedcatmatchsGetResponse::getDeletedCatmatchs() const {
  return deletedCatmatchs;
}
void SimbaAdgroupDeletedcatmatchsGetResponse::setDeletedCatmatchs (ADGroupCatMatchPage deletedCatmatchs) {
  this->deletedCatmatchs = deletedCatmatchs;
}

void SimbaAdgroupDeletedcatmatchsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("deleted_catmatchs")) {
  deletedCatmatchs.setParser(responseParser->getObjectParser("deleted_catmatchs"));
  deletedCatmatchs.parseResponse();
  }

}

