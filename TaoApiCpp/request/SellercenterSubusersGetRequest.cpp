#include <TaoApiCpp/request/SellercenterSubusersGetRequest.h>

QString SellercenterSubusersGetRequest::getApiMethodName() const {
  return "taobao.sellercenter.subusers.get";
}

QString SellercenterSubusersGetRequest::getNick() const {
  return nick;
}
void SellercenterSubusersGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SellercenterSubusersGetResponse *SellercenterSubusersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercenterSubusersGetResponse *tmpResponse = new SellercenterSubusersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
