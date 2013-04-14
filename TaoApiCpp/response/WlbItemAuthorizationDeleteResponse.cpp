#include <TaoApiCpp/response/WlbItemAuthorizationDeleteResponse.h>

QDateTime WlbItemAuthorizationDeleteResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemAuthorizationDeleteResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemAuthorizationDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

