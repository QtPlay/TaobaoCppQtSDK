#include <TaoApiCpp/request/SystemOauthTokenRequest.h>

QString SystemOauthTokenRequest::getApiMethodName() const {
  return "alipay.system.oauth.token";
}

QString SystemOauthTokenRequest::getCode() const {
  return code;
}
void SystemOauthTokenRequest::setCode (QString code) {
  this->code = code;
  appParams.insert("code", code);
}

QString SystemOauthTokenRequest::getGrantType() const {
  return grantType;
}
void SystemOauthTokenRequest::setGrantType (QString grantType) {
  this->grantType = grantType;
  appParams.insert("grant_type", grantType);
}

QString SystemOauthTokenRequest::getRefreshToken() const {
  return refreshToken;
}
void SystemOauthTokenRequest::setRefreshToken (QString refreshToken) {
  this->refreshToken = refreshToken;
  appParams.insert("refresh_token", refreshToken);
}



SystemOauthTokenResponse *SystemOauthTokenRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SystemOauthTokenResponse *tmpResponse = new SystemOauthTokenResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
