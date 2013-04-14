#include <TaoApiCpp/response/PromotionCouponAddResponse.h>

qlonglong PromotionCouponAddResponse::getCouponId() const {
  return couponId;
}
void PromotionCouponAddResponse::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
}

void PromotionCouponAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("coupon_id")) {
  couponId = responseParser->getNumByName("coupon_id");
  }

}

