#include <TaoApiCpp/domain/CouponDetail.h>
QString CouponDetail::getBuyerNick() const {
  return buyerNick;
}
void CouponDetail::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QString CouponDetail::getChannel() const {
  return channel;
}
void CouponDetail::setChannel (QString channel) {
  this->channel = channel;
}

qlonglong CouponDetail::getCouponNumber() const {
  return couponNumber;
}
void CouponDetail::setCouponNumber (qlonglong couponNumber) {
  this->couponNumber = couponNumber;
}

QString CouponDetail::getState() const {
  return state;
}
void CouponDetail::setState (QString state) {
  this->state = state;
}


void CouponDetail::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("channel")) {
  channel = responseParser->getStrByName("channel");
  }
  if (responseParser->hasName("coupon_number")) {
  couponNumber = responseParser->getNumByName("coupon_number");
  }
  if (responseParser->hasName("state")) {
  state = responseParser->getStrByName("state");
  }

}

