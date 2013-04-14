#include <TaoApiCpp/domain/Place.h>
QDateTime Place::getCreateTime() const {
  return createTime;
}
void Place::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime Place::getLastUpdateTime() const {
  return lastUpdateTime;
}
void Place::setLastUpdateTime (QDateTime lastUpdateTime) {
  this->lastUpdateTime = lastUpdateTime;
}

QString Place::getName() const {
  return name;
}
void Place::setName (QString name) {
  this->name = name;
}

qlonglong Place::getPlaceId() const {
  return placeId;
}
void Place::setPlaceId (qlonglong placeId) {
  this->placeId = placeId;
}


void Place::parseResponse() {
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("last_update_time")) {
  lastUpdateTime = responseParser->getDateByName("last_update_time");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("place_id")) {
  placeId = responseParser->getNumByName("place_id");
  }

}

