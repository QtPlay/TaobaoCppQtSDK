#include <TaoApiCpp/domain/CatBrandSaleProp.h>
qlonglong CatBrandSaleProp::getBrandId() const {
  return brandId;
}
void CatBrandSaleProp::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

qlonglong CatBrandSaleProp::getCatId() const {
  return catId;
}
void CatBrandSaleProp::setCatId (qlonglong catId) {
  this->catId = catId;
}

qlonglong CatBrandSaleProp::getDefMarketPropValue() const {
  return defMarketPropValue;
}
void CatBrandSaleProp::setDefMarketPropValue (qlonglong defMarketPropValue) {
  this->defMarketPropValue = defMarketPropValue;
}

bool CatBrandSaleProp::getIsNotSpec() const {
  return isNotSpec;
}
void CatBrandSaleProp::setIsNotSpec (bool isNotSpec) {
  this->isNotSpec = isNotSpec;
}

qlonglong CatBrandSaleProp::getPropertyId() const {
  return propertyId;
}
void CatBrandSaleProp::setPropertyId (qlonglong propertyId) {
  this->propertyId = propertyId;
}


void CatBrandSaleProp::parseResponse() {
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("cat_id")) {
  catId = responseParser->getNumByName("cat_id");
  }
  if (responseParser->hasName("def_market_prop_value")) {
  defMarketPropValue = responseParser->getNumByName("def_market_prop_value");
  }
  if (responseParser->hasName("is_not_spec")) {
  isNotSpec = responseParser->getBoolByName("is_not_spec");
  }
  if (responseParser->hasName("property_id")) {
  propertyId = responseParser->getNumByName("property_id");
  }

}

