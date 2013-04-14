#include <TaoApiCpp/request/InventoryOccupyApplyRequest.h>

QString InventoryOccupyApplyRequest::getApiMethodName() const {
  return "taobao.inventory.occupy.apply";
}

QString InventoryOccupyApplyRequest::getBizType() const {
  return bizType;
}
void InventoryOccupyApplyRequest::setBizType (QString bizType) {
  this->bizType = bizType;
  appParams.insert("biz_type", bizType);
}

QString InventoryOccupyApplyRequest::getBizUniqueCode() const {
  return bizUniqueCode;
}
void InventoryOccupyApplyRequest::setBizUniqueCode (QString bizUniqueCode) {
  this->bizUniqueCode = bizUniqueCode;
  appParams.insert("biz_unique_code", bizUniqueCode);
}

QString InventoryOccupyApplyRequest::getChannelFlags() const {
  return channelFlags;
}
void InventoryOccupyApplyRequest::setChannelFlags (QString channelFlags) {
  this->channelFlags = channelFlags;
  appParams.insert("channel_flags", channelFlags);
}

QString InventoryOccupyApplyRequest::getItems() const {
  return items;
}
void InventoryOccupyApplyRequest::setItems (QString items) {
  this->items = items;
  appParams.insert("items", items);
}

qlonglong InventoryOccupyApplyRequest::getOccupyTime() const {
  return occupyTime;
}
void InventoryOccupyApplyRequest::setOccupyTime (qlonglong occupyTime) {
  this->occupyTime = occupyTime;
  appParams.insert("occupy_time", QString::number(occupyTime));
}

QString InventoryOccupyApplyRequest::getOccupyType() const {
  return occupyType;
}
void InventoryOccupyApplyRequest::setOccupyType (QString occupyType) {
  this->occupyType = occupyType;
  appParams.insert("occupy_type", occupyType);
}

QString InventoryOccupyApplyRequest::getStoreCode() const {
  return storeCode;
}
void InventoryOccupyApplyRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



InventoryOccupyApplyResponse *InventoryOccupyApplyRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryOccupyApplyResponse *tmpResponse = new InventoryOccupyApplyResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
