#include <TaoApiCpp/response/FenxiaoProductMapDeleteResponse.h>

bool FenxiaoProductMapDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductMapDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductMapDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

