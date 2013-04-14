#include <TaoApiCpp/domain/InventorySum.h>
qlonglong InventorySum::getInventoryType() const {
  return inventoryType;
}
void InventorySum::setInventoryType (qlonglong inventoryType) {
  this->inventoryType = inventoryType;
}

QString InventorySum::getInventoryTypeName() const {
  return inventoryTypeName;
}
void InventorySum::setInventoryTypeName (QString inventoryTypeName) {
  this->inventoryTypeName = inventoryTypeName;
}

qlonglong InventorySum::getOccupyQuantity() const {
  return occupyQuantity;
}
void InventorySum::setOccupyQuantity (qlonglong occupyQuantity) {
  this->occupyQuantity = occupyQuantity;
}

qlonglong InventorySum::getQuantity() const {
  return quantity;
}
void InventorySum::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

qlonglong InventorySum::getReserveQuantity() const {
  return reserveQuantity;
}
void InventorySum::setReserveQuantity (qlonglong reserveQuantity) {
  this->reserveQuantity = reserveQuantity;
}

QString InventorySum::getScItemCode() const {
  return scItemCode;
}
void InventorySum::setScItemCode (QString scItemCode) {
  this->scItemCode = scItemCode;
}

qlonglong InventorySum::getScItemId() const {
  return scItemId;
}
void InventorySum::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
}

QString InventorySum::getStoreCode() const {
  return storeCode;
}
void InventorySum::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}


void InventorySum::parseResponse() {
  if (responseParser->hasName("inventory_type")) {
  inventoryType = responseParser->getNumByName("inventory_type");
  }
  if (responseParser->hasName("inventory_type_name")) {
  inventoryTypeName = responseParser->getStrByName("inventory_type_name");
  }
  if (responseParser->hasName("occupy_quantity")) {
  occupyQuantity = responseParser->getNumByName("occupy_quantity");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("reserve_quantity")) {
  reserveQuantity = responseParser->getNumByName("reserve_quantity");
  }
  if (responseParser->hasName("sc_item_code")) {
  scItemCode = responseParser->getStrByName("sc_item_code");
  }
  if (responseParser->hasName("sc_item_id")) {
  scItemId = responseParser->getNumByName("sc_item_id");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }

}

