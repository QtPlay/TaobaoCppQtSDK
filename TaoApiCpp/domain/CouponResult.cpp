#include <TaoApiCpp/domain/CouponResult.h>
QString CouponResult::getBuyerNick() const {
  return buyerNick;
}
void CouponResult::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

qlonglong CouponResult::getCouponNumber() const {
  return couponNumber;
}
void CouponResult::setCouponNumber (qlonglong couponNumber) {
  this->couponNumber = couponNumber;
}


void CouponResult::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("coupon_number")) {
  couponNumber = responseParser->getNumByName("coupon_number");
  }

}

