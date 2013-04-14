#include <TaoApiCpp/request/SimbaAdgroupAdgroupcatmatchsGetRequest.h>

QString SimbaAdgroupAdgroupcatmatchsGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.adgroupcatmatchs.get";
}

qlonglong SimbaAdgroupAdgroupcatmatchsGetRequest::getAdgroupIds() const {
  return adgroupIds;
}
void SimbaAdgroupAdgroupcatmatchsGetRequest::setAdgroupIds (qlonglong adgroupIds) {
  this->adgroupIds = adgroupIds;
  appParams.insert("adgroup_ids", QString::number(adgroupIds));
}

QString SimbaAdgroupAdgroupcatmatchsGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupAdgroupcatmatchsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupAdgroupcatmatchsGetResponse *SimbaAdgroupAdgroupcatmatchsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupAdgroupcatmatchsGetResponse *tmpResponse = new SimbaAdgroupAdgroupcatmatchsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
