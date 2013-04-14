#include <TaoApiCpp/response/MarketingPromotionKfcResponse.h>

bool MarketingPromotionKfcResponse::getIsSuccess() const {
  return isSuccess;
}
void MarketingPromotionKfcResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void MarketingPromotionKfcResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

