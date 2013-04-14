#include <TaoApiCpp/request/SimbaInsightWordsanalysisGetRequest.h>

QString SimbaInsightWordsanalysisGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.wordsanalysis.get";
}

QString SimbaInsightWordsanalysisGetRequest::getNick() const {
  return nick;
}
void SimbaInsightWordsanalysisGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaInsightWordsanalysisGetRequest::getStu() const {
  return stu;
}
void SimbaInsightWordsanalysisGetRequest::setStu (QString stu) {
  this->stu = stu;
  appParams.insert("stu", stu);
}

QString SimbaInsightWordsanalysisGetRequest::getWords() const {
  return words;
}
void SimbaInsightWordsanalysisGetRequest::setWords (QString words) {
  this->words = words;
  appParams.insert("words", words);
}



SimbaInsightWordsanalysisGetResponse *SimbaInsightWordsanalysisGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightWordsanalysisGetResponse *tmpResponse = new SimbaInsightWordsanalysisGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
