#include <TaoApiCpp/request/LogisticsAddressModifyRequest.h>

QString LogisticsAddressModifyRequest::getApiMethodName() const {
  return "taobao.logistics.address.modify";
}

QString LogisticsAddressModifyRequest::getAddr() const {
  return addr;
}
void LogisticsAddressModifyRequest::setAddr (QString addr) {
  this->addr = addr;
  appParams.insert("addr", addr);
}

bool LogisticsAddressModifyRequest::getCancelDef() const {
  return cancelDef;
}
void LogisticsAddressModifyRequest::setCancelDef (bool cancelDef) {
  this->cancelDef = cancelDef;
  appParams.insert("cancel_def", cancelDef? "true": "false");
}

QString LogisticsAddressModifyRequest::getCity() const {
  return city;
}
void LogisticsAddressModifyRequest::setCity (QString city) {
  this->city = city;
  appParams.insert("city", city);
}

qlonglong LogisticsAddressModifyRequest::getContactId() const {
  return contactId;
}
void LogisticsAddressModifyRequest::setContactId (qlonglong contactId) {
  this->contactId = contactId;
  appParams.insert("contact_id", QString::number(contactId));
}

QString LogisticsAddressModifyRequest::getContactName() const {
  return contactName;
}
void LogisticsAddressModifyRequest::setContactName (QString contactName) {
  this->contactName = contactName;
  appParams.insert("contact_name", contactName);
}

QString LogisticsAddressModifyRequest::getCountry() const {
  return country;
}
void LogisticsAddressModifyRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

bool LogisticsAddressModifyRequest::getGetDef() const {
  return getDef;
}
void LogisticsAddressModifyRequest::setGetDef (bool getDef) {
  this->getDef = getDef;
  appParams.insert("get_def", getDef? "true": "false");
}

QString LogisticsAddressModifyRequest::getMemo() const {
  return memo;
}
void LogisticsAddressModifyRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString LogisticsAddressModifyRequest::getMobilePhone() const {
  return mobilePhone;
}
void LogisticsAddressModifyRequest::setMobilePhone (QString mobilePhone) {
  this->mobilePhone = mobilePhone;
  appParams.insert("mobile_phone", mobilePhone);
}

QString LogisticsAddressModifyRequest::getPhone() const {
  return phone;
}
void LogisticsAddressModifyRequest::setPhone (QString phone) {
  this->phone = phone;
  appParams.insert("phone", phone);
}

QString LogisticsAddressModifyRequest::getProvince() const {
  return province;
}
void LogisticsAddressModifyRequest::setProvince (QString province) {
  this->province = province;
  appParams.insert("province", province);
}

QString LogisticsAddressModifyRequest::getSellerCompany() const {
  return sellerCompany;
}
void LogisticsAddressModifyRequest::setSellerCompany (QString sellerCompany) {
  this->sellerCompany = sellerCompany;
  appParams.insert("seller_company", sellerCompany);
}

QString LogisticsAddressModifyRequest::getZipCode() const {
  return zipCode;
}
void LogisticsAddressModifyRequest::setZipCode (QString zipCode) {
  this->zipCode = zipCode;
  appParams.insert("zip_code", zipCode);
}



LogisticsAddressModifyResponse *LogisticsAddressModifyRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsAddressModifyResponse *tmpResponse = new LogisticsAddressModifyResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
