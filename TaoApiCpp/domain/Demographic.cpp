#include <TaoApiCpp/domain/Demographic.h>
QDateTime Demographic::getCreateTime() const {
  return createTime;
}
void Demographic::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong Demographic::getGroupId() const {
  return groupId;
}
void Demographic::setGroupId (qlonglong groupId) {
  this->groupId = groupId;
}

QString Demographic::getGroupName() const {
  return groupName;
}
void Demographic::setGroupName (QString groupName) {
  this->groupName = groupName;
}

qlonglong Demographic::getId() const {
  return id;
}
void Demographic::setId (qlonglong id) {
  this->id = id;
}

QDateTime Demographic::getLastUpdateTime() const {
  return lastUpdateTime;
}
void Demographic::setLastUpdateTime (QDateTime lastUpdateTime) {
  this->lastUpdateTime = lastUpdateTime;
}

QString Demographic::getName() const {
  return name;
}
void Demographic::setName (QString name) {
  this->name = name;
}


void Demographic::parseResponse() {
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("group_id")) {
  groupId = responseParser->getNumByName("group_id");
  }
  if (responseParser->hasName("group_name")) {
  groupName = responseParser->getStrByName("group_name");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("last_update_time")) {
  lastUpdateTime = responseParser->getDateByName("last_update_time");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }

}

