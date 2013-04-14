#include <TaoApiCpp/domain/ADGroup.h>
qlonglong ADGroup::getAdgroupId() const {
  return adgroupId;
}
void ADGroup::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

qlonglong ADGroup::getCampaignId() const {
  return campaignId;
}
void ADGroup::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QString ADGroup::getCategoryIds() const {
  return categoryIds;
}
void ADGroup::setCategoryIds (QString categoryIds) {
  this->categoryIds = categoryIds;
}

QDateTime ADGroup::getCreateTime() const {
  return createTime;
}
void ADGroup::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong ADGroup::getDefaultPrice() const {
  return defaultPrice;
}
void ADGroup::setDefaultPrice (qlonglong defaultPrice) {
  this->defaultPrice = defaultPrice;
}

bool ADGroup::getIsNonsearchDefaultPrice() const {
  return isNonsearchDefaultPrice;
}
void ADGroup::setIsNonsearchDefaultPrice (bool isNonsearchDefaultPrice) {
  this->isNonsearchDefaultPrice = isNonsearchDefaultPrice;
}

QDateTime ADGroup::getModifiedTime() const {
  return modifiedTime;
}
void ADGroup::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString ADGroup::getNick() const {
  return nick;
}
void ADGroup::setNick (QString nick) {
  this->nick = nick;
}

qlonglong ADGroup::getNonsearchMaxPrice() const {
  return nonsearchMaxPrice;
}
void ADGroup::setNonsearchMaxPrice (qlonglong nonsearchMaxPrice) {
  this->nonsearchMaxPrice = nonsearchMaxPrice;
}

qlonglong ADGroup::getNonsearchStatus() const {
  return nonsearchStatus;
}
void ADGroup::setNonsearchStatus (qlonglong nonsearchStatus) {
  this->nonsearchStatus = nonsearchStatus;
}

qlonglong ADGroup::getNumIid() const {
  return numIid;
}
void ADGroup::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString ADGroup::getOfflineType() const {
  return offlineType;
}
void ADGroup::setOfflineType (QString offlineType) {
  this->offlineType = offlineType;
}

QString ADGroup::getOnlineStatus() const {
  return onlineStatus;
}
void ADGroup::setOnlineStatus (QString onlineStatus) {
  this->onlineStatus = onlineStatus;
}

QString ADGroup::getReason() const {
  return reason;
}
void ADGroup::setReason (QString reason) {
  this->reason = reason;
}


void ADGroup::parseResponse() {
  if (responseParser->hasName("adgroup_id")) {
  adgroupId = responseParser->getNumByName("adgroup_id");
  }
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("category_ids")) {
  categoryIds = responseParser->getStrByName("category_ids");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("default_price")) {
  defaultPrice = responseParser->getNumByName("default_price");
  }
  if (responseParser->hasName("is_nonsearch_default_price")) {
  isNonsearchDefaultPrice = responseParser->getBoolByName("is_nonsearch_default_price");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("nonsearch_max_price")) {
  nonsearchMaxPrice = responseParser->getNumByName("nonsearch_max_price");
  }
  if (responseParser->hasName("nonsearch_status")) {
  nonsearchStatus = responseParser->getNumByName("nonsearch_status");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("offline_type")) {
  offlineType = responseParser->getStrByName("offline_type");
  }
  if (responseParser->hasName("online_status")) {
  onlineStatus = responseParser->getStrByName("online_status");
  }
  if (responseParser->hasName("reason")) {
  reason = responseParser->getStrByName("reason");
  }

}

