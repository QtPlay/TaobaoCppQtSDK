#include <TaoApiCpp/request/SimbaKeywordsQscoreGetRequest.h>

QString SimbaKeywordsQscoreGetRequest::getApiMethodName() const {
  return "taobao.simba.keywords.qscore.get";
}

qlonglong SimbaKeywordsQscoreGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaKeywordsQscoreGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaKeywordsQscoreGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordsQscoreGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordsQscoreGetResponse *SimbaKeywordsQscoreGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsQscoreGetResponse *tmpResponse = new SimbaKeywordsQscoreGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
