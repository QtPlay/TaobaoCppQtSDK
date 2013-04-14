#include <TaoApiCpp/request/ShopGetRequest.h>

QString ShopGetRequest::getApiMethodName() const {
  return "taobao.shop.get";
}

QString ShopGetRequest::getFields() const {
  return fields;
}
void ShopGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ShopGetRequest::getNick() const {
  return nick;
}
void ShopGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



ShopGetResponse *ShopGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ShopGetResponse *tmpResponse = new ShopGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
