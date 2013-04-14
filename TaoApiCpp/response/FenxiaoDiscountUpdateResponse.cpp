#include <TaoApiCpp/response/FenxiaoDiscountUpdateResponse.h>

bool FenxiaoDiscountUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoDiscountUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoDiscountUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

