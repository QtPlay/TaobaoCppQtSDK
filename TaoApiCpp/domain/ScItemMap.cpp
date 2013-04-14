#include <TaoApiCpp/domain/ScItemMap.h>
qlonglong ScItemMap::getItemId() const {
  return itemId;
}
void ScItemMap::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

qlonglong ScItemMap::getMapType() const {
  return mapType;
}
void ScItemMap::setMapType (qlonglong mapType) {
  this->mapType = mapType;
}

qlonglong ScItemMap::getRelItemId() const {
  return relItemId;
}
void ScItemMap::setRelItemId (qlonglong relItemId) {
  this->relItemId = relItemId;
}

QString ScItemMap::getRelOuterCode() const {
  return relOuterCode;
}
void ScItemMap::setRelOuterCode (QString relOuterCode) {
  this->relOuterCode = relOuterCode;
}

qlonglong ScItemMap::getRelUserId() const {
  return relUserId;
}
void ScItemMap::setRelUserId (qlonglong relUserId) {
  this->relUserId = relUserId;
}

QString ScItemMap::getRelUserNick() const {
  return relUserNick;
}
void ScItemMap::setRelUserNick (QString relUserNick) {
  this->relUserNick = relUserNick;
}

qlonglong ScItemMap::getSkuId() const {
  return skuId;
}
void ScItemMap::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}

qlonglong ScItemMap::getUserId() const {
  return userId;
}
void ScItemMap::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString ScItemMap::getUserNick() const {
  return userNick;
}
void ScItemMap::setUserNick (QString userNick) {
  this->userNick = userNick;
}


void ScItemMap::parseResponse() {
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("map_type")) {
  mapType = responseParser->getNumByName("map_type");
  }
  if (responseParser->hasName("rel_item_id")) {
  relItemId = responseParser->getNumByName("rel_item_id");
  }
  if (responseParser->hasName("rel_outer_code")) {
  relOuterCode = responseParser->getStrByName("rel_outer_code");
  }
  if (responseParser->hasName("rel_user_id")) {
  relUserId = responseParser->getNumByName("rel_user_id");
  }
  if (responseParser->hasName("rel_user_nick")) {
  relUserNick = responseParser->getStrByName("rel_user_nick");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }

}

