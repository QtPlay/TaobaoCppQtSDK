#include <TaoApiCpp/request/UserGetRequest.h>

QString UserGetRequest::getApiMethodName() const {
  return "alipay.user.get";
}

QString UserGetRequest::getAuthToken() const {
  return authToken;
}
void UserGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString UserGetRequest::getFields() const {
  return fields;
}
void UserGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



UserGetResponse *UserGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserGetResponse *tmpResponse = new UserGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
