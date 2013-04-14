#include <TaoApiCpp/domain/TradeRate.h>
QString TradeRate::getContent() const {
  return content;
}
void TradeRate::setContent (QString content) {
  this->content = content;
}

QDateTime TradeRate::getCreated() const {
  return created;
}
void TradeRate::setCreated (QDateTime created) {
  this->created = created;
}

QString TradeRate::getItemPrice() const {
  return itemPrice;
}
void TradeRate::setItemPrice (QString itemPrice) {
  this->itemPrice = itemPrice;
}

QString TradeRate::getItemTitle() const {
  return itemTitle;
}
void TradeRate::setItemTitle (QString itemTitle) {
  this->itemTitle = itemTitle;
}

QString TradeRate::getNick() const {
  return nick;
}
void TradeRate::setNick (QString nick) {
  this->nick = nick;
}

qlonglong TradeRate::getNumIid() const {
  return numIid;
}
void TradeRate::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

qlonglong TradeRate::getOid() const {
  return oid;
}
void TradeRate::setOid (qlonglong oid) {
  this->oid = oid;
}

QString TradeRate::getRatedNick() const {
  return ratedNick;
}
void TradeRate::setRatedNick (QString ratedNick) {
  this->ratedNick = ratedNick;
}

QString TradeRate::getReply() const {
  return reply;
}
void TradeRate::setReply (QString reply) {
  this->reply = reply;
}

QString TradeRate::getResult() const {
  return result;
}
void TradeRate::setResult (QString result) {
  this->result = result;
}

QString TradeRate::getRole() const {
  return role;
}
void TradeRate::setRole (QString role) {
  this->role = role;
}

qlonglong TradeRate::getTid() const {
  return tid;
}
void TradeRate::setTid (qlonglong tid) {
  this->tid = tid;
}

bool TradeRate::getValidScore() const {
  return validScore;
}
void TradeRate::setValidScore (bool validScore) {
  this->validScore = validScore;
}


void TradeRate::parseResponse() {
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("item_price")) {
  itemPrice = responseParser->getStrByName("item_price");
  }
  if (responseParser->hasName("item_title")) {
  itemTitle = responseParser->getStrByName("item_title");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("oid")) {
  oid = responseParser->getNumByName("oid");
  }
  if (responseParser->hasName("rated_nick")) {
  ratedNick = responseParser->getStrByName("rated_nick");
  }
  if (responseParser->hasName("reply")) {
  reply = responseParser->getStrByName("reply");
  }
  if (responseParser->hasName("result")) {
  result = responseParser->getStrByName("result");
  }
  if (responseParser->hasName("role")) {
  role = responseParser->getStrByName("role");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("valid_score")) {
  validScore = responseParser->getBoolByName("valid_score");
  }

}

