#include <TaoApiCpp/response/WidgetLoginstatusGetResponse.h>

bool WidgetLoginstatusGetResponse::getIsLogin() const {
  return isLogin;
}
void WidgetLoginstatusGetResponse::setIsLogin (bool isLogin) {
  this->isLogin = isLogin;
}
QString WidgetLoginstatusGetResponse::getNick() const {
  return nick;
}
void WidgetLoginstatusGetResponse::setNick (QString nick) {
  this->nick = nick;
}
QString WidgetLoginstatusGetResponse::getUserId() const {
  return userId;
}
void WidgetLoginstatusGetResponse::setUserId (QString userId) {
  this->userId = userId;
}

void WidgetLoginstatusGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_login")) {
  isLogin = responseParser->getBoolByName("is_login");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getStrByName("user_id");
  }

}

