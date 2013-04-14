#include <TaoApiCpp/domain/ADGroupCatmatch.h>
qlonglong ADGroupCatmatch::getAdgroupId() const {
  return adgroupId;
}
void ADGroupCatmatch::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

qlonglong ADGroupCatmatch::getCampaignId() const {
  return campaignId;
}
void ADGroupCatmatch::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

qlonglong ADGroupCatmatch::getCatmatchId() const {
  return catmatchId;
}
void ADGroupCatmatch::setCatmatchId (qlonglong catmatchId) {
  this->catmatchId = catmatchId;
}

QDateTime ADGroupCatmatch::getCreateTime() const {
  return createTime;
}
void ADGroupCatmatch::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

bool ADGroupCatmatch::getIsDefaultPrice() const {
  return isDefaultPrice;
}
void ADGroupCatmatch::setIsDefaultPrice (bool isDefaultPrice) {
  this->isDefaultPrice = isDefaultPrice;
}

qlonglong ADGroupCatmatch::getMaxPrice() const {
  return maxPrice;
}
void ADGroupCatmatch::setMaxPrice (qlonglong maxPrice) {
  this->maxPrice = maxPrice;
}

QDateTime ADGroupCatmatch::getModifiedTime() const {
  return modifiedTime;
}
void ADGroupCatmatch::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString ADGroupCatmatch::getNick() const {
  return nick;
}
void ADGroupCatmatch::setNick (QString nick) {
  this->nick = nick;
}

QString ADGroupCatmatch::getOnlineStatus() const {
  return onlineStatus;
}
void ADGroupCatmatch::setOnlineStatus (QString onlineStatus) {
  this->onlineStatus = onlineStatus;
}

QString ADGroupCatmatch::getQscore() const {
  return qscore;
}
void ADGroupCatmatch::setQscore (QString qscore) {
  this->qscore = qscore;
}


void ADGroupCatmatch::parseResponse() {
  if (responseParser->hasName("adgroup_id")) {
  adgroupId = responseParser->getNumByName("adgroup_id");
  }
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("catmatch_id")) {
  catmatchId = responseParser->getNumByName("catmatch_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("is_default_price")) {
  isDefaultPrice = responseParser->getBoolByName("is_default_price");
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
  if (responseParser->hasName("online_status")) {
  onlineStatus = responseParser->getStrByName("online_status");
  }
  if (responseParser->hasName("qscore")) {
  qscore = responseParser->getStrByName("qscore");
  }

}

