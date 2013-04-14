#include <TaoApiCpp/request/InventoryAuthorizeRemoveRequest.h>

QString InventoryAuthorizeRemoveRequest::getApiMethodName() const {
  return "taobao.inventory.authorize.remove";
}

QString InventoryAuthorizeRemoveRequest::getAuthorizeCode() const {
  return authorizeCode;
}
void InventoryAuthorizeRemoveRequest::setAuthorizeCode (QString authorizeCode) {
  this->authorizeCode = authorizeCode;
  appParams.insert("authorize_code", authorizeCode);
}

QString InventoryAuthorizeRemoveRequest::getUserNickList() const {
  return userNickList;
}
void InventoryAuthorizeRemoveRequest::setUserNickList (QString userNickList) {
  this->userNickList = userNickList;
  appParams.insert("user_nick_list", userNickList);
}



InventoryAuthorizeRemoveResponse *InventoryAuthorizeRemoveRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAuthorizeRemoveResponse *tmpResponse = new InventoryAuthorizeRemoveResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
