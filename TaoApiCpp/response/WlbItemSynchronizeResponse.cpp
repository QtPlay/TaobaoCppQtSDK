#include <TaoApiCpp/response/WlbItemSynchronizeResponse.h>

QDateTime WlbItemSynchronizeResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemSynchronizeResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemSynchronizeResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

