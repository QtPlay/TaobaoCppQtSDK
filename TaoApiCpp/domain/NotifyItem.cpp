#include <TaoApiCpp/domain/NotifyItem.h>
QString NotifyItem::getChangedFields() const {
  return changedFields;
}
void NotifyItem::setChangedFields (QString changedFields) {
  this->changedFields = changedFields;
}

QString NotifyItem::getIid() const {
  return iid;
}
void NotifyItem::setIid (QString iid) {
  this->iid = iid;
}

qlonglong NotifyItem::getIncrement() const {
  return increment;
}
void NotifyItem::setIncrement (qlonglong increment) {
  this->increment = increment;
}

QDateTime NotifyItem::getModified() const {
  return modified;
}
void NotifyItem::setModified (QDateTime modified) {
  this->modified = modified;
}

QString NotifyItem::getNick() const {
  return nick;
}
void NotifyItem::setNick (QString nick) {
  this->nick = nick;
}

qlonglong NotifyItem::getNum() const {
  return num;
}
void NotifyItem::setNum (qlonglong num) {
  this->num = num;
}

qlonglong NotifyItem::getNumIid() const {
  return numIid;
}
void NotifyItem::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString NotifyItem::getPrice() const {
  return price;
}
void NotifyItem::setPrice (QString price) {
  this->price = price;
}

qlonglong NotifyItem::getSkuId() const {
  return skuId;
}
void NotifyItem::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}

qlonglong NotifyItem::getSkuNum() const {
  return skuNum;
}
void NotifyItem::setSkuNum (qlonglong skuNum) {
  this->skuNum = skuNum;
}

QString NotifyItem::getStatus() const {
  return status;
}
void NotifyItem::setStatus (QString status) {
  this->status = status;
}

QString NotifyItem::getTitle() const {
  return title;
}
void NotifyItem::setTitle (QString title) {
  this->title = title;
}

qlonglong NotifyItem::getUserId() const {
  return userId;
}
void NotifyItem::setUserId (qlonglong userId) {
  this->userId = userId;
}


void NotifyItem::parseResponse() {
  if (responseParser->hasName("changed_fields")) {
  changedFields = responseParser->getStrByName("changed_fields");
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getStrByName("iid");
  }
  if (responseParser->hasName("increment")) {
  increment = responseParser->getNumByName("increment");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("num")) {
  num = responseParser->getNumByName("num");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }
  if (responseParser->hasName("sku_num")) {
  skuNum = responseParser->getNumByName("sku_num");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

