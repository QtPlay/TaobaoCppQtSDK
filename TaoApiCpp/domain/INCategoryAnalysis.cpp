#include <TaoApiCpp/domain/INCategoryAnalysis.h>
QString INCategoryAnalysis::getCategoryAreaPer() const {
  return categoryAreaPer;
}
void INCategoryAnalysis::setCategoryAreaPer (QString categoryAreaPer) {
  this->categoryAreaPer = categoryAreaPer;
}

QString INCategoryAnalysis::getCategoryHpPrice() const {
  return categoryHpPrice;
}
void INCategoryAnalysis::setCategoryHpPrice (QString categoryHpPrice) {
  this->categoryHpPrice = categoryHpPrice;
}

qlonglong INCategoryAnalysis::getCategoryId() const {
  return categoryId;
}
void INCategoryAnalysis::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

QString INCategoryAnalysis::getCategoryName() const {
  return categoryName;
}
void INCategoryAnalysis::setCategoryName (QString categoryName) {
  this->categoryName = categoryName;
}

QString INCategoryAnalysis::getCategorySourcePer() const {
  return categorySourcePer;
}
void INCategoryAnalysis::setCategorySourcePer (QString categorySourcePer) {
  this->categorySourcePer = categorySourcePer;
}


void INCategoryAnalysis::parseResponse() {
  if (responseParser->hasName("category_area_per")) {
  categoryAreaPer = responseParser->getStrByName("category_area_per");
  }
  if (responseParser->hasName("category_hp_price")) {
  categoryHpPrice = responseParser->getStrByName("category_hp_price");
  }
  if (responseParser->hasName("category_id")) {
  categoryId = responseParser->getNumByName("category_id");
  }
  if (responseParser->hasName("category_name")) {
  categoryName = responseParser->getStrByName("category_name");
  }
  if (responseParser->hasName("category_source_per")) {
  categorySourcePer = responseParser->getStrByName("category_source_per");
  }

}

