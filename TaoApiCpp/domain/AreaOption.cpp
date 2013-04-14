#include <TaoApiCpp/domain/AreaOption.h>
qlonglong AreaOption::getAreaId() const {
  return areaId;
}
void AreaOption::setAreaId (qlonglong areaId) {
  this->areaId = areaId;
}

qlonglong AreaOption::getLevel() const {
  return level;
}
void AreaOption::setLevel (qlonglong level) {
  this->level = level;
}

QString AreaOption::getName() const {
  return name;
}
void AreaOption::setName (QString name) {
  this->name = name;
}

qlonglong AreaOption::getParentId() const {
  return parentId;
}
void AreaOption::setParentId (qlonglong parentId) {
  this->parentId = parentId;
}


void AreaOption::parseResponse() {
  if (responseParser->hasName("area_id")) {
  areaId = responseParser->getNumByName("area_id");
  }
  if (responseParser->hasName("level")) {
  level = responseParser->getNumByName("level");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("parent_id")) {
  parentId = responseParser->getNumByName("parent_id");
  }

}

