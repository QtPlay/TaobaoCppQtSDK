#include <TaoApiCpp/request/SellercenterSubuserPermissionsRolesGetRequest.h>

QString SellercenterSubuserPermissionsRolesGetRequest::getApiMethodName() const {
  return "taobao.sellercenter.subuser.permissions.roles.get";
}

QString SellercenterSubuserPermissionsRolesGetRequest::getNick() const {
  return nick;
}
void SellercenterSubuserPermissionsRolesGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SellercenterSubuserPermissionsRolesGetResponse *SellercenterSubuserPermissionsRolesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterSubuserPermissionsRolesGetResponse *tmpResponse = new SellercenterSubuserPermissionsRolesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
