#include <TaoApiCpp/request/InventoryAuthorizeRemoveallRequest.h>

QString InventoryAuthorizeRemoveallRequest::getApiMethodName() const {
  return "taobao.inventory.authorize.removeall";
}

QString InventoryAuthorizeRemoveallRequest::getScItemIdList() const {
  return scItemIdList;
}
void InventoryAuthorizeRemoveallRequest::setScItemIdList (QString scItemIdList) {
  this->scItemIdList = scItemIdList;
  appParams.insert("sc_item_id_list", scItemIdList);
}

QString InventoryAuthorizeRemoveallRequest::getUserNickList() const {
  return userNickList;
}
void InventoryAuthorizeRemoveallRequest::setUserNickList (QString userNickList) {
  this->userNickList = userNickList;
  appParams.insert("user_nick_list", userNickList);
}



InventoryAuthorizeRemoveallResponse *InventoryAuthorizeRemoveallRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAuthorizeRemoveallResponse *tmpResponse = new InventoryAuthorizeRemoveallResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
