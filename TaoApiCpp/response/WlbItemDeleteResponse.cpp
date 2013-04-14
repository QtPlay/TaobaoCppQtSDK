#include <TaoApiCpp/response/WlbItemDeleteResponse.h>

QDateTime WlbItemDeleteResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemDeleteResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

