#include <TaoApiCpp/domain/MicroPayOrderDetail.h>
QString MicroPayOrderDetail::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void MicroPayOrderDetail::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}

QString MicroPayOrderDetail::getAlipayUserId() const {
  return alipayUserId;
}
void MicroPayOrderDetail::setAlipayUserId (QString alipayUserId) {
  this->alipayUserId = alipayUserId;
}

QString MicroPayOrderDetail::getAvailableAmount() const {
  return availableAmount;
}
void MicroPayOrderDetail::setAvailableAmount (QString availableAmount) {
  this->availableAmount = availableAmount;
}

QDateTime MicroPayOrderDetail::getCreateTime() const {
  return createTime;
}
void MicroPayOrderDetail::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime MicroPayOrderDetail::getExpireTime() const {
  return expireTime;
}
void MicroPayOrderDetail::setExpireTime (QDateTime expireTime) {
  this->expireTime = expireTime;
}

QString MicroPayOrderDetail::getFreezeAmount() const {
  return freezeAmount;
}
void MicroPayOrderDetail::setFreezeAmount (QString freezeAmount) {
  this->freezeAmount = freezeAmount;
}

QString MicroPayOrderDetail::getMemo() const {
  return memo;
}
void MicroPayOrderDetail::setMemo (QString memo) {
  this->memo = memo;
}

QString MicroPayOrderDetail::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void MicroPayOrderDetail::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}

QDateTime MicroPayOrderDetail::getModifiedTime() const {
  return modifiedTime;
}
void MicroPayOrderDetail::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString MicroPayOrderDetail::getOrderStatus() const {
  return orderStatus;
}
void MicroPayOrderDetail::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}

QString MicroPayOrderDetail::getPayAmount() const {
  return payAmount;
}
void MicroPayOrderDetail::setPayAmount (QString payAmount) {
  this->payAmount = payAmount;
}

QString MicroPayOrderDetail::getPayConfirm() const {
  return payConfirm;
}
void MicroPayOrderDetail::setPayConfirm (QString payConfirm) {
  this->payConfirm = payConfirm;
}


void MicroPayOrderDetail::parseResponse() {
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("alipay_user_id")) {
  alipayUserId = responseParser->getStrByName("alipay_user_id");
  }
  if (responseParser->hasName("available_amount")) {
  availableAmount = responseParser->getStrByName("available_amount");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("expire_time")) {
  expireTime = responseParser->getDateByName("expire_time");
  }
  if (responseParser->hasName("freeze_amount")) {
  freezeAmount = responseParser->getStrByName("freeze_amount");
  }
  if (responseParser->hasName("memo")) {
  memo = responseParser->getStrByName("memo");
  }
  if (responseParser->hasName("merchant_order_no")) {
  merchantOrderNo = responseParser->getStrByName("merchant_order_no");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
  }
  if (responseParser->hasName("pay_amount")) {
  payAmount = responseParser->getStrByName("pay_amount");
  }
  if (responseParser->hasName("pay_confirm")) {
  payConfirm = responseParser->getStrByName("pay_confirm");
  }

}

