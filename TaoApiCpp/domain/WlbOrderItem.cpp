#include <TaoApiCpp/domain/WlbOrderItem.h>
QString WlbOrderItem::getBatchRemark() const {
  return batchRemark;
}
void WlbOrderItem::setBatchRemark (QString batchRemark) {
  this->batchRemark = batchRemark;
}

QString WlbOrderItem::getConfirmStatus() const {
  return confirmStatus;
}
void WlbOrderItem::setConfirmStatus (QString confirmStatus) {
  this->confirmStatus = confirmStatus;
}

QString WlbOrderItem::getExtEntityId() const {
  return extEntityId;
}
void WlbOrderItem::setExtEntityId (QString extEntityId) {
  this->extEntityId = extEntityId;
}

QString WlbOrderItem::getExtEntityType() const {
  return extEntityType;
}
void WlbOrderItem::setExtEntityType (QString extEntityType) {
  this->extEntityType = extEntityType;
}

qlonglong WlbOrderItem::getId() const {
  return id;
}
void WlbOrderItem::setId (qlonglong id) {
  this->id = id;
}

QString WlbOrderItem::getInventoryType() const {
  return inventoryType;
}
void WlbOrderItem::setInventoryType (QString inventoryType) {
  this->inventoryType = inventoryType;
}

QString WlbOrderItem::getItemCode() const {
  return itemCode;
}
void WlbOrderItem::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
}

qlonglong WlbOrderItem::getItemId() const {
  return itemId;
}
void WlbOrderItem::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString WlbOrderItem::getItemName() const {
  return itemName;
}
void WlbOrderItem::setItemName (QString itemName) {
  this->itemName = itemName;
}

qlonglong WlbOrderItem::getItemPrice() const {
  return itemPrice;
}
void WlbOrderItem::setItemPrice (qlonglong itemPrice) {
  this->itemPrice = itemPrice;
}

QString WlbOrderItem::getOrderCode() const {
  return orderCode;
}
void WlbOrderItem::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

qlonglong WlbOrderItem::getOrderId() const {
  return orderId;
}
void WlbOrderItem::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
}

QString WlbOrderItem::getOrderSub2code() const {
  return orderSub2code;
}
void WlbOrderItem::setOrderSub2code (QString orderSub2code) {
  this->orderSub2code = orderSub2code;
}

QString WlbOrderItem::getOrderSubCode() const {
  return orderSubCode;
}
void WlbOrderItem::setOrderSubCode (QString orderSubCode) {
  this->orderSubCode = orderSubCode;
}

QString WlbOrderItem::getOrderSubType() const {
  return orderSubType;
}
void WlbOrderItem::setOrderSubType (QString orderSubType) {
  this->orderSubType = orderSubType;
}

QString WlbOrderItem::getPictureUrl() const {
  return pictureUrl;
}
void WlbOrderItem::setPictureUrl (QString pictureUrl) {
  this->pictureUrl = pictureUrl;
}

qlonglong WlbOrderItem::getPlanQuantity() const {
  return planQuantity;
}
void WlbOrderItem::setPlanQuantity (qlonglong planQuantity) {
  this->planQuantity = planQuantity;
}

qlonglong WlbOrderItem::getProviderTpId() const {
  return providerTpId;
}
void WlbOrderItem::setProviderTpId (qlonglong providerTpId) {
  this->providerTpId = providerTpId;
}

QString WlbOrderItem::getProviderTpNick() const {
  return providerTpNick;
}
void WlbOrderItem::setProviderTpNick (QString providerTpNick) {
  this->providerTpNick = providerTpNick;
}

qlonglong WlbOrderItem::getPublishVersion() const {
  return publishVersion;
}
void WlbOrderItem::setPublishVersion (qlonglong publishVersion) {
  this->publishVersion = publishVersion;
}

qlonglong WlbOrderItem::getRealQuantity() const {
  return realQuantity;
}
void WlbOrderItem::setRealQuantity (qlonglong realQuantity) {
  this->realQuantity = realQuantity;
}

QString WlbOrderItem::getRemark() const {
  return remark;
}
void WlbOrderItem::setRemark (QString remark) {
  this->remark = remark;
}

qlonglong WlbOrderItem::getUserId() const {
  return userId;
}
void WlbOrderItem::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString WlbOrderItem::getUserNick() const {
  return userNick;
}
void WlbOrderItem::setUserNick (QString userNick) {
  this->userNick = userNick;
}


void WlbOrderItem::parseResponse() {
  if (responseParser->hasName("batch_remark")) {
  batchRemark = responseParser->getStrByName("batch_remark");
  }
  if (responseParser->hasName("confirm_status")) {
  confirmStatus = responseParser->getStrByName("confirm_status");
  }
  if (responseParser->hasName("ext_entity_id")) {
  extEntityId = responseParser->getStrByName("ext_entity_id");
  }
  if (responseParser->hasName("ext_entity_type")) {
  extEntityType = responseParser->getStrByName("ext_entity_type");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("inventory_type")) {
  inventoryType = responseParser->getStrByName("inventory_type");
  }
  if (responseParser->hasName("item_code")) {
  itemCode = responseParser->getStrByName("item_code");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("item_name")) {
  itemName = responseParser->getStrByName("item_name");
  }
  if (responseParser->hasName("item_price")) {
  itemPrice = responseParser->getNumByName("item_price");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }
  if (responseParser->hasName("order_id")) {
  orderId = responseParser->getNumByName("order_id");
  }
  if (responseParser->hasName("order_sub_2code")) {
  orderSub2code = responseParser->getStrByName("order_sub_2code");
  }
  if (responseParser->hasName("order_sub_code")) {
  orderSubCode = responseParser->getStrByName("order_sub_code");
  }
  if (responseParser->hasName("order_sub_type")) {
  orderSubType = responseParser->getStrByName("order_sub_type");
  }
  if (responseParser->hasName("picture_url")) {
  pictureUrl = responseParser->getStrByName("picture_url");
  }
  if (responseParser->hasName("plan_quantity")) {
  planQuantity = responseParser->getNumByName("plan_quantity");
  }
  if (responseParser->hasName("provider_tp_id")) {
  providerTpId = responseParser->getNumByName("provider_tp_id");
  }
  if (responseParser->hasName("provider_tp_nick")) {
  providerTpNick = responseParser->getStrByName("provider_tp_nick");
  }
  if (responseParser->hasName("publish_version")) {
  publishVersion = responseParser->getNumByName("publish_version");
  }
  if (responseParser->hasName("real_quantity")) {
  realQuantity = responseParser->getNumByName("real_quantity");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }

}

