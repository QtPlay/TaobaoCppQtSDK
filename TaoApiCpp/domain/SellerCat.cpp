#include <TaoApiCpp/domain/SellerCat.h>
qlonglong SellerCat::getCid() const {
  return cid;
}
void SellerCat::setCid (qlonglong cid) {
  this->cid = cid;
}

QDateTime SellerCat::getCreated() const {
  return created;
}
void SellerCat::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime SellerCat::getModified() const {
  return modified;
}
void SellerCat::setModified (QDateTime modified) {
  this->modified = modified;
}

QString SellerCat::getName() const {
  return name;
}
void SellerCat::setName (QString name) {
  this->name = name;
}

qlonglong SellerCat::getParentCid() const {
  return parentCid;
}
void SellerCat::setParentCid (qlonglong parentCid) {
  this->parentCid = parentCid;
}

QString SellerCat::getPicUrl() const {
  return picUrl;
}
void SellerCat::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

qlonglong SellerCat::getSortOrder() const {
  return sortOrder;
}
void SellerCat::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
}

QString SellerCat::getType() const {
  return type;
}
void SellerCat::setType (QString type) {
  this->type = type;
}


void SellerCat::parseResponse() {
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("parent_cid")) {
  parentCid = responseParser->getNumByName("parent_cid");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("sort_order")) {
  sortOrder = responseParser->getNumByName("sort_order");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }

}

