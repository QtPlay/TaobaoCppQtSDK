#include <TaoApiCpp/request/SellercatsListGetRequest.h>

QString SellercatsListGetRequest::getApiMethodName() const {
  return "taobao.sellercats.list.get";
}

QString SellercatsListGetRequest::getNick() const {
  return nick;
}
void SellercatsListGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SellercatsListGetResponse *SellercatsListGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercatsListGetResponse *tmpResponse = new SellercatsListGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
