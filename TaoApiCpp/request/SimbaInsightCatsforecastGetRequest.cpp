#include <TaoApiCpp/request/SimbaInsightCatsforecastGetRequest.h>

QString SimbaInsightCatsforecastGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.catsforecast.get";
}

QString SimbaInsightCatsforecastGetRequest::getNick() const {
  return nick;
}
void SimbaInsightCatsforecastGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaInsightCatsforecastGetRequest::getWords() const {
  return words;
}
void SimbaInsightCatsforecastGetRequest::setWords (QString words) {
  this->words = words;
  appParams.insert("words", words);
}



SimbaInsightCatsforecastGetResponse *SimbaInsightCatsforecastGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightCatsforecastGetResponse *tmpResponse = new SimbaInsightCatsforecastGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
