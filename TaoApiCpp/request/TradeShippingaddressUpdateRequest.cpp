#include <TaoApiCpp/request/TradeShippingaddressUpdateRequest.h>

QString TradeShippingaddressUpdateRequest::getApiMethodName() const {
  return "taobao.trade.shippingaddress.update";
}

QString TradeShippingaddressUpdateRequest::getReceiverAddress() const {
  return receiverAddress;
}
void TradeShippingaddressUpdateRequest::setReceiverAddress (QString receiverAddress) {
  this->receiverAddress = receiverAddress;
  appParams.insert("receiver_address", receiverAddress);
}

QString TradeShippingaddressUpdateRequest::getReceiverCity() const {
  return receiverCity;
}
void TradeShippingaddressUpdateRequest::setReceiverCity (QString receiverCity) {
  this->receiverCity = receiverCity;
  appParams.insert("receiver_city", receiverCity);
}

QString TradeShippingaddressUpdateRequest::getReceiverDistrict() const {
  return receiverDistrict;
}
void TradeShippingaddressUpdateRequest::setReceiverDistrict (QString receiverDistrict) {
  this->receiverDistrict = receiverDistrict;
  appParams.insert("receiver_district", receiverDistrict);
}

QString TradeShippingaddressUpdateRequest::getReceiverMobile() const {
  return receiverMobile;
}
void TradeShippingaddressUpdateRequest::setReceiverMobile (QString receiverMobile) {
  this->receiverMobile = receiverMobile;
  appParams.insert("receiver_mobile", receiverMobile);
}

QString TradeShippingaddressUpdateRequest::getReceiverName() const {
  return receiverName;
}
void TradeShippingaddressUpdateRequest::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
  appParams.insert("receiver_name", receiverName);
}

QString TradeShippingaddressUpdateRequest::getReceiverPhone() const {
  return receiverPhone;
}
void TradeShippingaddressUpdateRequest::setReceiverPhone (QString receiverPhone) {
  this->receiverPhone = receiverPhone;
  appParams.insert("receiver_phone", receiverPhone);
}

QString TradeShippingaddressUpdateRequest::getReceiverState() const {
  return receiverState;
}
void TradeShippingaddressUpdateRequest::setReceiverState (QString receiverState) {
  this->receiverState = receiverState;
  appParams.insert("receiver_state", receiverState);
}

QString TradeShippingaddressUpdateRequest::getReceiverZip() const {
  return receiverZip;
}
void TradeShippingaddressUpdateRequest::setReceiverZip (QString receiverZip) {
  this->receiverZip = receiverZip;
  appParams.insert("receiver_zip", receiverZip);
}

qlonglong TradeShippingaddressUpdateRequest::getTid() const {
  return tid;
}
void TradeShippingaddressUpdateRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeShippingaddressUpdateResponse *TradeShippingaddressUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeShippingaddressUpdateResponse *tmpResponse = new TradeShippingaddressUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
