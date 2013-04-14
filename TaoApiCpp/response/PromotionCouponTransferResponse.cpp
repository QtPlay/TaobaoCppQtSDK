#include <TaoApiCpp/response/PromotionCouponTransferResponse.h>

bool PromotionCouponTransferResponse::getIsSuccess() const {
  return isSuccess;
}
void PromotionCouponTransferResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void PromotionCouponTransferResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

