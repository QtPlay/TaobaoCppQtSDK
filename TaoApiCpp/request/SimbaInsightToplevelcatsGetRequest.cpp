#include <TaoApiCpp/request/SimbaInsightToplevelcatsGetRequest.h>

QString SimbaInsightToplevelcatsGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.toplevelcats.get";
}

QString SimbaInsightToplevelcatsGetRequest::getNick() const {
  return nick;
}
void SimbaInsightToplevelcatsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaInsightToplevelcatsGetResponse *SimbaInsightToplevelcatsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightToplevelcatsGetResponse *tmpResponse = new SimbaInsightToplevelcatsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
