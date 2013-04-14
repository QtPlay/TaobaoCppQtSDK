#include <TaoApiCpp/domain/LoginUser.h>
QDateTime LoginUser::getCreateTime() const {
  return createTime;
}
void LoginUser::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QString LoginUser::getNick() const {
  return nick;
}
void LoginUser::setNick (QString nick) {
  this->nick = nick;
}

qlonglong LoginUser::getUserId() const {
  return userId;
}
void LoginUser::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString LoginUser::getUserType() const {
  return userType;
}
void LoginUser::setUserType (QString userType) {
  this->userType = userType;
}


void LoginUser::parseResponse() {
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_type")) {
  userType = responseParser->getStrByName("user_type");
  }

}

