#include <TaoApiCpp/response/WlbNotifyMessageConfirmResponse.h>

QDateTime WlbNotifyMessageConfirmResponse::getGmtModified() const {
  return gmtModified;
}
void WlbNotifyMessageConfirmResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbNotifyMessageConfirmResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

