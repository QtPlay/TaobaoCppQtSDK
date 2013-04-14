#include <TaoApiCpp/request/SubuserDepartmentUpdateRequest.h>

QString SubuserDepartmentUpdateRequest::getApiMethodName() const {
  return "taobao.subuser.department.update";
}

qlonglong SubuserDepartmentUpdateRequest::getDepartmentId() const {
  return departmentId;
}
void SubuserDepartmentUpdateRequest::setDepartmentId (qlonglong departmentId) {
  this->departmentId = departmentId;
  appParams.insert("department_id", QString::number(departmentId));
}

QString SubuserDepartmentUpdateRequest::getDepartmentName() const {
  return departmentName;
}
void SubuserDepartmentUpdateRequest::setDepartmentName (QString departmentName) {
  this->departmentName = departmentName;
  appParams.insert("department_name", departmentName);
}

qlonglong SubuserDepartmentUpdateRequest::getParentId() const {
  return parentId;
}
void SubuserDepartmentUpdateRequest::setParentId (qlonglong parentId) {
  this->parentId = parentId;
  appParams.insert("parent_id", QString::number(parentId));
}

QString SubuserDepartmentUpdateRequest::getUserNick() const {
  return userNick;
}
void SubuserDepartmentUpdateRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDepartmentUpdateResponse *SubuserDepartmentUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDepartmentUpdateResponse *tmpResponse = new SubuserDepartmentUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
