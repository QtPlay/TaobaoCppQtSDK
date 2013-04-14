#include <TaoApiCpp/domain/WlbItemInventoryLog.h>
QString WlbItemInventoryLog::getBatchCode() const {
  return batchCode;
}
void WlbItemInventoryLog::setBatchCode (QString batchCode) {
  this->batchCode = batchCode;
}

QDateTime WlbItemInventoryLog::getGmtCreate() const {
  return gmtCreate;
}
void WlbItemInventoryLog::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

qlonglong WlbItemInventoryLog::getId() const {
  return id;
}
void WlbItemInventoryLog::setId (qlonglong id) {
  this->id = id;
}

QString WlbItemInventoryLog::getInventType() const {
  return inventType;
}
void WlbItemInventoryLog::setInventType (QString inventType) {
  this->inventType = inventType;
}

qlonglong WlbItemInventoryLog::getItemId() const {
  return itemId;
}
void WlbItemInventoryLog::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString WlbItemInventoryLog::getOpType() const {
  return opType;
}
void WlbItemInventoryLog::setOpType (QString opType) {
  this->opType = opType;
}

qlonglong WlbItemInventoryLog::getOpUserId() const {
  return opUserId;
}
void WlbItemInventoryLog::setOpUserId (qlonglong opUserId) {
  this->opUserId = opUserId;
}

QString WlbItemInventoryLog::getOrderCode() const {
  return orderCode;
}
void WlbItemInventoryLog::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

qlonglong WlbItemInventoryLog::getOrderItemId() const {
  return orderItemId;
}
void WlbItemInventoryLog::setOrderItemId (qlonglong orderItemId) {
  this->orderItemId = orderItemId;
}

qlonglong WlbItemInventoryLog::getQuantity() const {
  return quantity;
}
void WlbItemInventoryLog::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QString WlbItemInventoryLog::getRemark() const {
  return remark;
}
void WlbItemInventoryLog::setRemark (QString remark) {
  this->remark = remark;
}

qlonglong WlbItemInventoryLog::getResultQuantity() const {
  return resultQuantity;
}
void WlbItemInventoryLog::setResultQuantity (qlonglong resultQuantity) {
  this->resultQuantity = resultQuantity;
}

QString WlbItemInventoryLog::getStoreCode() const {
  return storeCode;
}
void WlbItemInventoryLog::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

qlonglong WlbItemInventoryLog::getUserId() const {
  return userId;
}
void WlbItemInventoryLog::setUserId (qlonglong userId) {
  this->userId = userId;
}


void WlbItemInventoryLog::parseResponse() {
  if (responseParser->hasName("batch_code")) {
  batchCode = responseParser->getStrByName("batch_code");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("invent_type")) {
  inventType = responseParser->getStrByName("invent_type");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("op_type")) {
  opType = responseParser->getStrByName("op_type");
  }
  if (responseParser->hasName("op_user_id")) {
  opUserId = responseParser->getNumByName("op_user_id");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }
  if (responseParser->hasName("order_item_id")) {
  orderItemId = responseParser->getNumByName("order_item_id");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("result_quantity")) {
  resultQuantity = responseParser->getNumByName("result_quantity");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

