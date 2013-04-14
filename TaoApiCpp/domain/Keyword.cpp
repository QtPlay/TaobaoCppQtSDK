#include <TaoApiCpp/domain/Keyword.h>
qlonglong Keyword::getAdgroupId() const {
  return adgroupId;
}
void Keyword::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

QString Keyword::getAuditDesc() const {
  return auditDesc;
}
void Keyword::setAuditDesc (QString auditDesc) {
  this->auditDesc = auditDesc;
}

QString Keyword::getAuditStatus() const {
  return auditStatus;
}
void Keyword::setAuditStatus (QString auditStatus) {
  this->auditStatus = auditStatus;
}

qlonglong Keyword::getCampaignId() const {
  return campaignId;
}
void Keyword::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime Keyword::getCreateTime() const {
  return createTime;
}
void Keyword::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

bool Keyword::getIsDefaultPrice() const {
  return isDefaultPrice;
}
void Keyword::setIsDefaultPrice (bool isDefaultPrice) {
  this->isDefaultPrice = isDefaultPrice;
}

bool Keyword::getIsGarbage() const {
  return isGarbage;
}
void Keyword::setIsGarbage (bool isGarbage) {
  this->isGarbage = isGarbage;
}

qlonglong Keyword::getKeywordId() const {
  return keywordId;
}
void Keyword::setKeywordId (qlonglong keywordId) {
  this->keywordId = keywordId;
}

QString Keyword::getMatchScope() const {
  return matchScope;
}
void Keyword::setMatchScope (QString matchScope) {
  this->matchScope = matchScope;
}

qlonglong Keyword::getMaxPrice() const {
  return maxPrice;
}
void Keyword::setMaxPrice (qlonglong maxPrice) {
  this->maxPrice = maxPrice;
}

QDateTime Keyword::getModifiedTime() const {
  return modifiedTime;
}
void Keyword::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString Keyword::getNick() const {
  return nick;
}
void Keyword::setNick (QString nick) {
  this->nick = nick;
}

QString Keyword::getQscore() const {
  return qscore;
}
void Keyword::setQscore (QString qscore) {
  this->qscore = qscore;
}

QString Keyword::getWord() const {
  return word;
}
void Keyword::setWord (QString word) {
  this->word = word;
}


void Keyword::parseResponse() {
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
  if (responseParser->hasName("is_default_price")) {
  isDefaultPrice = responseParser->getBoolByName("is_default_price");
  }
  if (responseParser->hasName("is_garbage")) {
  isGarbage = responseParser->getBoolByName("is_garbage");
  }
  if (responseParser->hasName("keyword_id")) {
  keywordId = responseParser->getNumByName("keyword_id");
  }
  if (responseParser->hasName("match_scope")) {
  matchScope = responseParser->getStrByName("match_scope");
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
  if (responseParser->hasName("qscore")) {
  qscore = responseParser->getStrByName("qscore");
  }
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }

}

