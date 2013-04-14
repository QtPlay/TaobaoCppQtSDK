#include <TaoApiCpp/response/FenxiaoCooperationProductcatAddResponse.h>

bool FenxiaoCooperationProductcatAddResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoCooperationProductcatAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoCooperationProductcatAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

