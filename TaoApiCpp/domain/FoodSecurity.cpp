#include <TaoApiCpp/domain/FoodSecurity.h>
QString FoodSecurity::getContact() const {
  return contact;
}
void FoodSecurity::setContact (QString contact) {
  this->contact = contact;
}

QString FoodSecurity::getDesignCode() const {
  return designCode;
}
void FoodSecurity::setDesignCode (QString designCode) {
  this->designCode = designCode;
}

QString FoodSecurity::getFactory() const {
  return factory;
}
void FoodSecurity::setFactory (QString factory) {
  this->factory = factory;
}

QString FoodSecurity::getFactorySite() const {
  return factorySite;
}
void FoodSecurity::setFactorySite (QString factorySite) {
  this->factorySite = factorySite;
}

QString FoodSecurity::getFoodAdditive() const {
  return foodAdditive;
}
void FoodSecurity::setFoodAdditive (QString foodAdditive) {
  this->foodAdditive = foodAdditive;
}

QString FoodSecurity::getMix() const {
  return mix;
}
void FoodSecurity::setMix (QString mix) {
  this->mix = mix;
}

QString FoodSecurity::getPeriod() const {
  return period;
}
void FoodSecurity::setPeriod (QString period) {
  this->period = period;
}

QString FoodSecurity::getPlanStorage() const {
  return planStorage;
}
void FoodSecurity::setPlanStorage (QString planStorage) {
  this->planStorage = planStorage;
}

QString FoodSecurity::getPrdLicenseNo() const {
  return prdLicenseNo;
}
void FoodSecurity::setPrdLicenseNo (QString prdLicenseNo) {
  this->prdLicenseNo = prdLicenseNo;
}

QString FoodSecurity::getProductDateEnd() const {
  return productDateEnd;
}
void FoodSecurity::setProductDateEnd (QString productDateEnd) {
  this->productDateEnd = productDateEnd;
}

QString FoodSecurity::getProductDateStart() const {
  return productDateStart;
}
void FoodSecurity::setProductDateStart (QString productDateStart) {
  this->productDateStart = productDateStart;
}

QString FoodSecurity::getStockDateEnd() const {
  return stockDateEnd;
}
void FoodSecurity::setStockDateEnd (QString stockDateEnd) {
  this->stockDateEnd = stockDateEnd;
}

QString FoodSecurity::getStockDateStart() const {
  return stockDateStart;
}
void FoodSecurity::setStockDateStart (QString stockDateStart) {
  this->stockDateStart = stockDateStart;
}

QString FoodSecurity::getSupplier() const {
  return supplier;
}
void FoodSecurity::setSupplier (QString supplier) {
  this->supplier = supplier;
}


void FoodSecurity::parseResponse() {
  if (responseParser->hasName("contact")) {
  contact = responseParser->getStrByName("contact");
  }
  if (responseParser->hasName("design_code")) {
  designCode = responseParser->getStrByName("design_code");
  }
  if (responseParser->hasName("factory")) {
  factory = responseParser->getStrByName("factory");
  }
  if (responseParser->hasName("factory_site")) {
  factorySite = responseParser->getStrByName("factory_site");
  }
  if (responseParser->hasName("food_additive")) {
  foodAdditive = responseParser->getStrByName("food_additive");
  }
  if (responseParser->hasName("mix")) {
  mix = responseParser->getStrByName("mix");
  }
  if (responseParser->hasName("period")) {
  period = responseParser->getStrByName("period");
  }
  if (responseParser->hasName("plan_storage")) {
  planStorage = responseParser->getStrByName("plan_storage");
  }
  if (responseParser->hasName("prd_license_no")) {
  prdLicenseNo = responseParser->getStrByName("prd_license_no");
  }
  if (responseParser->hasName("product_date_end")) {
  productDateEnd = responseParser->getStrByName("product_date_end");
  }
  if (responseParser->hasName("product_date_start")) {
  productDateStart = responseParser->getStrByName("product_date_start");
  }
  if (responseParser->hasName("stock_date_end")) {
  stockDateEnd = responseParser->getStrByName("stock_date_end");
  }
  if (responseParser->hasName("stock_date_start")) {
  stockDateStart = responseParser->getStrByName("stock_date_start");
  }
  if (responseParser->hasName("supplier")) {
  supplier = responseParser->getStrByName("supplier");
  }

}

