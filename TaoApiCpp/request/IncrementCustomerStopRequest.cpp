#include <TaoApiCpp/request/IncrementCustomerStopRequest.h>

QString IncrementCustomerStopRequest::getApiMethodName() const {
  return "taobao.increment.customer.stop";
}

QString IncrementCustomerStopRequest::getNick() const {
  return nick;
}
void IncrementCustomerStopRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString IncrementCustomerStopRequest::getType() const {
  return type;
}
void IncrementCustomerStopRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



IncrementCustomerStopResponse *IncrementCustomerStopRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementCustomerStopResponse *tmpResponse = new IncrementCustomerStopResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
