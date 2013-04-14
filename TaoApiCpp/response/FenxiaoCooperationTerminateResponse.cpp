#include <TaoApiCpp/response/FenxiaoCooperationTerminateResponse.h>

bool FenxiaoCooperationTerminateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoCooperationTerminateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoCooperationTerminateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

