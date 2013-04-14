#include <TaoApiCpp/request/SimbaAccountBalanceGetRequest.h>

QString SimbaAccountBalanceGetRequest::getApiMethodName() const {
  return "taobao.simba.account.balance.get";
}

QString SimbaAccountBalanceGetRequest::getNick() const {
  return nick;
}
void SimbaAccountBalanceGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAccountBalanceGetResponse *SimbaAccountBalanceGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAccountBalanceGetResponse *tmpResponse = new SimbaAccountBalanceGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
