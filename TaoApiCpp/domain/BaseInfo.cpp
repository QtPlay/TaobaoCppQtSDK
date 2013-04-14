#include <TaoApiCpp/domain/BaseInfo.h>
QString BaseInfo::getAccountNo() const {
  return accountNo;
}
void BaseInfo::setAccountNo (QString accountNo) {
  this->accountNo = accountNo;
}

QString BaseInfo::getAlipayTradeNo() const {
  return alipayTradeNo;
}
void BaseInfo::setAlipayTradeNo (QString alipayTradeNo) {
  this->alipayTradeNo = alipayTradeNo;
}

qlonglong BaseInfo::getBookWay() const {
  return bookWay;
}
void BaseInfo::setBookWay (qlonglong bookWay) {
  this->bookWay = bookWay;
}

QString BaseInfo::getCommission() const {
  return commission;
}
void BaseInfo::setCommission (QString commission) {
  this->commission = commission;
}

QString BaseInfo::getCommissionDiscount() const {
  return commissionDiscount;
}
void BaseInfo::setCommissionDiscount (QString commissionDiscount) {
  this->commissionDiscount = commissionDiscount;
}

QDateTime BaseInfo::getCreateTime() const {
  return createTime;
}
void BaseInfo::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QString BaseInfo::getExtra() const {
  return extra;
}
void BaseInfo::setExtra (QString extra) {
  this->extra = extra;
}

QDateTime BaseInfo::getModifyTime() const {
  return modifyTime;
}
void BaseInfo::setModifyTime (QDateTime modifyTime) {
  this->modifyTime = modifyTime;
}

qlonglong BaseInfo::getOrderId() const {
  return orderId;
}
void BaseInfo::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
}

QDateTime BaseInfo::getPayLatestTime() const {
  return payLatestTime;
}
void BaseInfo::setPayLatestTime (QDateTime payLatestTime) {
  this->payLatestTime = payLatestTime;
}

qlonglong BaseInfo::getPayStatus() const {
  return payStatus;
}
void BaseInfo::setPayStatus (qlonglong payStatus) {
  this->payStatus = payStatus;
}

QString BaseInfo::getRelationEmail() const {
  return relationEmail;
}
void BaseInfo::setRelationEmail (QString relationEmail) {
  this->relationEmail = relationEmail;
}

QString BaseInfo::getRelationMobile() const {
  return relationMobile;
}
void BaseInfo::setRelationMobile (QString relationMobile) {
  this->relationMobile = relationMobile;
}

QString BaseInfo::getRelationName() const {
  return relationName;
}
void BaseInfo::setRelationName (QString relationName) {
  this->relationName = relationName;
}

QString BaseInfo::getRelationPhoneBak() const {
  return relationPhoneBak;
}
void BaseInfo::setRelationPhoneBak (QString relationPhoneBak) {
  this->relationPhoneBak = relationPhoneBak;
}

qlonglong BaseInfo::getRelativeOrderId() const {
  return relativeOrderId;
}
void BaseInfo::setRelativeOrderId (qlonglong relativeOrderId) {
  this->relativeOrderId = relativeOrderId;
}

qlonglong BaseInfo::getStatus() const {
  return status;
}
void BaseInfo::setStatus (qlonglong status) {
  this->status = status;
}

qlonglong BaseInfo::getTotalPrice() const {
  return totalPrice;
}
void BaseInfo::setTotalPrice (qlonglong totalPrice) {
  this->totalPrice = totalPrice;
}

qlonglong BaseInfo::getTripType() const {
  return tripType;
}
void BaseInfo::setTripType (qlonglong tripType) {
  this->tripType = tripType;
}


void BaseInfo::parseResponse() {
  if (responseParser->hasName("account_no")) {
  accountNo = responseParser->getStrByName("account_no");
  }
  if (responseParser->hasName("alipay_trade_no")) {
  alipayTradeNo = responseParser->getStrByName("alipay_trade_no");
  }
  if (responseParser->hasName("book_way")) {
  bookWay = responseParser->getNumByName("book_way");
  }
  if (responseParser->hasName("commission")) {
  commission = responseParser->getStrByName("commission");
  }
  if (responseParser->hasName("commission_discount")) {
  commissionDiscount = responseParser->getStrByName("commission_discount");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("extra")) {
  extra = responseParser->getStrByName("extra");
  }
  if (responseParser->hasName("modify_time")) {
  modifyTime = responseParser->getDateByName("modify_time");
  }
  if (responseParser->hasName("order_id")) {
  orderId = responseParser->getNumByName("order_id");
  }
  if (responseParser->hasName("pay_latest_time")) {
  payLatestTime = responseParser->getDateByName("pay_latest_time");
  }
  if (responseParser->hasName("pay_status")) {
  payStatus = responseParser->getNumByName("pay_status");
  }
  if (responseParser->hasName("relation_email")) {
  relationEmail = responseParser->getStrByName("relation_email");
  }
  if (responseParser->hasName("relation_mobile")) {
  relationMobile = responseParser->getStrByName("relation_mobile");
  }
  if (responseParser->hasName("relation_name")) {
  relationName = responseParser->getStrByName("relation_name");
  }
  if (responseParser->hasName("relation_phone_bak")) {
  relationPhoneBak = responseParser->getStrByName("relation_phone_bak");
  }
  if (responseParser->hasName("relative_order_id")) {
  relativeOrderId = responseParser->getNumByName("relative_order_id");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("total_price")) {
  totalPrice = responseParser->getNumByName("total_price");
  }
  if (responseParser->hasName("trip_type")) {
  tripType = responseParser->getNumByName("trip_type");
  }

}

