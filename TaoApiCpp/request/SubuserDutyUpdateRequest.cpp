#include <TaoApiCpp/request/SubuserDutyUpdateRequest.h>

QString SubuserDutyUpdateRequest::getApiMethodName() const {
  return "taobao.subuser.duty.update";
}

qlonglong SubuserDutyUpdateRequest::getDutyId() const {
  return dutyId;
}
void SubuserDutyUpdateRequest::setDutyId (qlonglong dutyId) {
  this->dutyId = dutyId;
  appParams.insert("duty_id", QString::number(dutyId));
}

qlonglong SubuserDutyUpdateRequest::getDutyLevel() const {
  return dutyLevel;
}
void SubuserDutyUpdateRequest::setDutyLevel (qlonglong dutyLevel) {
  this->dutyLevel = dutyLevel;
  appParams.insert("duty_level", QString::number(dutyLevel));
}

QString SubuserDutyUpdateRequest::getDutyName() const {
  return dutyName;
}
void SubuserDutyUpdateRequest::setDutyName (QString dutyName) {
  this->dutyName = dutyName;
  appParams.insert("duty_name", dutyName);
}

QString SubuserDutyUpdateRequest::getUserNick() const {
  return userNick;
}
void SubuserDutyUpdateRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDutyUpdateResponse *SubuserDutyUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDutyUpdateResponse *tmpResponse = new SubuserDutyUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
