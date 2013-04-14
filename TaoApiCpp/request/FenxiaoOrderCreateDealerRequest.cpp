#include <TaoApiCpp/request/FenxiaoOrderCreateDealerRequest.h>

QString FenxiaoOrderCreateDealerRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.create.dealer";
}

QString FenxiaoOrderCreateDealerRequest::getAddr() const {
  return addr;
}
void FenxiaoOrderCreateDealerRequest::setAddr (QString addr) {
  this->addr = addr;
  appParams.insert("addr", addr);
}

QString FenxiaoOrderCreateDealerRequest::getBuyerName() const {
  return buyerName;
}
void FenxiaoOrderCreateDealerRequest::setBuyerName (QString buyerName) {
  this->buyerName = buyerName;
  appParams.insert("buyer_name", buyerName);
}

QString FenxiaoOrderCreateDealerRequest::getCity() const {
  return city;
}
void FenxiaoOrderCreateDealerRequest::setCity (QString city) {
  this->city = city;
  appParams.insert("city", city);
}

QString FenxiaoOrderCreateDealerRequest::getCountry() const {
  return country;
}
void FenxiaoOrderCreateDealerRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

qlonglong FenxiaoOrderCreateDealerRequest::getLogisticFee() const {
  return logisticFee;
}
void FenxiaoOrderCreateDealerRequest::setLogisticFee (qlonglong logisticFee) {
  this->logisticFee = logisticFee;
  appParams.insert("logistic_fee", QString::number(logisticFee));
}

QString FenxiaoOrderCreateDealerRequest::getLogisticType() const {
  return logisticType;
}
void FenxiaoOrderCreateDealerRequest::setLogisticType (QString logisticType) {
  this->logisticType = logisticType;
  appParams.insert("logistic_type", logisticType);
}

QString FenxiaoOrderCreateDealerRequest::getMessage() const {
  return message;
}
void FenxiaoOrderCreateDealerRequest::setMessage (QString message) {
  this->message = message;
  appParams.insert("message", message);
}

QString FenxiaoOrderCreateDealerRequest::getMobilePhone() const {
  return mobilePhone;
}
void FenxiaoOrderCreateDealerRequest::setMobilePhone (QString mobilePhone) {
  this->mobilePhone = mobilePhone;
  appParams.insert("mobile_phone", mobilePhone);
}

qlonglong FenxiaoOrderCreateDealerRequest::getOuterId() const {
  return outerId;
}
void FenxiaoOrderCreateDealerRequest::setOuterId (qlonglong outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", QString::number(outerId));
}

QString FenxiaoOrderCreateDealerRequest::getPayType() const {
  return payType;
}
void FenxiaoOrderCreateDealerRequest::setPayType (QString payType) {
  this->payType = payType;
  appParams.insert("pay_type", payType);
}

QString FenxiaoOrderCreateDealerRequest::getPhone() const {
  return phone;
}
void FenxiaoOrderCreateDealerRequest::setPhone (QString phone) {
  this->phone = phone;
  appParams.insert("phone", phone);
}

QString FenxiaoOrderCreateDealerRequest::getProvince() const {
  return province;
}
void FenxiaoOrderCreateDealerRequest::setProvince (QString province) {
  this->province = province;
  appParams.insert("province", province);
}

QString FenxiaoOrderCreateDealerRequest::getSubOrderDetail() const {
  return subOrderDetail;
}
void FenxiaoOrderCreateDealerRequest::setSubOrderDetail (QString subOrderDetail) {
  this->subOrderDetail = subOrderDetail;
  appParams.insert("sub_order_detail", subOrderDetail);
}

QString FenxiaoOrderCreateDealerRequest::getZipCode() const {
  return zipCode;
}
void FenxiaoOrderCreateDealerRequest::setZipCode (QString zipCode) {
  this->zipCode = zipCode;
  appParams.insert("zip_code", zipCode);
}



FenxiaoOrderCreateDealerResponse *FenxiaoOrderCreateDealerRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderCreateDealerResponse *tmpResponse = new FenxiaoOrderCreateDealerResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
