#include <TaoApiCpp/request/SubuserDepartmentDeleteRequest.h>

QString SubuserDepartmentDeleteRequest::getApiMethodName() const {
  return "taobao.subuser.department.delete";
}

qlonglong SubuserDepartmentDeleteRequest::getDepartmentId() const {
  return departmentId;
}
void SubuserDepartmentDeleteRequest::setDepartmentId (qlonglong departmentId) {
  this->departmentId = departmentId;
  appParams.insert("department_id", QString::number(departmentId));
}

QString SubuserDepartmentDeleteRequest::getUserNick() const {
  return userNick;
}
void SubuserDepartmentDeleteRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDepartmentDeleteResponse *SubuserDepartmentDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDepartmentDeleteResponse *tmpResponse = new SubuserDepartmentDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
