#include <TaoApiCpp/request/WlbInventorySyncRequest.h>

QString WlbInventorySyncRequest::getApiMethodName() const {
  return "taobao.wlb.inventory.sync";
}

qlonglong WlbInventorySyncRequest::getItemId() const {
  return itemId;
}
void WlbInventorySyncRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbInventorySyncRequest::getItemType() const {
  return itemType;
}
void WlbInventorySyncRequest::setItemType (QString itemType) {
  this->itemType = itemType;
  appParams.insert("item_type", itemType);
}

qlonglong WlbInventorySyncRequest::getQuantity() const {
  return quantity;
}
void WlbInventorySyncRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}



WlbInventorySyncResponse *WlbInventorySyncRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbInventorySyncResponse *tmpResponse = new WlbInventorySyncResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
