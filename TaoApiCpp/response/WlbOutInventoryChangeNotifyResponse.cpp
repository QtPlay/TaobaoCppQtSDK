#include <TaoApiCpp/response/WlbOutInventoryChangeNotifyResponse.h>

QDateTime WlbOutInventoryChangeNotifyResponse::getGmtModified() const {
  return gmtModified;
}
void WlbOutInventoryChangeNotifyResponse::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

void WlbOutInventoryChangeNotifyResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }

}

