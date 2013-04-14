#include <TaoApiCpp/domain/TmallCat.h>
qlonglong TmallCat::getCatId() const {
  return catId;
}
void TmallCat::setCatId (qlonglong catId) {
  this->catId = catId;
}

QString TmallCat::getCatName() const {
  return catName;
}
void TmallCat::setCatName (QString catName) {
  this->catName = catName;
}


void TmallCat::parseResponse() {
  if (responseParser->hasName("cat_id")) {
  catId = responseParser->getNumByName("cat_id");
  }
  if (responseParser->hasName("cat_name")) {
  catName = responseParser->getStrByName("cat_name");
  }

}

