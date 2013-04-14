#include <TaoApiCpp/domain/Store.h>
QString Store::getAddress() const {
  return address;
}
void Store::setAddress (QString address) {
  this->address = address;
}

QString Store::getAddressAreaName() const {
  return addressAreaName;
}
void Store::setAddressAreaName (QString addressAreaName) {
  this->addressAreaName = addressAreaName;
}

QString Store::getAliasName() const {
  return aliasName;
}
void Store::setAliasName (QString aliasName) {
  this->aliasName = aliasName;
}

QString Store::getContact() const {
  return contact;
}
void Store::setContact (QString contact) {
  this->contact = contact;
}

QString Store::getPhone() const {
  return phone;
}
void Store::setPhone (QString phone) {
  this->phone = phone;
}

QString Store::getPostCode() const {
  return postCode;
}
void Store::setPostCode (QString postCode) {
  this->postCode = postCode;
}

QString Store::getStoreCode() const {
  return storeCode;
}
void Store::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

QString Store::getStoreName() const {
  return storeName;
}
void Store::setStoreName (QString storeName) {
  this->storeName = storeName;
}

QString Store::getStoreType() const {
  return storeType;
}
void Store::setStoreType (QString storeType) {
  this->storeType = storeType;
}


void Store::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("address_area_name")) {
  addressAreaName = responseParser->getStrByName("address_area_name");
  }
  if (responseParser->hasName("alias_name")) {
  aliasName = responseParser->getStrByName("alias_name");
  }
  if (responseParser->hasName("contact")) {
  contact = responseParser->getStrByName("contact");
  }
  if (responseParser->hasName("phone")) {
  phone = responseParser->getStrByName("phone");
  }
  if (responseParser->hasName("post_code")) {
  postCode = responseParser->getStrByName("post_code");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("store_name")) {
  storeName = responseParser->getStrByName("store_name");
  }
  if (responseParser->hasName("store_type")) {
  storeType = responseParser->getStrByName("store_type");
  }

}

