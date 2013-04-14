#include <TaoApiCpp/request/InventoryInitialItemRequest.h>

QString InventoryInitialItemRequest::getApiMethodName() const {
  return "taobao.inventory.initial.item";
}

qlonglong InventoryInitialItemRequest::getScItemId() const {
  return scItemId;
}
void InventoryInitialItemRequest::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
  appParams.insert("sc_item_id", QString::number(scItemId));
}

QString InventoryInitialItemRequest::getStoreInventorys() const {
  return storeInventorys;
}
void InventoryInitialItemRequest::setStoreInventorys (QString storeInventorys) {
  this->storeInventorys = storeInventorys;
  appParams.insert("store_inventorys", storeInventorys);
}



InventoryInitialItemResponse *InventoryInitialItemRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryInitialItemResponse *tmpResponse = new InventoryInitialItemResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
