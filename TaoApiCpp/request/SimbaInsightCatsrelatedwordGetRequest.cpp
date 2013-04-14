#include <TaoApiCpp/request/SimbaInsightCatsrelatedwordGetRequest.h>

QString SimbaInsightCatsrelatedwordGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.catsrelatedword.get";
}

QString SimbaInsightCatsrelatedwordGetRequest::getNick() const {
  return nick;
}
void SimbaInsightCatsrelatedwordGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaInsightCatsrelatedwordGetRequest::getResultNum() const {
  return resultNum;
}
void SimbaInsightCatsrelatedwordGetRequest::setResultNum (qlonglong resultNum) {
  this->resultNum = resultNum;
  appParams.insert("result_num", QString::number(resultNum));
}

QString SimbaInsightCatsrelatedwordGetRequest::getWords() const {
  return words;
}
void SimbaInsightCatsrelatedwordGetRequest::setWords (QString words) {
  this->words = words;
  appParams.insert("words", words);
}



SimbaInsightCatsrelatedwordGetResponse *SimbaInsightCatsrelatedwordGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightCatsrelatedwordGetResponse *tmpResponse = new SimbaInsightCatsrelatedwordGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
