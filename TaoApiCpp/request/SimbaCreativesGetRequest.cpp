#include <TaoApiCpp/request/SimbaCreativesGetRequest.h>

QString SimbaCreativesGetRequest::getApiMethodName() const {
  return "taobao.simba.creatives.get";
}

qlonglong SimbaCreativesGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaCreativesGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaCreativesGetRequest::getCreativeIds() const {
  return creativeIds;
}
void SimbaCreativesGetRequest::setCreativeIds (qlonglong creativeIds) {
  this->creativeIds = creativeIds;
  appParams.insert("creative_ids", QString::number(creativeIds));
}

QString SimbaCreativesGetRequest::getNick() const {
  return nick;
}
void SimbaCreativesGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCreativesGetResponse *SimbaCreativesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativesGetResponse *tmpResponse = new SimbaCreativesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
