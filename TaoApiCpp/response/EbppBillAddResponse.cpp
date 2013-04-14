#include <TaoApiCpp/response/EbppBillAddResponse.h>

QString EbppBillAddResponse::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void EbppBillAddResponse::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}
QString EbppBillAddResponse::getBillDate() const {
  return billDate;
}
void EbppBillAddResponse::setBillDate (QString billDate) {
  this->billDate = billDate;
}
QString EbppBillAddResponse::getBillKey() const {
  return billKey;
}
void EbppBillAddResponse::setBillKey (QString billKey) {
  this->billKey = billKey;
}
QString EbppBillAddResponse::getChargeInst() const {
  return chargeInst;
}
void EbppBillAddResponse::setChargeInst (QString chargeInst) {
  this->chargeInst = chargeInst;
}
QString EbppBillAddResponse::getChargeInstName() const {
  return chargeInstName;
}
void EbppBillAddResponse::setChargeInstName (QString chargeInstName) {
  this->chargeInstName = chargeInstName;
}
QString EbppBillAddResponse::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillAddResponse::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}
QString EbppBillAddResponse::getOrderType() const {
  return orderType;
}
void EbppBillAddResponse::setOrderType (QString orderType) {
  this->orderType = orderType;
}
QString EbppBillAddResponse::getOwnerName() const {
  return ownerName;
}
void EbppBillAddResponse::setOwnerName (QString ownerName) {
  this->ownerName = ownerName;
}
QString EbppBillAddResponse::getPayAmount() const {
  return payAmount;
}
void EbppBillAddResponse::setPayAmount (QString payAmount) {
  this->payAmount = payAmount;
}
QString EbppBillAddResponse::getServiceAmount() const {
  return serviceAmount;
}
void EbppBillAddResponse::setServiceAmount (QString serviceAmount) {
  this->serviceAmount = serviceAmount;
}
QString EbppBillAddResponse::getSubOrderType() const {
  return subOrderType;
}
void EbppBillAddResponse::setSubOrderType (QString subOrderType) {
  this->subOrderType = subOrderType;
}

void EbppBillAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("bill_date")) {
  billDate = responseParser->getStrByName("bill_date");
  }
  if (responseParser->hasName("bill_key")) {
  billKey = responseParser->getStrByName("bill_key");
  }
  if (responseParser->hasName("charge_inst")) {
  chargeInst = responseParser->getStrByName("charge_inst");
  }
  if (responseParser->hasName("charge_inst_name")) {
  chargeInstName = responseParser->getStrByName("charge_inst_name");
  }
  if (responseParser->hasName("merchant_order_no")) {
  merchantOrderNo = responseParser->getStrByName("merchant_order_no");
  }
  if (responseParser->hasName("order_type")) {
  orderType = responseParser->getStrByName("order_type");
  }
  if (responseParser->hasName("owner_name")) {
  ownerName = responseParser->getStrByName("owner_name");
  }
  if (responseParser->hasName("pay_amount")) {
  payAmount = responseParser->getStrByName("pay_amount");
  }
  if (responseParser->hasName("service_amount")) {
  serviceAmount = responseParser->getStrByName("service_amount");
  }
  if (responseParser->hasName("sub_order_type")) {
  subOrderType = responseParser->getStrByName("sub_order_type");
  }

}

