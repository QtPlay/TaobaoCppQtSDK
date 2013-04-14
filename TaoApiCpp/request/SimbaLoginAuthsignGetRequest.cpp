#include <TaoApiCpp/request/SimbaLoginAuthsignGetRequest.h>

QString SimbaLoginAuthsignGetRequest::getApiMethodName() const {
  return "taobao.simba.login.authsign.get";
}

QString SimbaLoginAuthsignGetRequest::getNick() const {
  return nick;
}
void SimbaLoginAuthsignGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaLoginAuthsignGetResponse *SimbaLoginAuthsignGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaLoginAuthsignGetResponse *tmpResponse = new SimbaLoginAuthsignGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
