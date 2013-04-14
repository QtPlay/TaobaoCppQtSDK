#include <TaoApiCpp/request/SellercenterRolesGetRequest.h>

QString SellercenterRolesGetRequest::getApiMethodName() const {
  return "taobao.sellercenter.roles.get";
}

QString SellercenterRolesGetRequest::getNick() const {
  return nick;
}
void SellercenterRolesGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SellercenterRolesGetResponse *SellercenterRolesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterRolesGetResponse *tmpResponse = new SellercenterRolesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
