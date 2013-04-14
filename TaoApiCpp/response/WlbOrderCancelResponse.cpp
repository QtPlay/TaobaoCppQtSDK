#include <TaoApiCpp/response/WlbOrderCancelResponse.h>

QString WlbOrderCancelResponse::getErrorCodeList() const {
  return errorCodeList;
}
void WlbOrderCancelResponse::setErrorCodeList (QString errorCodeList) {
  this->errorCodeList = errorCodeList;
}
QDateTime WlbOrderCancelResponse::getModifyTime() const {
  return modifyTime;
}
void WlbOrderCancelResponse::setModifyTime (QDateTime modifyTime) {
  this->modifyTime = modifyTime;
}

void WlbOrderCancelResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("error_code_list")) {
  errorCodeList = responseParser->getStrByName("error_code_list");
  }
  if (responseParser->hasName("modify_time")) {
  modifyTime = responseParser->getDateByName("modify_time");
  }

}

