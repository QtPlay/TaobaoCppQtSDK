#include <TaoApiCpp/domain/AddressResult.h>
QString AddressResult::getAddr() const {
  return addr;
}
void AddressResult::setAddr (QString addr) {
  this->addr = addr;
}

qlonglong AddressResult::getAreaId() const {
  return areaId;
}
void AddressResult::setAreaId (qlonglong areaId) {
  this->areaId = areaId;
}

bool AddressResult::getCancelDef() const {
  return cancelDef;
}
void AddressResult::setCancelDef (bool cancelDef) {
  this->cancelDef = cancelDef;
}

QString AddressResult::getCity() const {
  return city;
}
void AddressResult::setCity (QString city) {
  this->city = city;
}

qlonglong AddressResult::getContactId() const {
  return contactId;
}
void AddressResult::setContactId (qlonglong contactId) {
  this->contactId = contactId;
}

QString AddressResult::getContactName() const {
  return contactName;
}
void AddressResult::setContactName (QString contactName) {
  this->contactName = contactName;
}

QString AddressResult::getCountry() const {
  return country;
}
void AddressResult::setCountry (QString country) {
  this->country = country;
}

bool AddressResult::getGetDef() const {
  return getDef;
}
void AddressResult::setGetDef (bool getDef) {
  this->getDef = getDef;
}

QString AddressResult::getMemo() const {
  return memo;
}
void AddressResult::setMemo (QString memo) {
  this->memo = memo;
}

QString AddressResult::getMobilePhone() const {
  return mobilePhone;
}
void AddressResult::setMobilePhone (QString mobilePhone) {
  this->mobilePhone = mobilePhone;
}

QDateTime AddressResult::getModifyDate() const {
  return modifyDate;
}
void AddressResult::setModifyDate (QDateTime modifyDate) {
  this->modifyDate = modifyDate;
}

QString AddressResult::getPhone() const {
  return phone;
}
void AddressResult::setPhone (QString phone) {
  this->phone = phone;
}

QString AddressResult::getProvince() const {
  return province;
}
void AddressResult::setProvince (QString province) {
  this->province = province;
}

QString AddressResult::getSellerCompany() const {
  return sellerCompany;
}
void AddressResult::setSellerCompany (QString sellerCompany) {
  this->sellerCompany = sellerCompany;
}

bool AddressResult::getSendDef() const {
  return sendDef;
}
void AddressResult::setSendDef (bool sendDef) {
  this->sendDef = sendDef;
}

QString AddressResult::getZipCode() const {
  return zipCode;
}
void AddressResult::setZipCode (QString zipCode) {
  this->zipCode = zipCode;
}


void AddressResult::parseResponse() {
  if (responseParser->hasName("addr")) {
  addr = responseParser->getStrByName("addr");
  }
  if (responseParser->hasName("area_id")) {
  areaId = responseParser->getNumByName("area_id");
  }
  if (responseParser->hasName("cancel_def")) {
  cancelDef = responseParser->getBoolByName("cancel_def");
  }
  if (responseParser->hasName("city")) {
  city = responseParser->getStrByName("city");
  }
  if (responseParser->hasName("contact_id")) {
  contactId = responseParser->getNumByName("contact_id");
  }
  if (responseParser->hasName("contact_name")) {
  contactName = responseParser->getStrByName("contact_name");
  }
  if (responseParser->hasName("country")) {
  country = responseParser->getStrByName("country");
  }
  if (responseParser->hasName("get_def")) {
  getDef = responseParser->getBoolByName("get_def");
  }
  if (responseParser->hasName("memo")) {
  memo = responseParser->getStrByName("memo");
  }
  if (responseParser->hasName("mobile_phone")) {
  mobilePhone = responseParser->getStrByName("mobile_phone");
  }
  if (responseParser->hasName("modify_date")) {
  modifyDate = responseParser->getDateByName("modify_date");
  }
  if (responseParser->hasName("phone")) {
  phone = responseParser->getStrByName("phone");
  }
  if (responseParser->hasName("province")) {
  province = responseParser->getStrByName("province");
  }
  if (responseParser->hasName("seller_company")) {
  sellerCompany = responseParser->getStrByName("seller_company");
  }
  if (responseParser->hasName("send_def")) {
  sendDef = responseParser->getBoolByName("send_def");
  }
  if (responseParser->hasName("zip_code")) {
  zipCode = responseParser->getStrByName("zip_code");
  }

}

