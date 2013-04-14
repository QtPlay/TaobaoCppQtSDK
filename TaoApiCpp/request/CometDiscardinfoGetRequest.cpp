#include <TaoApiCpp/request/CometDiscardinfoGetRequest.h>

QString CometDiscardinfoGetRequest::getApiMethodName() const {
  return "taobao.comet.discardinfo.get";
}

QDateTime CometDiscardinfoGetRequest::getEnd() const {
  return end;
}
void CometDiscardinfoGetRequest::setEnd (QDateTime end) {
  this->end = end;
  appParams.insert("end", end.toString("yyyy-MM-dd hh:mm:ss"));
}

QString CometDiscardinfoGetRequest::getNick() const {
  return nick;
}
void CometDiscardinfoGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QDateTime CometDiscardinfoGetRequest::getStart() const {
  return start;
}
void CometDiscardinfoGetRequest::setStart (QDateTime start) {
  this->start = start;
  appParams.insert("start", start.toString("yyyy-MM-dd hh:mm:ss"));
}

QString CometDiscardinfoGetRequest::getTypes() const {
  return types;
}
void CometDiscardinfoGetRequest::setTypes (QString types) {
  this->types = types;
  appParams.insert("types", types);
}

qlonglong CometDiscardinfoGetRequest::getUserId() const {
  return userId;
}
void CometDiscardinfoGetRequest::setUserId (qlonglong userId) {
  this->userId = userId;
  appParams.insert("user_id", QString::number(userId));
}



CometDiscardinfoGetResponse *CometDiscardinfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CometDiscardinfoGetResponse *tmpResponse = new CometDiscardinfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
