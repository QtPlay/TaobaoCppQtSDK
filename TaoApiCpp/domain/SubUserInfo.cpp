#include <TaoApiCpp/domain/SubUserInfo.h>
QString SubUserInfo::getFullName() const {
  return fullName;
}
void SubUserInfo::setFullName (QString fullName) {
  this->fullName = fullName;
}

qlonglong SubUserInfo::getIsOnline() const {
  return isOnline;
}
void SubUserInfo::setIsOnline (qlonglong isOnline) {
  this->isOnline = isOnline;
}

QString SubUserInfo::getNick() const {
  return nick;
}
void SubUserInfo::setNick (QString nick) {
  this->nick = nick;
}

qlonglong SubUserInfo::getSellerId() const {
  return sellerId;
}
void SubUserInfo::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
}

QString SubUserInfo::getSellerNick() const {
  return sellerNick;
}
void SubUserInfo::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

qlonglong SubUserInfo::getStatus() const {
  return status;
}
void SubUserInfo::setStatus (qlonglong status) {
  this->status = status;
}

qlonglong SubUserInfo::getSubId() const {
  return subId;
}
void SubUserInfo::setSubId (qlonglong subId) {
  this->subId = subId;
}


void SubUserInfo::parseResponse() {
  if (responseParser->hasName("full_name")) {
  fullName = responseParser->getStrByName("full_name");
  }
  if (responseParser->hasName("is_online")) {
  isOnline = responseParser->getNumByName("is_online");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("seller_id")) {
  sellerId = responseParser->getNumByName("seller_id");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("sub_id")) {
  subId = responseParser->getNumByName("sub_id");
  }

}

