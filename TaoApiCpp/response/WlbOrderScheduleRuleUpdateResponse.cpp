#include <TaoApiCpp/response/WlbOrderScheduleRuleUpdateResponse.h>

QDateTime WlbOrderScheduleRuleUpdateResponse::getGmtModified() const {
  return gmtModified;
}
void WlbOrderScheduleRuleUpdateResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbOrderScheduleRuleUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

