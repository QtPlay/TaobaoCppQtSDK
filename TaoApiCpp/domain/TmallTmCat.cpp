#include <TaoApiCpp/domain/TmallTmCat.h>
qlonglong TmallTmCat::getSubCatId() const {
  return subCatId;
}
void TmallTmCat::setSubCatId (qlonglong subCatId) {
  this->subCatId = subCatId;
}

QString TmallTmCat::getSubCatName() const {
  return subCatName;
}
void TmallTmCat::setSubCatName (QString subCatName) {
  this->subCatName = subCatName;
}


void TmallTmCat::parseResponse() {
  if (responseParser->hasName("sub_cat_id")) {
  subCatId = responseParser->getNumByName("sub_cat_id");
  }
  if (responseParser->hasName("sub_cat_name")) {
  subCatName = responseParser->getStrByName("sub_cat_name");
  }

}

