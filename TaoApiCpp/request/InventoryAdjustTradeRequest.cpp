#include <TaoApiCpp/request/InventoryAdjustTradeRequest.h>

QString InventoryAdjustTradeRequest::getApiMethodName() const {
  return "taobao.inventory.adjust.trade";
}

QString InventoryAdjustTradeRequest::getBizUniqueCode() const {
  return bizUniqueCode;
}
void InventoryAdjustTradeRequest::setBizUniqueCode (QString bizUniqueCode) {
  this->bizUniqueCode = bizUniqueCode;
  appParams.insert("biz_unique_code", bizUniqueCode);
}

QString InventoryAdjustTradeRequest::getItems() const {
  return items;
}
void InventoryAdjustTradeRequest::setItems (QString items) {
  this->items = items;
  appParams.insert("items", items);
}

QDateTime InventoryAdjustTradeRequest::getOperateTime() const {
  return operateTime;
}
void InventoryAdjustTradeRequest::setOperateTime (QDateTime operateTime) {
  this->operateTime = operateTime;
  appParams.insert("operate_time", operateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString InventoryAdjustTradeRequest::getTbOrderType() const {
  return tbOrderType;
}
void InventoryAdjustTradeRequest::setTbOrderType (QString tbOrderType) {
  this->tbOrderType = tbOrderType;
  appParams.insert("tb_order_type", tbOrderType);
}



InventoryAdjustTradeResponse *InventoryAdjustTradeRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAdjustTradeResponse *tmpResponse = new InventoryAdjustTradeResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
