#include <TaoApiCpp/domain/SubAccountInfo.h>
bool SubAccountInfo::getSubDispatchStatus() const {
  return subDispatchStatus;
}
void SubAccountInfo::setSubDispatchStatus (bool subDispatchStatus) {
  this->subDispatchStatus = subDispatchStatus;
}

qlonglong SubAccountInfo::getSubId() const {
  return subId;
}
void SubAccountInfo::setSubId (qlonglong subId) {
  this->subId = subId;
}

QString SubAccountInfo::getSubNick() const {
  return subNick;
}
void SubAccountInfo::setSubNick (QString subNick) {
  this->subNick = subNick;
}

bool SubAccountInfo::getSubOwedStatus() const {
  return subOwedStatus;
}
void SubAccountInfo::setSubOwedStatus (bool subOwedStatus) {
  this->subOwedStatus = subOwedStatus;
}

qlonglong SubAccountInfo::getSubStatus() const {
  return subStatus;
}
void SubAccountInfo::setSubStatus (qlonglong subStatus) {
  this->subStatus = subStatus;
}

qlonglong SubAccountInfo::getUserId() const {
  return userId;
}
void SubAccountInfo::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString SubAccountInfo::getUserNick() const {
  return userNick;
}
void SubAccountInfo::setUserNick (QString userNick) {
  this->userNick = userNick;
}


void SubAccountInfo::parseResponse() {
  if (responseParser->hasName("sub_dispatch_status")) {
  subDispatchStatus = responseParser->getBoolByName("sub_dispatch_status");
  }
  if (responseParser->hasName("sub_id")) {
  subId = responseParser->getNumByName("sub_id");
  }
  if (responseParser->hasName("sub_nick")) {
  subNick = responseParser->getStrByName("sub_nick");
  }
  if (responseParser->hasName("sub_owed_status")) {
  subOwedStatus = responseParser->getBoolByName("sub_owed_status");
  }
  if (responseParser->hasName("sub_status")) {
  subStatus = responseParser->getNumByName("sub_status");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }

}

