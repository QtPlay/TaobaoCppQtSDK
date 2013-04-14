#include <TaoApiCpp/domain/Shop.h>
qlonglong Shop::getAllCount() const {
  return allCount;
}
void Shop::setAllCount (qlonglong allCount) {
  this->allCount = allCount;
}

QString Shop::getBulletin() const {
  return bulletin;
}
void Shop::setBulletin (QString bulletin) {
  this->bulletin = bulletin;
}

qlonglong Shop::getCid() const {
  return cid;
}
void Shop::setCid (qlonglong cid) {
  this->cid = cid;
}

QDateTime Shop::getCreated() const {
  return created;
}
void Shop::setCreated (QDateTime created) {
  this->created = created;
}

QString Shop::getDesc() const {
  return desc;
}
void Shop::setDesc (QString desc) {
  this->desc = desc;
}

QDateTime Shop::getModified() const {
  return modified;
}
void Shop::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Shop::getNick() const {
  return nick;
}
void Shop::setNick (QString nick) {
  this->nick = nick;
}

QString Shop::getPicPath() const {
  return picPath;
}
void Shop::setPicPath (QString picPath) {
  this->picPath = picPath;
}

qlonglong Shop::getRemainCount() const {
  return remainCount;
}
void Shop::setRemainCount (qlonglong remainCount) {
  this->remainCount = remainCount;
}

ShopScore Shop::getShopScore() const {
  return shopScore;
}
void Shop::setShopScore (ShopScore shopScore) {
  this->shopScore = shopScore;
}

qlonglong Shop::getSid() const {
  return sid;
}
void Shop::setSid (qlonglong sid) {
  this->sid = sid;
}

QString Shop::getTitle() const {
  return title;
}
void Shop::setTitle (QString title) {
  this->title = title;
}

qlonglong Shop::getUsedCount() const {
  return usedCount;
}
void Shop::setUsedCount (qlonglong usedCount) {
  this->usedCount = usedCount;
}


void Shop::parseResponse() {
  if (responseParser->hasName("all_count")) {
  allCount = responseParser->getNumByName("all_count");
  }
  if (responseParser->hasName("bulletin")) {
  bulletin = responseParser->getStrByName("bulletin");
  }
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("pic_path")) {
  picPath = responseParser->getStrByName("pic_path");
  }
  if (responseParser->hasName("remain_count")) {
  remainCount = responseParser->getNumByName("remain_count");
  }
  if (responseParser->hasName("shop_score")) {
  shopScore.setParser(responseParser->getObjectParser("shop_score"));
  shopScore.parseResponse();
  }
  if (responseParser->hasName("sid")) {
  sid = responseParser->getNumByName("sid");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("used_count")) {
  usedCount = responseParser->getNumByName("used_count");
  }

}

