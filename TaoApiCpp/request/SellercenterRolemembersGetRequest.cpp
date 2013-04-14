#include <TaoApiCpp/request/SellercenterRolemembersGetRequest.h>

QString SellercenterRolemembersGetRequest::getApiMethodName() const {
  return "taobao.sellercenter.rolemembers.get";
}

qlonglong SellercenterRolemembersGetRequest::getRoleId() const {
  return roleId;
}
void SellercenterRolemembersGetRequest::setRoleId (qlonglong roleId) {
  this->roleId = roleId;
  appParams.insert("role_id", QString::number(roleId));
}



SellercenterRolemembersGetResponse *SellercenterRolemembersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterRolemembersGetResponse *tmpResponse = new SellercenterRolemembersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
