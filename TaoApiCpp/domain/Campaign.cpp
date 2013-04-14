#include <TaoApiCpp/domain/Campaign.h>
qlonglong Campaign::getCampaignId() const {
  return campaignId;
}
void Campaign::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime Campaign::getCreateTime() const {
  return createTime;
}
void Campaign::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime Campaign::getModifiedTime() const {
  return modifiedTime;
}
void Campaign::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString Campaign::getNick() const {
  return nick;
}
void Campaign::setNick (QString nick) {
  this->nick = nick;
}

QString Campaign::getOnlineStatus() const {
  return onlineStatus;
}
void Campaign::setOnlineStatus (QString onlineStatus) {
  this->onlineStatus = onlineStatus;
}

QString Campaign::getSettleReason() const {
  return settleReason;
}
void Campaign::setSettleReason (QString settleReason) {
  this->settleReason = settleReason;
}

QString Campaign::getSettleStatus() const {
  return settleStatus;
}
void Campaign::setSettleStatus (QString settleStatus) {
  this->settleStatus = settleStatus;
}

QString Campaign::getTitle() const {
  return title;
}
void Campaign::setTitle (QString title) {
  this->title = title;
}


void Campaign::parseResponse() {
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
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
  if (responseParser->hasName("settle_reason")) {
  settleReason = responseParser->getStrByName("settle_reason");
  }
  if (responseParser->hasName("settle_status")) {
  settleStatus = responseParser->getStrByName("settle_status");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

