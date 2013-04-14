#include <TaoApiCpp/request/InventoryQueryRequest.h>

QString InventoryQueryRequest::getApiMethodName() const {
  return "taobao.inventory.query";
}

QString InventoryQueryRequest::getScItemCodes() const {
  return scItemCodes;
}
void InventoryQueryRequest::setScItemCodes (QString scItemCodes) {
  this->scItemCodes = scItemCodes;
  appParams.insert("sc_item_codes", scItemCodes);
}

QString InventoryQueryRequest::getScItemIds() const {
  return scItemIds;
}
void InventoryQueryRequest::setScItemIds (QString scItemIds) {
  this->scItemIds = scItemIds;
  appParams.insert("sc_item_ids", scItemIds);
}

QString InventoryQueryRequest::getSellerNick() const {
  return sellerNick;
}
void InventoryQueryRequest::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
  appParams.insert("seller_nick", sellerNick);
}

QString InventoryQueryRequest::getStoreCodes() const {
  return storeCodes;
}
void InventoryQueryRequest::setStoreCodes (QString storeCodes) {
  this->storeCodes = storeCodes;
  appParams.insert("store_codes", storeCodes);
}



InventoryQueryResponse *InventoryQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryQueryResponse *tmpResponse = new InventoryQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
