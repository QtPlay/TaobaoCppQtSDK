#include <TaoApiCpp/request/SubuserDepartmentAddRequest.h>

QString SubuserDepartmentAddRequest::getApiMethodName() const {
  return "taobao.subuser.department.add";
}

QString SubuserDepartmentAddRequest::getDepartmentName() const {
  return departmentName;
}
void SubuserDepartmentAddRequest::setDepartmentName (QString departmentName) {
  this->departmentName = departmentName;
  appParams.insert("department_name", departmentName);
}

qlonglong SubuserDepartmentAddRequest::getParentId() const {
  return parentId;
}
void SubuserDepartmentAddRequest::setParentId (qlonglong parentId) {
  this->parentId = parentId;
  appParams.insert("parent_id", QString::number(parentId));
}

QString SubuserDepartmentAddRequest::getUserNick() const {
  return userNick;
}
void SubuserDepartmentAddRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDepartmentAddResponse *SubuserDepartmentAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDepartmentAddResponse *tmpResponse = new SubuserDepartmentAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
