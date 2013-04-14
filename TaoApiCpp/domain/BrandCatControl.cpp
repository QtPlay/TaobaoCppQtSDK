#include <TaoApiCpp/domain/BrandCatControl.h>
qlonglong BrandCatControl::getBrandId() const {
  return brandId;
}
void BrandCatControl::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

QString BrandCatControl::getBrandName() const {
  return brandName;
}
void BrandCatControl::setBrandName (QString brandName) {
  this->brandName = brandName;
}

qlonglong BrandCatControl::getCatId() const {
  return catId;
}
void BrandCatControl::setCatId (qlonglong catId) {
  this->catId = catId;
}

QString BrandCatControl::getCatName() const {
  return catName;
}
void BrandCatControl::setCatName (QString catName) {
  this->catName = catName;
}

QString BrandCatControl::getCertifiedData() const {
  return certifiedData;
}
void BrandCatControl::setCertifiedData (QString certifiedData) {
  this->certifiedData = certifiedData;
}


void BrandCatControl::parseResponse() {
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("brand_name")) {
  brandName = responseParser->getStrByName("brand_name");
  }
  if (responseParser->hasName("cat_id")) {
  catId = responseParser->getNumByName("cat_id");
  }
  if (responseParser->hasName("cat_name")) {
  catName = responseParser->getStrByName("cat_name");
  }
  if (responseParser->hasName("certified_data")) {
  certifiedData = responseParser->getStrByName("certified_data");
  }

}

