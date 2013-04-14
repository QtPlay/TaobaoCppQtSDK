#include <TaoApiCpp/request/SimbaInsightWordsbaseGetRequest.h>

QString SimbaInsightWordsbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.wordsbase.get";
}

QString SimbaInsightWordsbaseGetRequest::getFilter() const {
  return filter;
}
void SimbaInsightWordsbaseGetRequest::setFilter (QString filter) {
  this->filter = filter;
  appParams.insert("filter", filter);
}

QString SimbaInsightWordsbaseGetRequest::getNick() const {
  return nick;
}
void SimbaInsightWordsbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaInsightWordsbaseGetRequest::getTime() const {
  return time;
}
void SimbaInsightWordsbaseGetRequest::setTime (QString time) {
  this->time = time;
  appParams.insert("time", time);
}

QString SimbaInsightWordsbaseGetRequest::getWords() const {
  return words;
}
void SimbaInsightWordsbaseGetRequest::setWords (QString words) {
  this->words = words;
  appParams.insert("words", words);
}



SimbaInsightWordsbaseGetResponse *SimbaInsightWordsbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightWordsbaseGetResponse *tmpResponse = new SimbaInsightWordsbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
