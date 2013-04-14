#include <TaoApiCpp/response/WlbOrderConsignResponse.h>

QDateTime WlbOrderConsignResponse::getModifyTime() const {
  return modifyTime;
}
void WlbOrderConsignResponse::setModifyTime (QDateTime modifyTime) {
  this->modifyTime = modifyTime;
}

void WlbOrderConsignResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("modify_time")) {
  modifyTime = responseParser->getDateByName("modify_time");
  }

}

