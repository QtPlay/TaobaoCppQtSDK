#include <TaoApiCpp/domain/WlbItemInventory.h>
qlonglong WlbItemInventory::getItemId() const {
  return itemId;
}
void WlbItemInventory::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

qlonglong WlbItemInventory::getLockQuantity() const {
  return lockQuantity;
}
void WlbItemInventory::setLockQuantity (qlonglong lockQuantity) {
  this->lockQuantity = lockQuantity;
}

qlonglong WlbItemInventory::getQuantity() const {
  return quantity;
}
void WlbItemInventory::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QString WlbItemInventory::getStoreCode() const {
  return storeCode;
}
void WlbItemInventory::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

QString WlbItemInventory::getType() const {
  return type;
}
void WlbItemInventory::setType (QString type) {
  this->type = type;
}


void WlbItemInventory::parseResponse() {
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

}

