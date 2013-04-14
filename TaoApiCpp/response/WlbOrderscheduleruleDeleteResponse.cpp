#include <TaoApiCpp/response/WlbOrderscheduleruleDeleteResponse.h>

QDateTime WlbOrderscheduleruleDeleteResponse::getGmtModified() const {
  return gmtModified;
}
void WlbOrderscheduleruleDeleteResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbOrderscheduleruleDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

