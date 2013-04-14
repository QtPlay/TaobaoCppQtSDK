#include <TaoApiCpp/request/InventoryAuthorizeGetRequest.h>

QString InventoryAuthorizeGetRequest::getApiMethodName() const {
  return "taobao.inventory.authorize.get";
}

QString InventoryAuthorizeGetRequest::getAuthorizeCode() const {
  return authorizeCode;
}
void InventoryAuthorizeGetRequest::setAuthorizeCode (QString authorizeCode) {
  this->authorizeCode = authorizeCode;
  appParams.insert("authorize_code", authorizeCode);
}

QString InventoryAuthorizeGetRequest::getUserNickList() const {
  return userNickList;
}
void InventoryAuthorizeGetRequest::setUserNickList (QString userNickList) {
  this->userNickList = userNickList;
  appParams.insert("user_nick_list", userNickList);
}



InventoryAuthorizeGetResponse *InventoryAuthorizeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAuthorizeGetResponse *tmpResponse = new InventoryAuthorizeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
