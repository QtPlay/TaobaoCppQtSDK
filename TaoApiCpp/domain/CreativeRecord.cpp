#include <TaoApiCpp/domain/CreativeRecord.h>
QString CreativeRecord::getAuditDesc() const {
  return auditDesc;
}
void CreativeRecord::setAuditDesc (QString auditDesc) {
  this->auditDesc = auditDesc;
}

QString CreativeRecord::getAuditStatus() const {
  return auditStatus;
}
void CreativeRecord::setAuditStatus (QString auditStatus) {
  this->auditStatus = auditStatus;
}

QDateTime CreativeRecord::getCreateTime() const {
  return createTime;
}
void CreativeRecord::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong CreativeRecord::getCreativeId() const {
  return creativeId;
}
void CreativeRecord::setCreativeId (qlonglong creativeId) {
  this->creativeId = creativeId;
}

QString CreativeRecord::getImgUrl() const {
  return imgUrl;
}
void CreativeRecord::setImgUrl (QString imgUrl) {
  this->imgUrl = imgUrl;
}

QDateTime CreativeRecord::getModifiedTime() const {
  return modifiedTime;
}
void CreativeRecord::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QDateTime CreativeRecord::getModifyTime() const {
  return modifyTime;
}
void CreativeRecord::setModifyTime (QDateTime modifyTime) {
  this->modifyTime = modifyTime;
}

QString CreativeRecord::getNick() const {
  return nick;
}
void CreativeRecord::setNick (QString nick) {
  this->nick = nick;
}

QString CreativeRecord::getOldImgUrl() const {
  return oldImgUrl;
}
void CreativeRecord::setOldImgUrl (QString oldImgUrl) {
  this->oldImgUrl = oldImgUrl;
}

QString CreativeRecord::getOldTitle() const {
  return oldTitle;
}
void CreativeRecord::setOldTitle (QString oldTitle) {
  this->oldTitle = oldTitle;
}

QString CreativeRecord::getTitle() const {
  return title;
}
void CreativeRecord::setTitle (QString title) {
  this->title = title;
}


void CreativeRecord::parseResponse() {
  if (responseParser->hasName("audit_desc")) {
  auditDesc = responseParser->getStrByName("audit_desc");
  }
  if (responseParser->hasName("audit_status")) {
  auditStatus = responseParser->getStrByName("audit_status");
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
  if (responseParser->hasName("modify_time")) {
  modifyTime = responseParser->getDateByName("modify_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("old_img_url")) {
  oldImgUrl = responseParser->getStrByName("old_img_url");
  }
  if (responseParser->hasName("old_title")) {
  oldTitle = responseParser->getStrByName("old_title");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

