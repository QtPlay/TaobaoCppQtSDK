#include <TaoApiCpp/domain/Area.h>
qlonglong Area::getId() const {
  return id;
}
void Area::setId (qlonglong id) {
  this->id = id;
}

QString Area::getName() const {
  return name;
}
void Area::setName (QString name) {
  this->name = name;
}

qlonglong Area::getParentId() const {
  return parentId;
}
void Area::setParentId (qlonglong parentId) {
  this->parentId = parentId;
}

qlonglong Area::getType() const {
  return type;
}
void Area::setType (qlonglong type) {
  this->type = type;
}

QString Area::getZip() const {
  return zip;
}
void Area::setZip (QString zip) {
  this->zip = zip;
}


void Area::parseResponse() {
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("parent_id")) {
  parentId = responseParser->getNumByName("parent_id");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getNumByName("type");
  }
  if (responseParser->hasName("zip")) {
  zip = responseParser->getStrByName("zip");
  }

}

