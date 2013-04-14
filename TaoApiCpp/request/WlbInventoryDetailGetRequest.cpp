#include <TaoApiCpp/request/WlbInventoryDetailGetRequest.h>

QString WlbInventoryDetailGetRequest::getApiMethodName() const {
  return "taobao.wlb.inventory.detail.get";
}

QString WlbInventoryDetailGetRequest::getInventoryTypeList() const {
  return inventoryTypeList;
}
void WlbInventoryDetailGetRequest::setInventoryTypeList (QString inventoryTypeList) {
  this->inventoryTypeList = inventoryTypeList;
  appParams.insert("inventory_type_list", inventoryTypeList);
}

qlonglong WlbInventoryDetailGetRequest::getItemId() const {
  return itemId;
}
void WlbInventoryDetailGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbInventoryDetailGetRequest::getStoreCode() const {
  return storeCode;
}
void WlbInventoryDetailGetRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



WlbInventoryDetailGetResponse *WlbInventoryDetailGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbInventoryDetailGetResponse *tmpResponse = new WlbInventoryDetailGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
