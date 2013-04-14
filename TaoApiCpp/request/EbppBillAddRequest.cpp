#include <TaoApiCpp/request/EbppBillAddRequest.h>

QString EbppBillAddRequest::getApiMethodName() const {
  return "alipay.ebpp.bill.add";
}

QString EbppBillAddRequest::getAuthToken() const {
  return authToken;
}
void EbppBillAddRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString EbppBillAddRequest::getBillDate() const {
  return billDate;
}
void EbppBillAddRequest::setBillDate (QString billDate) {
  this->billDate = billDate;
  appParams.insert("bill_date", billDate);
}

QString EbppBillAddRequest::getBillKey() const {
  return billKey;
}
void EbppBillAddRequest::setBillKey (QString billKey) {
  this->billKey = billKey;
  appParams.insert("bill_key", billKey);
}

QString EbppBillAddRequest::getChargeInst() const {
  return chargeInst;
}
void EbppBillAddRequest::setChargeInst (QString chargeInst) {
  this->chargeInst = chargeInst;
  appParams.insert("charge_inst", chargeInst);
}

QString EbppBillAddRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillAddRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString EbppBillAddRequest::getMobile() const {
  return mobile;
}
void EbppBillAddRequest::setMobile (QString mobile) {
  this->mobile = mobile;
  appParams.insert("mobile", mobile);
}

QString EbppBillAddRequest::getOrderType() const {
  return orderType;
}
void EbppBillAddRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}

QString EbppBillAddRequest::getOwnerName() const {
  return ownerName;
}
void EbppBillAddRequest::setOwnerName (QString ownerName) {
  this->ownerName = ownerName;
  appParams.insert("owner_name", ownerName);
}

QString EbppBillAddRequest::getPayAmount() const {
  return payAmount;
}
void EbppBillAddRequest::setPayAmount (QString payAmount) {
  this->payAmount = payAmount;
  appParams.insert("pay_amount", payAmount);
}

QString EbppBillAddRequest::getServiceAmount() const {
  return serviceAmount;
}
void EbppBillAddRequest::setServiceAmount (QString serviceAmount) {
  this->serviceAmount = serviceAmount;
  appParams.insert("service_amount", serviceAmount);
}

QString EbppBillAddRequest::getSubOrderType() const {
  return subOrderType;
}
void EbppBillAddRequest::setSubOrderType (QString subOrderType) {
  this->subOrderType = subOrderType;
  appParams.insert("sub_order_type", subOrderType);
}

QString EbppBillAddRequest::getTrafficLocation() const {
  return trafficLocation;
}
void EbppBillAddRequest::setTrafficLocation (QString trafficLocation) {
  this->trafficLocation = trafficLocation;
  appParams.insert("traffic_location", trafficLocation);
}

QString EbppBillAddRequest::getTrafficRegulations() const {
  return trafficRegulations;
}
void EbppBillAddRequest::setTrafficRegulations (QString trafficRegulations) {
  this->trafficRegulations = trafficRegulations;
  appParams.insert("traffic_regulations", trafficRegulations);
}



EbppBillAddResponse *EbppBillAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  EbppBillAddResponse *tmpResponse = new EbppBillAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
