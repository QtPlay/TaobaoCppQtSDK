#include <TaoApiCpp/response/PromotionActivityCancelResponse.h>

bool PromotionActivityCancelResponse::getIsSuccess() const {
  return isSuccess;
}
void PromotionActivityCancelResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void PromotionActivityCancelResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

