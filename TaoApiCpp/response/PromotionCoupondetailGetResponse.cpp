#include <TaoApiCpp/response/PromotionCoupondetailGetResponse.h>

QList<CouponDetail> PromotionCoupondetailGetResponse::getCouponDetails() const {
  return couponDetails;
}
void PromotionCoupondetailGetResponse::setCouponDetails (QList<CouponDetail> couponDetails) {
  this->couponDetails = couponDetails;
}
qlonglong PromotionCoupondetailGetResponse::getTotalResults() const {
  return totalResults;
}
void PromotionCoupondetailGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void PromotionCoupondetailGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("coupon_details")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("coupon_details");
  Parser *parser;
  foreach (parser, listParser) {
    CouponDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    couponDetails.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

