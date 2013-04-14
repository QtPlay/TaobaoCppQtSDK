#include <TaoApiCpp/domain/WlbInventory.h>
qlonglong WlbInventory::getItemId() const {
  return itemId;
}
void WlbInventory::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

qlonglong WlbInventory::getLockQuantity() const {
  return lockQuantity;
}
void WlbInventory::setLockQuantity (qlonglong lockQuantity) {
  this->lockQuantity = lockQuantity;
}

qlonglong WlbInventory::getQuantity() const {
  return quantity;
}
void WlbInventory::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QString WlbInventory::getStoreCode() const {
  return storeCode;
}
void WlbInventory::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

QString WlbInventory::getType() const {
  return type;
}
void WlbInventory::setType (QString type) {
  this->type = type;
}

qlonglong WlbInventory::getUserId() const {
  return userId;
}
void WlbInventory::setUserId (qlonglong userId) {
  this->userId = userId;
}


void WlbInventory::parseResponse() {
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("lock_quantity")) {
  lockQuantity = responseParser->getNumByName("lock_quantity");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

