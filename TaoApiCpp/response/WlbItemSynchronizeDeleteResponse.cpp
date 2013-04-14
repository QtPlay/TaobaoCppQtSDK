#include <TaoApiCpp/response/WlbItemSynchronizeDeleteResponse.h>

QDateTime WlbItemSynchronizeDeleteResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemSynchronizeDeleteResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemSynchronizeDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

