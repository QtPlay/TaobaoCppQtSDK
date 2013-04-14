#include <TaoApiCpp/request/SimbaKeywordsbykeywordidsGetRequest.h>

QString SimbaKeywordsbykeywordidsGetRequest::getApiMethodName() const {
  return "taobao.simba.keywordsbykeywordids.get";
}

qlonglong SimbaKeywordsbykeywordidsGetRequest::getKeywordIds() const {
  return keywordIds;
}
void SimbaKeywordsbykeywordidsGetRequest::setKeywordIds (qlonglong keywordIds) {
  this->keywordIds = keywordIds;
  appParams.insert("keyword_ids", QString::number(keywordIds));
}

QString SimbaKeywordsbykeywordidsGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordsbykeywordidsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordsbykeywordidsGetResponse *SimbaKeywordsbykeywordidsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsbykeywordidsGetResponse *tmpResponse = new SimbaKeywordsbykeywordidsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
