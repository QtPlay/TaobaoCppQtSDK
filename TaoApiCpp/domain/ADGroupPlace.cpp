#include <TaoApiCpp/domain/ADGroupPlace.h>
qlonglong ADGroupPlace::getAdgroupId() const {
  return adgroupId;
}
void ADGroupPlace::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

qlonglong ADGroupPlace::getCampaignId() const {
  return campaignId;
}
void ADGroupPlace::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime ADGroupPlace::getCreateTime() const {
  return createTime;
}
void ADGroupPlace::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong ADGroupPlace::getIsDefaultPrice() const {
  return isDefaultPrice;
}
void ADGroupPlace::setIsDefaultPrice (qlonglong isDefaultPrice) {
  this->isDefaultPrice = isDefaultPrice;
}

qlonglong ADGroupPlace::getMaxPrice() const {
  return maxPrice;
}
void ADGroupPlace::setMaxPrice (qlonglong maxPrice) {
  this->maxPrice = maxPrice;
}

QDateTime ADGroupPlace::getModifiedTime() const {
  return modifiedTime;
}
void ADGroupPlace::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString ADGroupPlace::getNick() const {
  return nick;
}
void ADGroupPlace::setNick (QString nick) {
  this->nick = nick;
}

qlonglong ADGroupPlace::getPlaceId() const {
  return placeId;
}
void ADGroupPlace::setPlaceId (qlonglong placeId) {
  this->placeId = placeId;
}

QString ADGroupPlace::getPlaceName() const {
  return placeName;
}
void ADGroupPlace::setPlaceName (QString placeName) {
  this->placeName = placeName;
}


void ADGroupPlace::parseResponse() {
  if (responseParser->hasName("adgroup_id")) {
  adgroupId = responseParser->getNumByName("adgroup_id");
  }
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("is_default_price")) {
  isDefaultPrice = responseParser->getNumByName("is_default_price");
  }
  if (responseParser->hasName("max_price")) {
  maxPrice = responseParser->getNumByName("max_price");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("place_id")) {
  placeId = responseParser->getNumByName("place_id");
  }
  if (responseParser->hasName("place_name")) {
  placeName = responseParser->getStrByName("place_name");
  }

}

