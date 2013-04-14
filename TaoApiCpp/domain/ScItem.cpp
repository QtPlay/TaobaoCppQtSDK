#include <TaoApiCpp/domain/ScItem.h>
QString ScItem::getBarCode() const {
  return barCode;
}
void ScItem::setBarCode (QString barCode) {
  this->barCode = barCode;
}

qlonglong ScItem::getBrandId() const {
  return brandId;
}
void ScItem::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

QString ScItem::getBrandName() const {
  return brandName;
}
void ScItem::setBrandName (QString brandName) {
  this->brandName = brandName;
}

qlonglong ScItem::getHeight() const {
  return height;
}
void ScItem::setHeight (qlonglong height) {
  this->height = height;
}

qlonglong ScItem::getIsAreaSale() const {
  return isAreaSale;
}
void ScItem::setIsAreaSale (qlonglong isAreaSale) {
  this->isAreaSale = isAreaSale;
}

bool ScItem::getIsCostly() const {
  return isCostly;
}
void ScItem::setIsCostly (bool isCostly) {
  this->isCostly = isCostly;
}

bool ScItem::getIsDangerous() const {
  return isDangerous;
}
void ScItem::setIsDangerous (bool isDangerous) {
  this->isDangerous = isDangerous;
}

bool ScItem::getIsFriable() const {
  return isFriable;
}
void ScItem::setIsFriable (bool isFriable) {
  this->isFriable = isFriable;
}

bool ScItem::getIsWarranty() const {
  return isWarranty;
}
void ScItem::setIsWarranty (bool isWarranty) {
  this->isWarranty = isWarranty;
}

qlonglong ScItem::getItemId() const {
  return itemId;
}
void ScItem::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString ScItem::getItemName() const {
  return itemName;
}
void ScItem::setItemName (QString itemName) {
  this->itemName = itemName;
}

qlonglong ScItem::getItemType() const {
  return itemType;
}
void ScItem::setItemType (qlonglong itemType) {
  this->itemType = itemType;
}

qlonglong ScItem::getLength() const {
  return length;
}
void ScItem::setLength (qlonglong length) {
  this->length = length;
}

QString ScItem::getMatterStatus() const {
  return matterStatus;
}
void ScItem::setMatterStatus (QString matterStatus) {
  this->matterStatus = matterStatus;
}

QString ScItem::getOuterCode() const {
  return outerCode;
}
void ScItem::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
}

qlonglong ScItem::getPrice() const {
  return price;
}
void ScItem::setPrice (qlonglong price) {
  this->price = price;
}

QString ScItem::getProperties() const {
  return properties;
}
void ScItem::setProperties (QString properties) {
  this->properties = properties;
}

QString ScItem::getRemark() const {
  return remark;
}
void ScItem::setRemark (QString remark) {
  this->remark = remark;
}

qlonglong ScItem::getVolume() const {
  return volume;
}
void ScItem::setVolume (qlonglong volume) {
  this->volume = volume;
}

qlonglong ScItem::getWeight() const {
  return weight;
}
void ScItem::setWeight (qlonglong weight) {
  this->weight = weight;
}

qlonglong ScItem::getWidth() const {
  return width;
}
void ScItem::setWidth (qlonglong width) {
  this->width = width;
}

QString ScItem::getWmsCode() const {
  return wmsCode;
}
void ScItem::setWmsCode (QString wmsCode) {
  this->wmsCode = wmsCode;
}


void ScItem::parseResponse() {
  if (responseParser->hasName("bar_code")) {
  barCode = responseParser->getStrByName("bar_code");
  }
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("brand_name")) {
  brandName = responseParser->getStrByName("brand_name");
  }
  if (responseParser->hasName("height")) {
  height = responseParser->getNumByName("height");
  }
  if (responseParser->hasName("is_area_sale")) {
  isAreaSale = responseParser->getNumByName("is_area_sale");
  }
  if (responseParser->hasName("is_costly")) {
  isCostly = responseParser->getBoolByName("is_costly");
  }
  if (responseParser->hasName("is_dangerous")) {
  isDangerous = responseParser->getBoolByName("is_dangerous");
  }
  if (responseParser->hasName("is_friable")) {
  isFriable = responseParser->getBoolByName("is_friable");
  }
  if (responseParser->hasName("is_warranty")) {
  isWarranty = responseParser->getBoolByName("is_warranty");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("item_name")) {
  itemName = responseParser->getStrByName("item_name");
  }
  if (responseParser->hasName("item_type")) {
  itemType = responseParser->getNumByName("item_type");
  }
  if (responseParser->hasName("length")) {
  length = responseParser->getNumByName("length");
  }
  if (responseParser->hasName("matter_status")) {
  matterStatus = responseParser->getStrByName("matter_status");
  }
  if (responseParser->hasName("outer_code")) {
  outerCode = responseParser->getStrByName("outer_code");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getNumByName("price");
  }
  if (responseParser->hasName("properties")) {
  properties = responseParser->getStrByName("properties");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("volume")) {
  volume = responseParser->getNumByName("volume");
  }
  if (responseParser->hasName("weight")) {
  weight = responseParser->getNumByName("weight");
  }
  if (responseParser->hasName("width")) {
  width = responseParser->getNumByName("width");
  }
  if (responseParser->hasName("wms_code")) {
  wmsCode = responseParser->getStrByName("wms_code");
  }

}

