#include <TaoApiCpp/request/UsersGetRequest.h>

QString UsersGetRequest::getApiMethodName() const {
  return "taobao.users.get";
}

QString UsersGetRequest::getFields() const {
  return fields;
}
void UsersGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString UsersGetRequest::getNicks() const {
  return nicks;
}
void UsersGetRequest::setNicks (QString nicks) {
  this->nicks = nicks;
  appParams.insert("nicks", nicks);
}



UsersGetResponse *UsersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UsersGetResponse *tmpResponse = new UsersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
