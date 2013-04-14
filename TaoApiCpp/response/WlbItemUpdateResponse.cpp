#include <TaoApiCpp/response/WlbItemUpdateResponse.h>

QDateTime WlbItemUpdateResponse::getGmtModified() const {
  return gmtModified;
}
void WlbItemUpdateResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbItemUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

