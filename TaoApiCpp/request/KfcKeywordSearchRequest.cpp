#include <TaoApiCpp/request/KfcKeywordSearchRequest.h>

QString KfcKeywordSearchRequest::getApiMethodName() const {
  return "taobao.kfc.keyword.search";
}

QString KfcKeywordSearchRequest::getApply() const {
  return apply;
}
void KfcKeywordSearchRequest::setApply (QString apply) {
  this->apply = apply;
  appParams.insert("apply", apply);
}

QString KfcKeywordSearchRequest::getContent() const {
  return content;
}
void KfcKeywordSearchRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

QString KfcKeywordSearchRequest::getNick() const {
  return nick;
}
void KfcKeywordSearchRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



KfcKeywordSearchResponse *KfcKeywordSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  KfcKeywordSearchResponse *tmpResponse = new KfcKeywordSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
