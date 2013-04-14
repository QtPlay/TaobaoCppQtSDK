#include <TaoApiCpp/domain/RoomType.h>
QString RoomType::getAliasName() const {
  return aliasName;
}
void RoomType::setAliasName (QString aliasName) {
  this->aliasName = aliasName;
}

QString RoomType::getAuditDenyReason() const {
  return auditDenyReason;
}
void RoomType::setAuditDenyReason (QString auditDenyReason) {
  this->auditDenyReason = auditDenyReason;
}

QDateTime RoomType::getCreated() const {
  return created;
}
void RoomType::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong RoomType::getHid() const {
  return hid;
}
void RoomType::setHid (qlonglong hid) {
  this->hid = hid;
}

QDateTime RoomType::getModified() const {
  return modified;
}
void RoomType::setModified (QDateTime modified) {
  this->modified = modified;
}

QString RoomType::getName() const {
  return name;
}
void RoomType::setName (QString name) {
  this->name = name;
}

qlonglong RoomType::getRid() const {
  return rid;
}
void RoomType::setRid (qlonglong rid) {
  this->rid = rid;
}

qlonglong RoomType::getStatus() const {
  return status;
}
void RoomType::setStatus (qlonglong status) {
  this->status = status;
}


void RoomType::parseResponse() {
  if (responseParser->hasName("alias_name")) {
  aliasName = responseParser->getStrByName("alias_name");
  }
  if (responseParser->hasName("audit_deny_reason")) {
  auditDenyReason = responseParser->getStrByName("audit_deny_reason");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("hid")) {
  hid = responseParser->getNumByName("hid");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("rid")) {
  rid = responseParser->getNumByName("rid");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }

}

