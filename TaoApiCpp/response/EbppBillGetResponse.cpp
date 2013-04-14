#include <TaoApiCpp/response/EbppBillGetResponse.h>

QString EbppBillGetResponse::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void EbppBillGetResponse::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}
QString EbppBillGetResponse::getBillDate() const {
  return billDate;
}
void EbppBillGetResponse::setBillDate (QString billDate) {
  this->billDate = billDate;
}
QString EbppBillGetResponse::getBillKey() const {
  return billKey;
}
void EbppBillGetResponse::setBillKey (QString billKey) {
  this->billKey = billKey;
}
QString EbppBillGetResponse::getChargeInst() const {
  return chargeInst;
}
void EbppBillGetResponse::setChargeInst (QString chargeInst) {
  this->chargeInst = chargeInst;
}
QString EbppBillGetResponse::getChargeInstName() const {
  return chargeInstName;
}
void EbppBillGetResponse::setChargeInstName (QString chargeInstName) {
  this->chargeInstName = chargeInstName;
}
QString EbppBillGetResponse::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillGetResponse::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}
QString EbppBillGetResponse::getOrderStatus() const {
  return orderStatus;
}
void EbppBillGetResponse::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}
QString EbppBillGetResponse::getOrderType() const {
  return orderType;
}
void EbppBillGetResponse::setOrderType (QString orderType) {
  this->orderType = orderType;
}
QString EbppBillGetResponse::getOwnerName() const {
  return ownerName;
}
void EbppBillGetResponse::setOwnerName (QString ownerName) {
  this->ownerName = ownerName;
}
QString EbppBillGetResponse::getPayAmount() const {
  return payAmount;
}
void EbppBillGetResponse::setPayAmount (QString payAmount) {
  this->payAmount = payAmount;
}
QString EbppBillGetResponse::getServiceAmount() const {
  return serviceAmount;
}
void EbppBillGetResponse::setServiceAmount (QString serviceAmount) {
  this->serviceAmount = serviceAmount;
}
QString EbppBillGetResponse::getSubOrderType() const {
  return subOrderType;
}
void EbppBillGetResponse::setSubOrderType (QString subOrderType) {
  this->subOrderType = subOrderType;
}
QString EbppBillGetResponse::getTrafficLocation() const {
  return trafficLocation;
}
void EbppBillGetResponse::setTrafficLocation (QString trafficLocation) {
  this->trafficLocation = trafficLocation;
}
QString EbppBillGetResponse::getTrafficRegulations() const {
  return trafficRegulations;
}
void EbppBillGetResponse::setTrafficRegulations (QString trafficRegulations) {
  this->trafficRegulations = trafficRegulations;
}

void EbppBillGetResponse::parseNormalResponse() {
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
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
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
  if (responseParser->hasName("traffic_location")) {
  trafficLocation = responseParser->getStrByName("traffic_location");
  }
  if (responseParser->hasName("traffic_regulations")) {
  trafficRegulations = responseParser->getStrByName("traffic_regulations");
  }

}

