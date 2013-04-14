#include <TaoApiCpp/domain/PropValue.h>
qlonglong PropValue::getCid() const {
  return cid;
}
void PropValue::setCid (qlonglong cid) {
  this->cid = cid;
}

bool PropValue::getIsParent() const {
  return isParent;
}
void PropValue::setIsParent (bool isParent) {
  this->isParent = isParent;
}

QDateTime PropValue::getModifiedTime() const {
  return modifiedTime;
}
void PropValue::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString PropValue::getModifiedType() const {
  return modifiedType;
}
void PropValue::setModifiedType (QString modifiedType) {
  this->modifiedType = modifiedType;
}

QString PropValue::getName() const {
  return name;
}
void PropValue::setName (QString name) {
  this->name = name;
}

QString PropValue::getNameAlias() const {
  return nameAlias;
}
void PropValue::setNameAlias (QString nameAlias) {
  this->nameAlias = nameAlias;
}

qlonglong PropValue::getPid() const {
  return pid;
}
void PropValue::setPid (qlonglong pid) {
  this->pid = pid;
}

QString PropValue::getPropName() const {
  return propName;
}
void PropValue::setPropName (QString propName) {
  this->propName = propName;
}

qlonglong PropValue::getSortOrder() const {
  return sortOrder;
}
void PropValue::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
}

QString PropValue::getStatus() const {
  return status;
}
void PropValue::setStatus (QString status) {
  this->status = status;
}

qlonglong PropValue::getVid() const {
  return vid;
}
void PropValue::setVid (qlonglong vid) {
  this->vid = vid;
}


void PropValue::parseResponse() {
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
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
  if (responseParser->hasName("name_alias")) {
  nameAlias = responseParser->getStrByName("name_alias");
  }
  if (responseParser->hasName("pid")) {
  pid = responseParser->getNumByName("pid");
  }
  if (responseParser->hasName("prop_name")) {
  propName = responseParser->getStrByName("prop_name");
  }
  if (responseParser->hasName("sort_order")) {
  sortOrder = responseParser->getNumByName("sort_order");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("vid")) {
  vid = responseParser->getNumByName("vid");
  }

}

