#include <TaoApiCpp/request/SubuserDutyDeleteRequest.h>

QString SubuserDutyDeleteRequest::getApiMethodName() const {
  return "taobao.subuser.duty.delete";
}

qlonglong SubuserDutyDeleteRequest::getDutyId() const {
  return dutyId;
}
void SubuserDutyDeleteRequest::setDutyId (qlonglong dutyId) {
  this->dutyId = dutyId;
  appParams.insert("duty_id", QString::number(dutyId));
}

QString SubuserDutyDeleteRequest::getUserNick() const {
  return userNick;
}
void SubuserDutyDeleteRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDutyDeleteResponse *SubuserDutyDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDutyDeleteResponse *tmpResponse = new SubuserDutyDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
