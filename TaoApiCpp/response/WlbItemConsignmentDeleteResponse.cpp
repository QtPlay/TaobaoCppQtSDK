#include <TaoApiCpp/response/WlbItemConsignmentDeleteResponse.h>

QDateTime WlbItemConsignmentDeleteResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemConsignmentDeleteResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemConsignmentDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

