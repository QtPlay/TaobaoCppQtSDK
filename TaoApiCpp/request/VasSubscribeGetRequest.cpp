#include <TaoApiCpp/request/VasSubscribeGetRequest.h>

QString VasSubscribeGetRequest::getApiMethodName() const {
  return "taobao.vas.subscribe.get";
}

QString VasSubscribeGetRequest::getArticleCode() const {
  return articleCode;
}
void VasSubscribeGetRequest::setArticleCode (QString articleCode) {
  this->articleCode = articleCode;
  appParams.insert("article_code", articleCode);
}

QString VasSubscribeGetRequest::getNick() const {
  return nick;
}
void VasSubscribeGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



VasSubscribeGetResponse *VasSubscribeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  VasSubscribeGetResponse *tmpResponse = new VasSubscribeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
