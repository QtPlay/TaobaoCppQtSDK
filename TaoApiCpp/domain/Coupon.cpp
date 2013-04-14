#include <TaoApiCpp/domain/Coupon.h>
qlonglong Coupon::getCondition() const {
  return condition;
}
void Coupon::setCondition (qlonglong condition) {
  this->condition = condition;
}

qlonglong Coupon::getCouponId() const {
  return couponId;
}
void Coupon::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
}

QDateTime Coupon::getCreatTime() const {
  return creatTime;
}
void Coupon::setCreatTime (QDateTime creatTime) {
  this->creatTime = creatTime;
}

QString Coupon::getCreateChannel() const {
  return createChannel;
}
void Coupon::setCreateChannel (QString createChannel) {
  this->createChannel = createChannel;
}

qlonglong Coupon::getDenominations() const {
  return denominations;
}
void Coupon::setDenominations (qlonglong denominations) {
  this->denominations = denominations;
}

QDateTime Coupon::getEndTime() const {
  return endTime;
}
void Coupon::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}


void Coupon::parseResponse() {
  if (responseParser->hasName("condition")) {
  condition = responseParser->getNumByName("condition");
  }
  if (responseParser->hasName("coupon_id")) {
  couponId = responseParser->getNumByName("coupon_id");
  }
  if (responseParser->hasName("creat_time")) {
  creatTime = responseParser->getDateByName("creat_time");
  }
  if (responseParser->hasName("create_channel")) {
  createChannel = responseParser->getStrByName("create_channel");
  }
  if (responseParser->hasName("denominations")) {
  denominations = responseParser->getNumByName("denominations");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }

}

