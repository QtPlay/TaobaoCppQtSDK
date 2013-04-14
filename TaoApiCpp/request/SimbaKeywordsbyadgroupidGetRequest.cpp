#include <TaoApiCpp/request/SimbaKeywordsbyadgroupidGetRequest.h>

QString SimbaKeywordsbyadgroupidGetRequest::getApiMethodName() const {
  return "taobao.simba.keywordsbyadgroupid.get";
}

qlonglong SimbaKeywordsbyadgroupidGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaKeywordsbyadgroupidGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaKeywordsbyadgroupidGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordsbyadgroupidGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordsbyadgroupidGetResponse *SimbaKeywordsbyadgroupidGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsbyadgroupidGetResponse *tmpResponse = new SimbaKeywordsbyadgroupidGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
