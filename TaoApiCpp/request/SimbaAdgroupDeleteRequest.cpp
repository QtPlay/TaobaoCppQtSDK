#include <TaoApiCpp/request/SimbaAdgroupDeleteRequest.h>

QString SimbaAdgroupDeleteRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.delete";
}

qlonglong SimbaAdgroupDeleteRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaAdgroupDeleteRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaAdgroupDeleteRequest::getNick() const {
  return nick;
}
void SimbaAdgroupDeleteRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupDeleteResponse *SimbaAdgroupDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupDeleteResponse *tmpResponse = new SimbaAdgroupDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
