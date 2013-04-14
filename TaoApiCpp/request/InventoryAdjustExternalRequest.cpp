#include <TaoApiCpp/request/InventoryAdjustExternalRequest.h>

QString InventoryAdjustExternalRequest::getApiMethodName() const {
  return "taobao.inventory.adjust.external";
}

QString InventoryAdjustExternalRequest::getBizType() const {
  return bizType;
}
void InventoryAdjustExternalRequest::setBizType (QString bizType) {
  this->bizType = bizType;
  appParams.insert("biz_type", bizType);
}

QString InventoryAdjustExternalRequest::getBizUniqueCode() const {
  return bizUniqueCode;
}
void InventoryAdjustExternalRequest::setBizUniqueCode (QString bizUniqueCode) {
  this->bizUniqueCode = bizUniqueCode;
  appParams.insert("biz_unique_code", bizUniqueCode);
}

QString InventoryAdjustExternalRequest::getItems() const {
  return items;
}
void InventoryAdjustExternalRequest::setItems (QString items) {
  this->items = items;
  appParams.insert("items", items);
}

QString InventoryAdjustExternalRequest::getOccupyOperateCode() const {
  return occupyOperateCode;
}
void InventoryAdjustExternalRequest::setOccupyOperateCode (QString occupyOperateCode) {
  this->occupyOperateCode = occupyOperateCode;
  appParams.insert("occupy_operate_code", occupyOperateCode);
}

QDateTime InventoryAdjustExternalRequest::getOperateTime() const {
  return operateTime;
}
void InventoryAdjustExternalRequest::setOperateTime (QDateTime operateTime) {
  this->operateTime = operateTime;
  appParams.insert("operate_time", operateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString InventoryAdjustExternalRequest::getOperateType() const {
  return operateType;
}
void InventoryAdjustExternalRequest::setOperateType (QString operateType) {
  this->operateType = operateType;
  appParams.insert("operate_type", operateType);
}

QString InventoryAdjustExternalRequest::getReduceType() const {
  return reduceType;
}
void InventoryAdjustExternalRequest::setReduceType (QString reduceType) {
  this->reduceType = reduceType;
  appParams.insert("reduce_type", reduceType);
}

QString InventoryAdjustExternalRequest::getStoreCode() const {
  return storeCode;
}
void InventoryAdjustExternalRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



InventoryAdjustExternalResponse *InventoryAdjustExternalRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAdjustExternalResponse *tmpResponse = new InventoryAdjustExternalResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
