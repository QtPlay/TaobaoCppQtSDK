#include <TaoApiCpp/request/SellercenterRoleAddRequest.h>

QString SellercenterRoleAddRequest::getApiMethodName() const {
  return "taobao.sellercenter.role.add";
}

QString SellercenterRoleAddRequest::getDescription() const {
  return description;
}
void SellercenterRoleAddRequest::setDescription (QString description) {
  this->description = description;
  appParams.insert("description", description);
}

QString SellercenterRoleAddRequest::getName() const {
  return name;
}
void SellercenterRoleAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString SellercenterRoleAddRequest::getNick() const {
  return nick;
}
void SellercenterRoleAddRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SellercenterRoleAddRequest::getPermissionCodes() const {
  return permissionCodes;
}
void SellercenterRoleAddRequest::setPermissionCodes (QString permissionCodes) {
  this->permissionCodes = permissionCodes;
  appParams.insert("permission_codes", permissionCodes);
}



SellercenterRoleAddResponse *SellercenterRoleAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterRoleAddResponse *tmpResponse = new SellercenterRoleAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
