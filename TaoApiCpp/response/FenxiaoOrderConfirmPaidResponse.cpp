#include <TaoApiCpp/response/FenxiaoOrderConfirmPaidResponse.h>

bool FenxiaoOrderConfirmPaidResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoOrderConfirmPaidResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoOrderConfirmPaidResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

