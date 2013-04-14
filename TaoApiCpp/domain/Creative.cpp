#include <TaoApiCpp/domain/Creative.h>
qlonglong Creative::getAdgroupId() const {
  return adgroupId;
}
void Creative::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

QString Creative::getAuditDesc() const {
  return auditDesc;
}
void Creative::setAuditDesc (QString auditDesc) {
  this->auditDesc = auditDesc;
}

QString Creative::getAuditStatus() const {
  return auditStatus;
}
void Creative::setAuditStatus (QString auditStatus) {
  this->auditStatus = auditStatus;
}

qlonglong Creative::getCampaignId() const {
  return campaignId;
}
void Creative::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime Creative::getCreateTime() const {
  return createTime;
}
void Creative::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong Creative::getCreativeId() const {
  return creativeId;
}
void Creative::setCreativeId (qlonglong creativeId) {
  this->creativeId = creativeId;
}

QString Creative::getImgUrl() const {
  return imgUrl;
}
void Creative::setImgUrl (QString imgUrl) {
  this->imgUrl = imgUrl;
}

QDateTime Creative::getModifiedTime() const {
  return modifiedTime;
}
void Creative::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString Creative::getNick() const {
  return nick;
}
void Creative::setNick (QString nick) {
  this->nick = nick;
}

QString Creative::getTitle() const {
  return title;
}
void Creative::setTitle (QString title) {
  this->title = title;
}


void Creative::parseResponse() {
  if (responseParser->hasName("adgroup_id")) {
  adgroupId = responseParser->getNumByName("adgroup_id");
  }
  if (responseParser->hasName("audit_desc")) {
  auditDesc = responseParser->getStrByName("audit_desc");
  }
  if (responseParser->hasName("audit_status")) {
  auditStatus = responseParser->getStrByName("audit_status");
  }
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("creative_id")) {
  creativeId = responseParser->getNumByName("creative_id");
  }
  if (responseParser->hasName("img_url")) {
  imgUrl = responseParser->getStrByName("img_url");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

