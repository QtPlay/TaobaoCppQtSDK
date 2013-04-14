#include <TaoApiCpp/response/PromotionCouponSendResponse.h>

QList<CouponResult> PromotionCouponSendResponse::getCouponResults() const {
  return couponResults;
}
void PromotionCouponSendResponse::setCouponResults (QList<CouponResult> couponResults) {
  this->couponResults = couponResults;
}
QList<ErrorMessage> PromotionCouponSendResponse::getFailureBuyers() const {
  return failureBuyers;
}
void PromotionCouponSendResponse::setFailureBuyers (QList<ErrorMessage> failureBuyers) {
  this->failureBuyers = failureBuyers;
}
bool PromotionCouponSendResponse::getIsSuccess() const {
  return isSuccess;
}
void PromotionCouponSendResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void PromotionCouponSendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("coupon_results")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("coupon_results");
  Parser *parser;
  foreach (parser, listParser) {
    CouponResult tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    couponResults.append(tmp);
  }
  }
  if (responseParser->hasName("failure_buyers")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("failure_buyers");
  Parser *parser;
  foreach (parser, listParser) {
    ErrorMessage tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    failureBuyers.append(tmp);
  }
  }
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

