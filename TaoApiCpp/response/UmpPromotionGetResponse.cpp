#include <TaoApiCpp/response/UmpPromotionGetResponse.h>

PromotionDisplayTop UmpPromotionGetResponse::getPromotions() const {
  return promotions;
}
void UmpPromotionGetResponse::setPromotions (PromotionDisplayTop promotions) {
  this->promotions = promotions;
}

void UmpPromotionGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("promotions")) {
  promotions.setParser(responseParser->getObjectParser("promotions"));
  promotions.parseResponse();
  }

}

