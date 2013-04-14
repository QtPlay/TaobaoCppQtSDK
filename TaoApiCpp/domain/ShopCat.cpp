#include <TaoApiCpp/domain/ShopCat.h>
qlonglong ShopCat::getCid() const {
  return cid;
}
void ShopCat::setCid (qlonglong cid) {
  this->cid = cid;
}

bool ShopCat::getIsParent() const {
  return isParent;
}
void ShopCat::setIsParent (bool isParent) {
  this->isParent = isParent;
}

QString ShopCat::getName() const {
  return name;
}
void ShopCat::setName (QString name) {
  this->name = name;
}

qlonglong ShopCat::getParentCid() const {
  return parentCid;
}
void ShopCat::setParentCid (qlonglong parentCid) {
  this->parentCid = parentCid;
}


void ShopCat::parseResponse() {
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("is_parent")) {
  isParent = responseParser->getBoolByName("is_parent");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("parent_cid")) {
  parentCid = responseParser->getNumByName("parent_cid");
  }

}

