#include <TaoApiCpp/domain/WlbAuthorization.h>
QDateTime WlbAuthorization::getAuthorizeEndTime() const {
  return authorizeEndTime;
}
void WlbAuthorization::setAuthorizeEndTime (QDateTime authorizeEndTime) {
  this->authorizeEndTime = authorizeEndTime;
}

qlonglong WlbAuthorization::getAuthorizeId() const {
  return authorizeId;
}
void WlbAuthorization::setAuthorizeId (qlonglong authorizeId) {
  this->authorizeId = authorizeId;
}

QDateTime WlbAuthorization::getAuthorizeStartTime() const {
  return authorizeStartTime;
}
void WlbAuthorization::setAuthorizeStartTime (QDateTime authorizeStartTime) {
  this->authorizeStartTime = authorizeStartTime;
}

qlonglong WlbAuthorization::getConsignUserId() const {
  return consignUserId;
}
void WlbAuthorization::setConsignUserId (qlonglong consignUserId) {
  this->consignUserId = consignUserId;
}

qlonglong WlbAuthorization::getItemId() const {
  return itemId;
}
void WlbAuthorization::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString WlbAuthorization::getName() const {
  return name;
}
void WlbAuthorization::setName (QString name) {
  this->name = name;
}

qlonglong WlbAuthorization::getOwnerUserId() const {
  return ownerUserId;
}
void WlbAuthorization::setOwnerUserId (qlonglong ownerUserId) {
  this->ownerUserId = ownerUserId;
}

qlonglong WlbAuthorization::getQuantity() const {
  return quantity;
}
void WlbAuthorization::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QString WlbAuthorization::getRuleCode() const {
  return ruleCode;
}
void WlbAuthorization::setRuleCode (QString ruleCode) {
  this->ruleCode = ruleCode;
}

QString WlbAuthorization::getStatus() const {
  return status;
}
void WlbAuthorization::setStatus (QString status) {
  this->status = status;
}


void WlbAuthorization::parseResponse() {
  if (responseParser->hasName("authorize_end_time")) {
  authorizeEndTime = responseParser->getDateByName("authorize_end_time");
  }
  if (responseParser->hasName("authorize_id")) {
  authorizeId = responseParser->getNumByName("authorize_id");
  }
  if (responseParser->hasName("authorize_start_time")) {
  authorizeStartTime = responseParser->getDateByName("authorize_start_time");
  }
  if (responseParser->hasName("consign_user_id")) {
  consignUserId = responseParser->getNumByName("consign_user_id");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("owner_user_id")) {
  ownerUserId = responseParser->getNumByName("owner_user_id");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("rule_code")) {
  ruleCode = responseParser->getStrByName("rule_code");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }

}

