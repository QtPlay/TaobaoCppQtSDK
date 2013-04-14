#include <TaoApiCpp/domain/ProductCat.h>
QString ProductCat::getCostPercentAgent() const {
  return costPercentAgent;
}
void ProductCat::setCostPercentAgent (QString costPercentAgent) {
  this->costPercentAgent = costPercentAgent;
}

QString ProductCat::getCostPercentDealer() const {
  return costPercentDealer;
}
void ProductCat::setCostPercentDealer (QString costPercentDealer) {
  this->costPercentDealer = costPercentDealer;
}

qlonglong ProductCat::getId() const {
  return id;
}
void ProductCat::setId (qlonglong id) {
  this->id = id;
}

QString ProductCat::getName() const {
  return name;
}
void ProductCat::setName (QString name) {
  this->name = name;
}

qlonglong ProductCat::getProductNum() const {
  return productNum;
}
void ProductCat::setProductNum (qlonglong productNum) {
  this->productNum = productNum;
}

QString ProductCat::getRetailHighPercent() const {
  return retailHighPercent;
}
void ProductCat::setRetailHighPercent (QString retailHighPercent) {
  this->retailHighPercent = retailHighPercent;
}

QString ProductCat::getRetailLowPercent() const {
  return retailLowPercent;
}
void ProductCat::setRetailLowPercent (QString retailLowPercent) {
  this->retailLowPercent = retailLowPercent;
}


void ProductCat::parseResponse() {
  if (responseParser->hasName("cost_percent_agent")) {
  costPercentAgent = responseParser->getStrByName("cost_percent_agent");
  }
  if (responseParser->hasName("cost_percent_dealer")) {
  costPercentDealer = responseParser->getStrByName("cost_percent_dealer");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("product_num")) {
  productNum = responseParser->getNumByName("product_num");
  }
  if (responseParser->hasName("retail_high_percent")) {
  retailHighPercent = responseParser->getStrByName("retail_high_percent");
  }
  if (responseParser->hasName("retail_low_percent")) {
  retailLowPercent = responseParser->getStrByName("retail_low_percent");
  }

}

