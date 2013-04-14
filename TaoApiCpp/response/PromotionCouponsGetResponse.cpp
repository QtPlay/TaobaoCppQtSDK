#include <TaoApiCpp/response/PromotionCouponsGetResponse.h>

QList<Coupon> PromotionCouponsGetResponse::getCoupons() const {
  return coupons;
}
void PromotionCouponsGetResponse::setCoupons (QList<Coupon> coupons) {
  this->coupons = coupons;
}
qlonglong PromotionCouponsGetResponse::getTotalResults() const {
  return totalResults;
}
void PromotionCouponsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void PromotionCouponsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("coupons")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("coupons");
  Parser *parser;
  foreach (parser, listParser) {
    Coupon tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    coupons.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

