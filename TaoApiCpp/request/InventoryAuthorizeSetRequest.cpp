#include <TaoApiCpp/request/InventoryAuthorizeSetRequest.h>

QString InventoryAuthorizeSetRequest::getApiMethodName() const {
  return "taobao.inventory.authorize.set";
}

QString InventoryAuthorizeSetRequest::getAuthorizeType() const {
  return authorizeType;
}
void InventoryAuthorizeSetRequest::setAuthorizeType (QString authorizeType) {
  this->authorizeType = authorizeType;
  appParams.insert("authorize_type", authorizeType);
}

QString InventoryAuthorizeSetRequest::getItems() const {
  return items;
}
void InventoryAuthorizeSetRequest::setItems (QString items) {
  this->items = items;
  appParams.insert("items", items);
}



InventoryAuthorizeSetResponse *InventoryAuthorizeSetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAuthorizeSetResponse *tmpResponse = new InventoryAuthorizeSetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
