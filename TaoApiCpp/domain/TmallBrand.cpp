#include <TaoApiCpp/domain/TmallBrand.h>
qlonglong TmallBrand::getBrandId() const {
  return brandId;
}
void TmallBrand::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

QString TmallBrand::getBrandName() const {
  return brandName;
}
void TmallBrand::setBrandName (QString brandName) {
  this->brandName = brandName;
}


void TmallBrand::parseResponse() {
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("brand_name")) {
  brandName = responseParser->getStrByName("brand_name");
  }

}

