#include <TaoApiCpp/domain/FenxiaoSku.h>
QString FenxiaoSku::getCostPrice() const {
  return costPrice;
}
void FenxiaoSku::setCostPrice (QString costPrice) {
  this->costPrice = costPrice;
}

QString FenxiaoSku::getDealerCostPrice() const {
  return dealerCostPrice;
}
void FenxiaoSku::setDealerCostPrice (QString dealerCostPrice) {
  this->dealerCostPrice = dealerCostPrice;
}

qlonglong FenxiaoSku::getId() const {
  return id;
}
void FenxiaoSku::setId (qlonglong id) {
  this->id = id;
}

QString FenxiaoSku::getName() const {
  return name;
}
void FenxiaoSku::setName (QString name) {
  this->name = name;
}

QString FenxiaoSku::getOuterId() const {
  return outerId;
}
void FenxiaoSku::setOuterId (QString outerId) {
  this->outerId = outerId;
}

QString FenxiaoSku::getProperties() const {
  return properties;
}
void FenxiaoSku::setProperties (QString properties) {
  this->properties = properties;
}

qlonglong FenxiaoSku::getQuantity() const {
  return quantity;
}
void FenxiaoSku::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

qlonglong FenxiaoSku::getScitemId() const {
  return scitemId;
}
void FenxiaoSku::setScitemId (qlonglong scitemId) {
  this->scitemId = scitemId;
}

QString FenxiaoSku::getStandardPrice() const {
  return standardPrice;
}
void FenxiaoSku::setStandardPrice (QString standardPrice) {
  this->standardPrice = standardPrice;
}


void FenxiaoSku::parseResponse() {
  if (responseParser->hasName("cost_price")) {
  costPrice = responseParser->getStrByName("cost_price");
  }
  if (responseParser->hasName("dealer_cost_price")) {
  dealerCostPrice = responseParser->getStrByName("dealer_cost_price");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("outer_id")) {
  outerId = responseParser->getStrByName("outer_id");
  }
  if (responseParser->hasName("properties")) {
  properties = responseParser->getStrByName("properties");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("scitem_id")) {
  scitemId = responseParser->getNumByName("scitem_id");
  }
  if (responseParser->hasName("standard_price")) {
  standardPrice = responseParser->getStrByName("standard_price");
  }

}

