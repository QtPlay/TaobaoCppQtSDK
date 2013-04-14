#include <TaoApiCpp/domain/NotifyRefund.h>
QString NotifyRefund::getBuyerNick() const {
  return buyerNick;
}
void NotifyRefund::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QDateTime NotifyRefund::getModified() const {
  return modified;
}
void NotifyRefund::setModified (QDateTime modified) {
  this->modified = modified;
}

QString NotifyRefund::getNick() const {
  return nick;
}
void NotifyRefund::setNick (QString nick) {
  this->nick = nick;
}

qlonglong NotifyRefund::getOid() const {
  return oid;
}
void NotifyRefund::setOid (qlonglong oid) {
  this->oid = oid;
}

QString NotifyRefund::getRefundFee() const {
  return refundFee;
}
void NotifyRefund::setRefundFee (QString refundFee) {
  this->refundFee = refundFee;
}

qlonglong NotifyRefund::getRid() const {
  return rid;
}
void NotifyRefund::setRid (qlonglong rid) {
  this->rid = rid;
}

QString NotifyRefund::getSellerNick() const {
  return sellerNick;
}
void NotifyRefund::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString NotifyRefund::getStatus() const {
  return status;
}
void NotifyRefund::setStatus (QString status) {
  this->status = status;
}

qlonglong NotifyRefund::getTid() const {
  return tid;
}
void NotifyRefund::setTid (qlonglong tid) {
  this->tid = tid;
}

qlonglong NotifyRefund::getUserId() const {
  return userId;
}
void NotifyRefund::setUserId (qlonglong userId) {
  this->userId = userId;
}


void NotifyRefund::parseResponse() {
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
  if (responseParser->hasName("refund_fee")) {
  refundFee = responseParser->getStrByName("refund_fee");
  }
  if (responseParser->hasName("rid")) {
  rid = responseParser->getNumByName("rid");
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
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

