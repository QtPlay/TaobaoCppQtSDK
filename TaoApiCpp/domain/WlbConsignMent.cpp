#include <TaoApiCpp/domain/WlbConsignMent.h>
qlonglong WlbConsignMent::getId() const {
  return id;
}
void WlbConsignMent::setId (qlonglong id) {
  this->id = id;
}

qlonglong WlbConsignMent::getItemId() const {
  return itemId;
}
void WlbConsignMent::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

qlonglong WlbConsignMent::getNumber() const {
  return number;
}
void WlbConsignMent::setNumber (qlonglong number) {
  this->number = number;
}

qlonglong WlbConsignMent::getTgtItemId() const {
  return tgtItemId;
}
void WlbConsignMent::setTgtItemId (qlonglong tgtItemId) {
  this->tgtItemId = tgtItemId;
}

qlonglong WlbConsignMent::getTgtUserId() const {
  return tgtUserId;
}
void WlbConsignMent::setTgtUserId (qlonglong tgtUserId) {
  this->tgtUserId = tgtUserId;
}

qlonglong WlbConsignMent::getUserId() const {
  return userId;
}
void WlbConsignMent::setUserId (qlonglong userId) {
  this->userId = userId;
}


void WlbConsignMent::parseResponse() {
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("number")) {
  number = responseParser->getNumByName("number");
  }
  if (responseParser->hasName("tgt_item_id")) {
  tgtItemId = responseParser->getNumByName("tgt_item_id");
  }
  if (responseParser->hasName("tgt_user_id")) {
  tgtUserId = responseParser->getNumByName("tgt_user_id");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

