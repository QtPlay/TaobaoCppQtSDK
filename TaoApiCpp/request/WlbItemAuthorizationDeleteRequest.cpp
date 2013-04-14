#include <TaoApiCpp/request/WlbItemAuthorizationDeleteRequest.h>

QString WlbItemAuthorizationDeleteRequest::getApiMethodName() const {
  return "taobao.wlb.item.authorization.delete";
}

qlonglong WlbItemAuthorizationDeleteRequest::getAuthorizeId() const {
  return authorizeId;
}
void WlbItemAuthorizationDeleteRequest::setAuthorizeId (qlonglong authorizeId) {
  this->authorizeId = authorizeId;
  appParams.insert("authorize_id", QString::number(authorizeId));
}



WlbItemAuthorizationDeleteResponse *WlbItemAuthorizationDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemAuthorizationDeleteResponse *tmpResponse = new WlbItemAuthorizationDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
