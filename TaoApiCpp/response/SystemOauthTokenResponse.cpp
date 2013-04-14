#include <TaoApiCpp/response/SystemOauthTokenResponse.h>

QString SystemOauthTokenResponse::getAccessToken() const {
  return accessToken;
}
void SystemOauthTokenResponse::setAccessToken (QString accessToken) {
  this->accessToken = accessToken;
}
QString SystemOauthTokenResponse::getAlipayUserId() const {
  return alipayUserId;
}
void SystemOauthTokenResponse::setAlipayUserId (QString alipayUserId) {
  this->alipayUserId = alipayUserId;
}
QString SystemOauthTokenResponse::getExpiresIn() const {
  return expiresIn;
}
void SystemOauthTokenResponse::setExpiresIn (QString expiresIn) {
  this->expiresIn = expiresIn;
}
QString SystemOauthTokenResponse::getReExpiresIn() const {
  return reExpiresIn;
}
void SystemOauthTokenResponse::setReExpiresIn (QString reExpiresIn) {
  this->reExpiresIn = reExpiresIn;
}
QString SystemOauthTokenResponse::getRefreshToken() const {
  return refreshToken;
}
void SystemOauthTokenResponse::setRefreshToken (QString refreshToken) {
  this->refreshToken = refreshToken;
}

void SystemOauthTokenResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("access_token")) {
  accessToken = responseParser->getStrByName("access_token");
  }
  if (responseParser->hasName("alipay_user_id")) {
  alipayUserId = responseParser->getStrByName("alipay_user_id");
  }
  if (responseParser->hasName("expires_in")) {
  expiresIn = responseParser->getStrByName("expires_in");
  }
  if (responseParser->hasName("re_expires_in")) {
  reExpiresIn = responseParser->getStrByName("re_expires_in");
  }
  if (responseParser->hasName("refresh_token")) {
  refreshToken = responseParser->getStrByName("refresh_token");
  }

}

