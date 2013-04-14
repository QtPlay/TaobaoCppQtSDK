#include <TaoApiCpp/domain/TradeRecord.h>
QString TradeRecord::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void TradeRecord::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}

QDateTime TradeRecord::getCreateTime() const {
  return createTime;
}
void TradeRecord::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QString TradeRecord::getInOutType() const {
  return inOutType;
}
void TradeRecord::setInOutType (QString inOutType) {
  this->inOutType = inOutType;
}

QString TradeRecord::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void TradeRecord::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}

QDateTime TradeRecord::getModifiedTime() const {
  return modifiedTime;
}
void TradeRecord::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString TradeRecord::getOppositeLogonId() const {
  return oppositeLogonId;
}
void TradeRecord::setOppositeLogonId (QString oppositeLogonId) {
  this->oppositeLogonId = oppositeLogonId;
}

QString TradeRecord::getOppositeName() const {
  return oppositeName;
}
void TradeRecord::setOppositeName (QString oppositeName) {
  this->oppositeName = oppositeName;
}

QString TradeRecord::getOppositeUserId() const {
  return oppositeUserId;
}
void TradeRecord::setOppositeUserId (QString oppositeUserId) {
  this->oppositeUserId = oppositeUserId;
}

QString TradeRecord::getOrderFrom() const {
  return orderFrom;
}
void TradeRecord::setOrderFrom (QString orderFrom) {
  this->orderFrom = orderFrom;
}

QString TradeRecord::getOrderStatus() const {
  return orderStatus;
}
void TradeRecord::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}

QString TradeRecord::getOrderTitle() const {
  return orderTitle;
}
void TradeRecord::setOrderTitle (QString orderTitle) {
  this->orderTitle = orderTitle;
}

QString TradeRecord::getOrderType() const {
  return orderType;
}
void TradeRecord::setOrderType (QString orderType) {
  this->orderType = orderType;
}

QString TradeRecord::getOwnerLogonId() const {
  return ownerLogonId;
}
void TradeRecord::setOwnerLogonId (QString ownerLogonId) {
  this->ownerLogonId = ownerLogonId;
}

QString TradeRecord::getOwnerName() const {
  return ownerName;
}
void TradeRecord::setOwnerName (QString ownerName) {
  this->ownerName = ownerName;
}

QString TradeRecord::getOwnerUserId() const {
  return ownerUserId;
}
void TradeRecord::setOwnerUserId (QString ownerUserId) {
  this->ownerUserId = ownerUserId;
}

QString TradeRecord::getServiceCharge() const {
  return serviceCharge;
}
void TradeRecord::setServiceCharge (QString serviceCharge) {
  this->serviceCharge = serviceCharge;
}

QString TradeRecord::getTotalAmount() const {
  return totalAmount;
}
void TradeRecord::setTotalAmount (QString totalAmount) {
  this->totalAmount = totalAmount;
}


void TradeRecord::parseResponse() {
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("in_out_type")) {
  inOutType = responseParser->getStrByName("in_out_type");
  }
  if (responseParser->hasName("merchant_order_no")) {
  merchantOrderNo = responseParser->getStrByName("merchant_order_no");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("opposite_logon_id")) {
  oppositeLogonId = responseParser->getStrByName("opposite_logon_id");
  }
  if (responseParser->hasName("opposite_name")) {
  oppositeName = responseParser->getStrByName("opposite_name");
  }
  if (responseParser->hasName("opposite_user_id")) {
  oppositeUserId = responseParser->getStrByName("opposite_user_id");
  }
  if (responseParser->hasName("order_from")) {
  orderFrom = responseParser->getStrByName("order_from");
  }
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
  }
  if (responseParser->hasName("order_title")) {
  orderTitle = responseParser->getStrByName("order_title");
  }
  if (responseParser->hasName("order_type")) {
  orderType = responseParser->getStrByName("order_type");
  }
  if (responseParser->hasName("owner_logon_id")) {
  ownerLogonId = responseParser->getStrByName("owner_logon_id");
  }
  if (responseParser->hasName("owner_name")) {
  ownerName = responseParser->getStrByName("owner_name");
  }
  if (responseParser->hasName("owner_user_id")) {
  ownerUserId = responseParser->getStrByName("owner_user_id");
  }
  if (responseParser->hasName("service_charge")) {
  serviceCharge = responseParser->getStrByName("service_charge");
  }
  if (responseParser->hasName("total_amount")) {
  totalAmount = responseParser->getStrByName("total_amount");
  }

}

