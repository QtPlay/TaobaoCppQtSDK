#include <TaoApiCpp/domain/NotifyTrade.h>
QString NotifyTrade::getBuyerNick() const {
  return buyerNick;
}
void NotifyTrade::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QDateTime NotifyTrade::getModified() const {
  return modified;
}
void NotifyTrade::setModified (QDateTime modified) {
  this->modified = modified;
}

QString NotifyTrade::getNick() const {
  return nick;
}
void NotifyTrade::setNick (QString nick) {
  this->nick = nick;
}

qlonglong NotifyTrade::getOid() const {
  return oid;
}
void NotifyTrade::setOid (qlonglong oid) {
  this->oid = oid;
}

QString NotifyTrade::getPayment() const {
  return payment;
}
void NotifyTrade::setPayment (QString payment) {
  this->payment = payment;
}

QString NotifyTrade::getSellerNick() const {
  return sellerNick;
}
void NotifyTrade::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString NotifyTrade::getStatus() const {
  return status;
}
void NotifyTrade::setStatus (QString status) {
  this->status = status;
}

qlonglong NotifyTrade::getTid() const {
  return tid;
}
void NotifyTrade::setTid (qlonglong tid) {
  this->tid = tid;
}

QString NotifyTrade::getTradeMark() const {
  return tradeMark;
}
void NotifyTrade::setTradeMark (QString tradeMark) {
  this->tradeMark = tradeMark;
}

QString NotifyTrade::getType() const {
  return type;
}
void NotifyTrade::setType (QString type) {
  this->type = type;
}

qlonglong NotifyTrade::getUserId() const {
  return userId;
}
void NotifyTrade::setUserId (qlonglong userId) {
  this->userId = userId;
}


void NotifyTrade::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("oid")) {
  oid = responseParser->getNumByName("oid");
  }
  if (responseParser->hasName("payment")) {
  payment = responseParser->getStrByName("payment");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("trade_mark")) {
  tradeMark = responseParser->getStrByName("trade_mark");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

