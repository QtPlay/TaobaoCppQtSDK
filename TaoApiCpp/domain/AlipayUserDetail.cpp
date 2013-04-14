#include <TaoApiCpp/domain/AlipayUserDetail.h>
QString AlipayUserDetail::getAlipayUserId() const {
  return alipayUserId;
}
void AlipayUserDetail::setAlipayUserId (QString alipayUserId) {
  this->alipayUserId = alipayUserId;
}

bool AlipayUserDetail::getCertified() const {
  return certified;
}
void AlipayUserDetail::setCertified (bool certified) {
  this->certified = certified;
}

QString AlipayUserDetail::getLogonId() const {
  return logonId;
}
void AlipayUserDetail::setLogonId (QString logonId) {
  this->logonId = logonId;
}

QString AlipayUserDetail::getRealName() const {
  return realName;
}
void AlipayUserDetail::setRealName (QString realName) {
  this->realName = realName;
}

QString AlipayUserDetail::getSex() const {
  return sex;
}
void AlipayUserDetail::setSex (QString sex) {
  this->sex = sex;
}

QString AlipayUserDetail::getUserStatus() const {
  return userStatus;
}
void AlipayUserDetail::setUserStatus (QString userStatus) {
  this->userStatus = userStatus;
}

QString AlipayUserDetail::getUserType() const {
  return userType;
}
void AlipayUserDetail::setUserType (QString userType) {
  this->userType = userType;
}


void AlipayUserDetail::parseResponse() {
  if (responseParser->hasName("alipay_user_id")) {
  alipayUserId = responseParser->getStrByName("alipay_user_id");
  }
  if (responseParser->hasName("certified")) {
  certified = responseParser->getBoolByName("certified");
  }
  if (responseParser->hasName("logon_id")) {
  logonId = responseParser->getStrByName("logon_id");
  }
  if (responseParser->hasName("real_name")) {
  realName = responseParser->getStrByName("real_name");
  }
  if (responseParser->hasName("sex")) {
  sex = responseParser->getStrByName("sex");
  }
  if (responseParser->hasName("user_status")) {
  userStatus = responseParser->getStrByName("user_status");
  }
  if (responseParser->hasName("user_type")) {
  userType = responseParser->getStrByName("user_type");
  }

}

