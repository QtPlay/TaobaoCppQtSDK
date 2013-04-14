#include <TaoApiCpp/request/InventoryStoreManageRequest.h>

QString InventoryStoreManageRequest::getApiMethodName() const {
  return "taobao.inventory.store.manage";
}

QString InventoryStoreManageRequest::getAddress() const {
  return address;
}
void InventoryStoreManageRequest::setAddress (QString address) {
  this->address = address;
  appParams.insert("address", address);
}

QString InventoryStoreManageRequest::getAddressAreaName() const {
  return addressAreaName;
}
void InventoryStoreManageRequest::setAddressAreaName (QString addressAreaName) {
  this->addressAreaName = addressAreaName;
  appParams.insert("address_area_name", addressAreaName);
}

QString InventoryStoreManageRequest::getAliasName() const {
  return aliasName;
}
void InventoryStoreManageRequest::setAliasName (QString aliasName) {
  this->aliasName = aliasName;
  appParams.insert("alias_name", aliasName);
}

QString InventoryStoreManageRequest::getContact() const {
  return contact;
}
void InventoryStoreManageRequest::setContact (QString contact) {
  this->contact = contact;
  appParams.insert("contact", contact);
}

QString InventoryStoreManageRequest::getOperateType() const {
  return operateType;
}
void InventoryStoreManageRequest::setOperateType (QString operateType) {
  this->operateType = operateType;
  appParams.insert("operate_type", operateType);
}

QString InventoryStoreManageRequest::getPhone() const {
  return phone;
}
void InventoryStoreManageRequest::setPhone (QString phone) {
  this->phone = phone;
  appParams.insert("phone", phone);
}

qlonglong InventoryStoreManageRequest::getPostcode() const {
  return postcode;
}
void InventoryStoreManageRequest::setPostcode (qlonglong postcode) {
  this->postcode = postcode;
  appParams.insert("postcode", QString::number(postcode));
}

QString InventoryStoreManageRequest::getStoreCode() const {
  return storeCode;
}
void InventoryStoreManageRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}

QString InventoryStoreManageRequest::getStoreName() const {
  return storeName;
}
void InventoryStoreManageRequest::setStoreName (QString storeName) {
  this->storeName = storeName;
  appParams.insert("store_name", storeName);
}

QString InventoryStoreManageRequest::getStoreType() const {
  return storeType;
}
void InventoryStoreManageRequest::setStoreType (QString storeType) {
  this->storeType = storeType;
  appParams.insert("store_type", storeType);
}



InventoryStoreManageResponse *InventoryStoreManageRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryStoreManageResponse *tmpResponse = new InventoryStoreManageResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
