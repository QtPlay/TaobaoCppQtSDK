#include <TaoApiCpp/request/InventoryInitialRequest.h>

QString InventoryInitialRequest::getApiMethodName() const {
  return "taobao.inventory.initial";
}

QString InventoryInitialRequest::getItems() const {
  return items;
}
void InventoryInitialRequest::setItems (QString items) {
  this->items = items;
  appParams.insert("items", items);
}

QString InventoryInitialRequest::getStoreCode() const {
  return storeCode;
}
void InventoryInitialRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



InventoryInitialResponse *InventoryInitialRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryInitialResponse *tmpResponse = new InventoryInitialResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
