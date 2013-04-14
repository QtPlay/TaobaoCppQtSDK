#include <TaoApiCpp/request/InventoryOccupyCancelRequest.h>

QString InventoryOccupyCancelRequest::getApiMethodName() const {
  return "taobao.inventory.occupy.cancel";
}

QString InventoryOccupyCancelRequest::getBizUniqueCode() const {
  return bizUniqueCode;
}
void InventoryOccupyCancelRequest::setBizUniqueCode (QString bizUniqueCode) {
  this->bizUniqueCode = bizUniqueCode;
  appParams.insert("biz_unique_code", bizUniqueCode);
}

QString InventoryOccupyCancelRequest::getOperateCode() const {
  return operateCode;
}
void InventoryOccupyCancelRequest::setOperateCode (QString operateCode) {
  this->operateCode = operateCode;
  appParams.insert("operate_code", operateCode);
}

QString InventoryOccupyCancelRequest::getStoreCode() const {
  return storeCode;
}
void InventoryOccupyCancelRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



InventoryOccupyCancelResponse *InventoryOccupyCancelRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryOccupyCancelResponse *tmpResponse = new InventoryOccupyCancelResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
