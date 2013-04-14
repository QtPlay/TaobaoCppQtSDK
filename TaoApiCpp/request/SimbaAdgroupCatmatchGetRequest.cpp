#include <TaoApiCpp/request/SimbaAdgroupCatmatchGetRequest.h>

QString SimbaAdgroupCatmatchGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.catmatch.get";
}

qlonglong SimbaAdgroupCatmatchGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaAdgroupCatmatchGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaAdgroupCatmatchGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupCatmatchGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupCatmatchGetResponse *SimbaAdgroupCatmatchGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupCatmatchGetResponse *tmpResponse = new SimbaAdgroupCatmatchGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
