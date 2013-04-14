#include <TaoApiCpp/request/SellercenterUserPermissionsGetRequest.h>

QString SellercenterUserPermissionsGetRequest::getApiMethodName() const {
  return "taobao.sellercenter.user.permissions.get";
}

QString SellercenterUserPermissionsGetRequest::getNick() const {
  return nick;
}
void SellercenterUserPermissionsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SellercenterUserPermissionsGetResponse *SellercenterUserPermissionsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterUserPermissionsGetResponse *tmpResponse = new SellercenterUserPermissionsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
