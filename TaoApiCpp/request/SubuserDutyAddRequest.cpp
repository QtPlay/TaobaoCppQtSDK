#include <TaoApiCpp/request/SubuserDutyAddRequest.h>

QString SubuserDutyAddRequest::getApiMethodName() const {
  return "taobao.subuser.duty.add";
}

qlonglong SubuserDutyAddRequest::getDutyLevel() const {
  return dutyLevel;
}
void SubuserDutyAddRequest::setDutyLevel (qlonglong dutyLevel) {
  this->dutyLevel = dutyLevel;
  appParams.insert("duty_level", QString::number(dutyLevel));
}

QString SubuserDutyAddRequest::getDutyName() const {
  return dutyName;
}
void SubuserDutyAddRequest::setDutyName (QString dutyName) {
  this->dutyName = dutyName;
  appParams.insert("duty_name", dutyName);
}

QString SubuserDutyAddRequest::getUserNick() const {
  return userNick;
}
void SubuserDutyAddRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDutyAddResponse *SubuserDutyAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDutyAddResponse *tmpResponse = new SubuserDutyAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
