#include <TaoApiCpp/request/SubuserFullinfoGetRequest.h>

QString SubuserFullinfoGetRequest::getApiMethodName() const {
  return "taobao.subuser.fullinfo.get";
}

QString SubuserFullinfoGetRequest::getFields() const {
  return fields;
}
void SubuserFullinfoGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong SubuserFullinfoGetRequest::getSubId() const {
  return subId;
}
void SubuserFullinfoGetRequest::setSubId (qlonglong subId) {
  this->subId = subId;
  appParams.insert("sub_id", QString::number(subId));
}

QString SubuserFullinfoGetRequest::getSubNick() const {
  return subNick;
}
void SubuserFullinfoGetRequest::setSubNick (QString subNick) {
  this->subNick = subNick;
  appParams.insert("sub_nick", subNick);
}



SubuserFullinfoGetResponse *SubuserFullinfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserFullinfoGetResponse *tmpResponse = new SubuserFullinfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
