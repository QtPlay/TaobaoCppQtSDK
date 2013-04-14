#include <TaoApiCpp/response/FenxiaoOrderPayResponse.h>

bool FenxiaoOrderPayResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoOrderPayResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoOrderPayResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

