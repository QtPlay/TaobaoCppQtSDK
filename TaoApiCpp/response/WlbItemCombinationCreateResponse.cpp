#include <TaoApiCpp/response/WlbItemCombinationCreateResponse.h>

QDateTime WlbItemCombinationCreateResponse::getGmtCreate() const {
  return gmtCreate;
}
void WlbItemCombinationCreateResponse::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

void WlbItemCombinationCreateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }

}

