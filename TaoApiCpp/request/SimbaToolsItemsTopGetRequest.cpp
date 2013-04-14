#include <TaoApiCpp/request/SimbaToolsItemsTopGetRequest.h>

QString SimbaToolsItemsTopGetRequest::getApiMethodName() const {
  return "taobao.simba.tools.items.top.get";
}

QString SimbaToolsItemsTopGetRequest::getIp() const {
  return ip;
}
void SimbaToolsItemsTopGetRequest::setIp (QString ip) {
  this->ip = ip;
  appParams.insert("ip", ip);
}

QString SimbaToolsItemsTopGetRequest::getKeyword() const {
  return keyword;
}
void SimbaToolsItemsTopGetRequest::setKeyword (QString keyword) {
  this->keyword = keyword;
  appParams.insert("keyword", keyword);
}

QString SimbaToolsItemsTopGetRequest::getNick() const {
  return nick;
}
void SimbaToolsItemsTopGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaToolsItemsTopGetResponse *SimbaToolsItemsTopGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaToolsItemsTopGetResponse *tmpResponse = new SimbaToolsItemsTopGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
