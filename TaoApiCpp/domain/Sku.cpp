#include <TaoApiCpp/domain/Sku.h>
QString Sku::getCreated() const {
  return created;
}
void Sku::setCreated (QString created) {
  this->created = created;
}

QString Sku::getIid() const {
  return iid;
}
void Sku::setIid (QString iid) {
  this->iid = iid;
}

QString Sku::getModified() const {
  return modified;
}
void Sku::setModified (QString modified) {
  this->modified = modified;
}

qlonglong Sku::getNumIid() const {
  return numIid;
}
void Sku::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString Sku::getOuterId() const {
  return outerId;
}
void Sku::setOuterId (QString outerId) {
  this->outerId = outerId;
}

QString Sku::getPrice() const {
  return price;
}
void Sku::setPrice (QString price) {
  this->price = price;
}

QString Sku::getProperties() const {
  return properties;
}
void Sku::setProperties (QString properties) {
  this->properties = properties;
}

QString Sku::getPropertiesName() const {
  return propertiesName;
}
void Sku::setPropertiesName (QString propertiesName) {
  this->propertiesName = propertiesName;
}

qlonglong Sku::getQuantity() const {
  return quantity;
}
void Sku::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QString Sku::getSkuDeliveryTime() const {
  return skuDeliveryTime;
}
void Sku::setSkuDeliveryTime (QString skuDeliveryTime) {
  this->skuDeliveryTime = skuDeliveryTime;
}

qlonglong Sku::getSkuId() const {
  return skuId;
}
void Sku::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}

qlonglong Sku::getSkuSpecId() const {
  return skuSpecId;
}
void Sku::setSkuSpecId (qlonglong skuSpecId) {
  this->skuSpecId = skuSpecId;
}

QString Sku::getStatus() const {
  return status;
}
void Sku::setStatus (QString status) {
  this->status = status;
}

qlonglong Sku::getWithHoldQuantity() const {
  return withHoldQuantity;
}
void Sku::setWithHoldQuantity (qlonglong withHoldQuantity) {
  this->withHoldQuantity = withHoldQuantity;
}


void Sku::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getStrByName("created");
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getStrByName("iid");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getStrByName("modified");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("outer_id")) {
  outerId = responseParser->getStrByName("outer_id");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("properties")) {
  properties = responseParser->getStrByName("properties");
  }
  if (responseParser->hasName("properties_name")) {
  propertiesName = responseParser->getStrByName("properties_name");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("sku_delivery_time")) {
  skuDeliveryTime = responseParser->getStrByName("sku_delivery_time");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }
  if (responseParser->hasName("sku_spec_id")) {
  skuSpecId = responseParser->getNumByName("sku_spec_id");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("with_hold_quantity")) {
  withHoldQuantity = responseParser->getNumByName("with_hold_quantity");
  }

}

