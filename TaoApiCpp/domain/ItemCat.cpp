#include <TaoApiCpp/domain/ItemCat.h>
qlonglong ItemCat::getCid() const {
  return cid;
}
void ItemCat::setCid (qlonglong cid) {
  this->cid = cid;
}

QList<Feature> ItemCat::getFeatures() const {
  return features;
}
void ItemCat::setFeatures (QList<Feature> features) {
  this->features = features;
}

bool ItemCat::getIsParent() const {
  return isParent;
}
void ItemCat::setIsParent (bool isParent) {
  this->isParent = isParent;
}

QDateTime ItemCat::getModifiedTime() const {
  return modifiedTime;
}
void ItemCat::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString ItemCat::getModifiedType() const {
  return modifiedType;
}
void ItemCat::setModifiedType (QString modifiedType) {
  this->modifiedType = modifiedType;
}

QString ItemCat::getName() const {
  return name;
}
void ItemCat::setName (QString name) {
  this->name = name;
}

qlonglong ItemCat::getParentCid() const {
  return parentCid;
}
void ItemCat::setParentCid (qlonglong parentCid) {
  this->parentCid = parentCid;
}

qlonglong ItemCat::getSortOrder() const {
  return sortOrder;
}
void ItemCat::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
}

QString ItemCat::getStatus() const {
  return status;
}
void ItemCat::setStatus (QString status) {
  this->status = status;
}


void ItemCat::parseResponse() {
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("features")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("features");
  Parser *parser;
  foreach (parser, listParser) {
    Feature tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    features.append(tmp);
  }
  }
  if (responseParser->hasName("is_parent")) {
  isParent = responseParser->getBoolByName("is_parent");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("modified_type")) {
  modifiedType = responseParser->getStrByName("modified_type");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("parent_cid")) {
  parentCid = responseParser->getNumByName("parent_cid");
  }
  if (responseParser->hasName("sort_order")) {
  sortOrder = responseParser->getNumByName("sort_order");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }

}

