#include <TaoApiCpp/response/WlbItemCombinationDeleteResponse.h>

QDateTime WlbItemCombinationDeleteResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemCombinationDeleteResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemCombinationDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

