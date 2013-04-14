#include <TaoApiCpp/domain/RdsDbInfo.h>
QString RdsDbInfo::getCharset() const {
  return charset;
}
void RdsDbInfo::setCharset (QString charset) {
  this->charset = charset;
}

QString RdsDbInfo::getComment() const {
  return comment;
}
void RdsDbInfo::setComment (QString comment) {
  this->comment = comment;
}

QString RdsDbInfo::getDbId() const {
  return dbId;
}
void RdsDbInfo::setDbId (QString dbId) {
  this->dbId = dbId;
}

QString RdsDbInfo::getDbName() const {
  return dbName;
}
void RdsDbInfo::setDbName (QString dbName) {
  this->dbName = dbName;
}

QString RdsDbInfo::getDbStatus() const {
  return dbStatus;
}
void RdsDbInfo::setDbStatus (QString dbStatus) {
  this->dbStatus = dbStatus;
}

QString RdsDbInfo::getDbType() const {
  return dbType;
}
void RdsDbInfo::setDbType (QString dbType) {
  this->dbType = dbType;
}

QString RdsDbInfo::getInstanceId() const {
  return instanceId;
}
void RdsDbInfo::setInstanceId (QString instanceId) {
  this->instanceId = instanceId;
}

QString RdsDbInfo::getInstanceName() const {
  return instanceName;
}
void RdsDbInfo::setInstanceName (QString instanceName) {
  this->instanceName = instanceName;
}

QString RdsDbInfo::getInstanceType() const {
  return instanceType;
}
void RdsDbInfo::setInstanceType (QString instanceType) {
  this->instanceType = instanceType;
}

QString RdsDbInfo::getMaxAccount() const {
  return maxAccount;
}
void RdsDbInfo::setMaxAccount (QString maxAccount) {
  this->maxAccount = maxAccount;
}

QString RdsDbInfo::getPassword() const {
  return password;
}
void RdsDbInfo::setPassword (QString password) {
  this->password = password;
}

QString RdsDbInfo::getUid() const {
  return uid;
}
void RdsDbInfo::setUid (QString uid) {
  this->uid = uid;
}

QString RdsDbInfo::getUserName() const {
  return userName;
}
void RdsDbInfo::setUserName (QString userName) {
  this->userName = userName;
}


void RdsDbInfo::parseResponse() {
  if (responseParser->hasName("charset")) {
  charset = responseParser->getStrByName("charset");
  }
  if (responseParser->hasName("comment")) {
  comment = responseParser->getStrByName("comment");
  }
  if (responseParser->hasName("db_id")) {
  dbId = responseParser->getStrByName("db_id");
  }
  if (responseParser->hasName("db_name")) {
  dbName = responseParser->getStrByName("db_name");
  }
  if (responseParser->hasName("db_status")) {
  dbStatus = responseParser->getStrByName("db_status");
  }
  if (responseParser->hasName("db_type")) {
  dbType = responseParser->getStrByName("db_type");
  }
  if (responseParser->hasName("instance_id")) {
  instanceId = responseParser->getStrByName("instance_id");
  }
  if (responseParser->hasName("instance_name")) {
  instanceName = responseParser->getStrByName("instance_name");
  }
  if (responseParser->hasName("instance_type")) {
  instanceType = responseParser->getStrByName("instance_type");
  }
  if (responseParser->hasName("max_account")) {
  maxAccount = responseParser->getStrByName("max_account");
  }
  if (responseParser->hasName("password")) {
  password = responseParser->getStrByName("password");
  }
  if (responseParser->hasName("uid")) {
  uid = responseParser->getStrByName("uid");
  }
  if (responseParser->hasName("user_name")) {
  userName = responseParser->getStrByName("user_name");
  }

}

