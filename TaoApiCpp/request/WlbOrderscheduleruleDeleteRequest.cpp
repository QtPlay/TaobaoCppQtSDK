#include <TaoApiCpp/request/WlbOrderscheduleruleDeleteRequest.h>

QString WlbOrderscheduleruleDeleteRequest::getApiMethodName() const {
  return "taobao.wlb.orderschedulerule.delete";
}

qlonglong WlbOrderscheduleruleDeleteRequest::getId() const {
  return id;
}
void WlbOrderscheduleruleDeleteRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

QString WlbOrderscheduleruleDeleteRequest::getUserNick() const {
  return userNick;
}
void WlbOrderscheduleruleDeleteRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



WlbOrderscheduleruleDeleteResponse *WlbOrderscheduleruleDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderscheduleruleDeleteResponse *tmpResponse = new WlbOrderscheduleruleDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
