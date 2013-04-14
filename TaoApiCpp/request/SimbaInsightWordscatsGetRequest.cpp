#include <TaoApiCpp/request/SimbaInsightWordscatsGetRequest.h>

QString SimbaInsightWordscatsGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.wordscats.get";
}

QString SimbaInsightWordscatsGetRequest::getFilter() const {
  return filter;
}
void SimbaInsightWordscatsGetRequest::setFilter (QString filter) {
  this->filter = filter;
  appParams.insert("filter", filter);
}

QString SimbaInsightWordscatsGetRequest::getNick() const {
  return nick;
}
void SimbaInsightWordscatsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaInsightWordscatsGetRequest::getWordCategories() const {
  return wordCategories;
}
void SimbaInsightWordscatsGetRequest::setWordCategories (QString wordCategories) {
  this->wordCategories = wordCategories;
  appParams.insert("word_categories", wordCategories);
}



SimbaInsightWordscatsGetResponse *SimbaInsightWordscatsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightWordscatsGetResponse *tmpResponse = new SimbaInsightWordscatsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
