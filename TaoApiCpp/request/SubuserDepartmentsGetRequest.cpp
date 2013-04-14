#include <TaoApiCpp/request/SubuserDepartmentsGetRequest.h>

QString SubuserDepartmentsGetRequest::getApiMethodName() const {
  return "taobao.subuser.departments.get";
}

QString SubuserDepartmentsGetRequest::getUserNick() const {
  return userNick;
}
void SubuserDepartmentsGetRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDepartmentsGetResponse *SubuserDepartmentsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDepartmentsGetResponse *tmpResponse = new SubuserDepartmentsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
