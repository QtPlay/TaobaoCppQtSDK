#include <TaoApiCpp/response/WangwangEserviceLoginlogsGetResponse.h>

qlonglong WangwangEserviceLoginlogsGetResponse::getCount() const {
  return count;
}
void WangwangEserviceLoginlogsGetResponse::setCount (qlonglong count) {
  this->count = count;
}
QList<LoginLog> WangwangEserviceLoginlogsGetResponse::getLoginlogs() const {
  return loginlogs;
}
void WangwangEserviceLoginlogsGetResponse::setLoginlogs (QList<LoginLog> loginlogs) {
  this->loginlogs = loginlogs;
}
QString WangwangEserviceLoginlogsGetResponse::getUserId() const {
  return userId;
}
void WangwangEserviceLoginlogsGetResponse::setUserId (QString userId) {
  this->userId = userId;
}

void WangwangEserviceLoginlogsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("count")) {
  count = responseParser->getNumByName("count");
  }
  if (responseParser->hasName("loginlogs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("loginlogs");
  Parser *parser;
  foreach (parser, listParser) {
    LoginLog tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    loginlogs.append(tmp);
  }
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getStrByName("user_id");
  }

}

