#include <TaoApiCpp/response/LogisticsOnlineCancelResponse.h>

bool LogisticsOnlineCancelResponse::getIsSuccess() const {
  return isSuccess;
}
void LogisticsOnlineCancelResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}
QDateTime LogisticsOnlineCancelResponse::getModifyTime() const {
  return modifyTime;
}
void LogisticsOnlineCancelResponse::setModifyTime (QDateTime modifyTime) {
  this->modifyTime = modifyTime;
}
qlonglong LogisticsOnlineCancelResponse::getRecreatedOrderId() const {
  return recreatedOrderId;
}
void LogisticsOnlineCancelResponse::setRecreatedOrderId (qlonglong recreatedOrderId) {
  this->recreatedOrderId = recreatedOrderId;
}

void LogisticsOnlineCancelResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }
  if (responseParser->hasName("modify_time")) {
  modifyTime = responseParser->getDateByName("modify_time");
  }
  if (responseParser->hasName("recreated_order_id")) {
  recreatedOrderId = responseParser->getNumByName("recreated_order_id");
  }

}

