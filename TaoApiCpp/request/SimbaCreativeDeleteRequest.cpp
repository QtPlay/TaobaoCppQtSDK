#include <TaoApiCpp/request/SimbaCreativeDeleteRequest.h>

QString SimbaCreativeDeleteRequest::getApiMethodName() const {
  return "taobao.simba.creative.delete";
}

qlonglong SimbaCreativeDeleteRequest::getCreativeId() const {
  return creativeId;
}
void SimbaCreativeDeleteRequest::setCreativeId (qlonglong creativeId) {
  this->creativeId = creativeId;
  appParams.insert("creative_id", QString::number(creativeId));
}

QString SimbaCreativeDeleteRequest::getNick() const {
  return nick;
}
void SimbaCreativeDeleteRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCreativeDeleteResponse *SimbaCreativeDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativeDeleteResponse *tmpResponse = new SimbaCreativeDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
