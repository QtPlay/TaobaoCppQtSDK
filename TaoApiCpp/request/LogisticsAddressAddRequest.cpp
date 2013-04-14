#include <TaoApiCpp/request/LogisticsAddressAddRequest.h>

QString LogisticsAddressAddRequest::getApiMethodName() const {
  return "taobao.logistics.address.add";
}

QString LogisticsAddressAddRequest::getAddr() const {
  return addr;
}
void LogisticsAddressAddRequest::setAddr (QString addr) {
  this->addr = addr;
  appParams.insert("addr", addr);
}

bool LogisticsAddressAddRequest::getCancelDef() const {
  return cancelDef;
}
void LogisticsAddressAddRequest::setCancelDef (bool cancelDef) {
  this->cancelDef = cancelDef;
  appParams.insert("cancel_def", cancelDef? "true": "false");
}

QString LogisticsAddressAddRequest::getCity() const {
  return city;
}
void LogisticsAddressAddRequest::setCity (QString city) {
  this->city = city;
  appParams.insert("city", city);
}

QString LogisticsAddressAddRequest::getContactName() const {
  return contactName;
}
void LogisticsAddressAddRequest::setContactName (QString contactName) {
  this->contactName = contactName;
  appParams.insert("contact_name", contactName);
}

QString LogisticsAddressAddRequest::getCountry() const {
  return country;
}
void LogisticsAddressAddRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

bool LogisticsAddressAddRequest::getGetDef() const {
  return getDef;
}
void LogisticsAddressAddRequest::setGetDef (bool getDef) {
  this->getDef = getDef;
  appParams.insert("get_def", getDef? "true": "false");
}

QString LogisticsAddressAddRequest::getMemo() const {
  return memo;
}
void LogisticsAddressAddRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString LogisticsAddressAddRequest::getMobilePhone() const {
  return mobilePhone;
}
void LogisticsAddressAddRequest::setMobilePhone (QString mobilePhone) {
  this->mobilePhone = mobilePhone;
  appParams.insert("mobile_phone", mobilePhone);
}

QString LogisticsAddressAddRequest::getPhone() const {
  return phone;
}
void LogisticsAddressAddRequest::setPhone (QString phone) {
  this->phone = phone;
  appParams.insert("phone", phone);
}

QString LogisticsAddressAddRequest::getProvince() const {
  return province;
}
void LogisticsAddressAddRequest::setProvince (QString province) {
  this->province = province;
  appParams.insert("province", province);
}

QString LogisticsAddressAddRequest::getSellerCompany() const {
  return sellerCompany;
}
void LogisticsAddressAddRequest::setSellerCompany (QString sellerCompany) {
  this->sellerCompany = sellerCompany;
  appParams.insert("seller_company", sellerCompany);
}

QString LogisticsAddressAddRequest::getZipCode() const {
  return zipCode;
}
void LogisticsAddressAddRequest::setZipCode (QString zipCode) {
  this->zipCode = zipCode;
  appParams.insert("zip_code", zipCode);
}



LogisticsAddressAddResponse *LogisticsAddressAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsAddressAddResponse *tmpResponse = new LogisticsAddressAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
