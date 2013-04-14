#include <TaoApiCpp/request/SimbaKeywordscatQscoreGetRequest.h>

QString SimbaKeywordscatQscoreGetRequest::getApiMethodName() const {
  return "taobao.simba.keywordscat.qscore.get";
}

qlonglong SimbaKeywordscatQscoreGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaKeywordscatQscoreGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaKeywordscatQscoreGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordscatQscoreGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordscatQscoreGetResponse *SimbaKeywordscatQscoreGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordscatQscoreGetResponse *tmpResponse = new SimbaKeywordscatQscoreGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
