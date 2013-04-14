#include <TaoApiCpp/response/FenxiaoCooperationAuditResponse.h>

bool FenxiaoCooperationAuditResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoCooperationAuditResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoCooperationAuditResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

