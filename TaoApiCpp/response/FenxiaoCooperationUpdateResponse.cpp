#include <TaoApiCpp/response/FenxiaoCooperationUpdateResponse.h>

bool FenxiaoCooperationUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoCooperationUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoCooperationUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

