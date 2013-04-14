#include <TaoApiCpp/response/FenxiaoOrderCloseResponse.h>

bool FenxiaoOrderCloseResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoOrderCloseResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoOrderCloseResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

