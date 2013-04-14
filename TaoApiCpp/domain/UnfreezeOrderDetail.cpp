#include <TaoApiCpp/domain/UnfreezeOrderDetail.h>
QString UnfreezeOrderDetail::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void UnfreezeOrderDetail::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}

QDateTime UnfreezeOrderDetail::getCreateTime() const {
  return createTime;
}
void UnfreezeOrderDetail::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QString UnfreezeOrderDetail::getMemo() const {
  return memo;
}
void UnfreezeOrderDetail::setMemo (QString memo) {
  this->memo = memo;
}

QString UnfreezeOrderDetail::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void UnfreezeOrderDetail::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}

QDateTime UnfreezeOrderDetail::getModifiedTime() const {
  return modifiedTime;
}
void UnfreezeOrderDetail::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString UnfreezeOrderDetail::getOrderAmount() const {
  return orderAmount;
}
void UnfreezeOrderDetail::setOrderAmount (QString orderAmount) {
  this->orderAmount = orderAmount;
}

QString UnfreezeOrderDetail::getOrderStatus() const {
  return orderStatus;
}
void UnfreezeOrderDetail::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}

QString UnfreezeOrderDetail::getUnfreezeAmount() const {
  return unfreezeAmount;
}
void UnfreezeOrderDetail::setUnfreezeAmount (QString unfreezeAmount) {
  this->unfreezeAmount = unfreezeAmount;
}


void UnfreezeOrderDetail::parseResponse() {
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
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
  if (responseParser->hasName("order_amount")) {
  orderAmount = responseParser->getStrByName("order_amount");
  }
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
  }
  if (responseParser->hasName("unfreeze_amount")) {
  unfreezeAmount = responseParser->getStrByName("unfreeze_amount");
  }

}

