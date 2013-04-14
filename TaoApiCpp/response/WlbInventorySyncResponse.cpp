#include <TaoApiCpp/response/WlbInventorySyncResponse.h>

QDateTime WlbInventorySyncResponse::getGmtModified() const {
  return gmtModified;
}
void WlbInventorySyncResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbInventorySyncResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

