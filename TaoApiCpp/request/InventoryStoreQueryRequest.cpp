#include <TaoApiCpp/request/InventoryStoreQueryRequest.h>

QString InventoryStoreQueryRequest::getApiMethodName() const {
  return "taobao.inventory.store.query";
}

QString InventoryStoreQueryRequest::getStoreCode() const {
  return storeCode;
}
void InventoryStoreQueryRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



InventoryStoreQueryResponse *InventoryStoreQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryStoreQueryResponse *tmpResponse = new InventoryStoreQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
