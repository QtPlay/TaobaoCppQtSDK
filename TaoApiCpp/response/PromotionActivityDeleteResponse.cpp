#include <TaoApiCpp/response/PromotionActivityDeleteResponse.h>

bool PromotionActivityDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void PromotionActivityDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void PromotionActivityDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

