#include <TaoApiCpp/request/SellercenterRoleInfoGetRequest.h>

QString SellercenterRoleInfoGetRequest::getApiMethodName() const {
  return "taobao.sellercenter.role.info.get";
}

qlonglong SellercenterRoleInfoGetRequest::getRoleId() const {
  return roleId;
}
void SellercenterRoleInfoGetRequest::setRoleId (qlonglong roleId) {
  this->roleId = roleId;
  appParams.insert("role_id", QString::number(roleId));
}



SellercenterRoleInfoGetResponse *SellercenterRoleInfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterRoleInfoGetResponse *tmpResponse = new SellercenterRoleInfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
