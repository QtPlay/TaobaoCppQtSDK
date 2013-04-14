#include <TaoApiCpp/request/SimbaAdgroupUpdateRequest.h>

QString SimbaAdgroupUpdateRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.update";
}

qlonglong SimbaAdgroupUpdateRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaAdgroupUpdateRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaAdgroupUpdateRequest::getDefaultPrice() const {
  return defaultPrice;
}
void SimbaAdgroupUpdateRequest::setDefaultPrice (qlonglong defaultPrice) {
  this->defaultPrice = defaultPrice;
  appParams.insert("default_price", QString::number(defaultPrice));
}

QString SimbaAdgroupUpdateRequest::getNick() const {
  return nick;
}
void SimbaAdgroupUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupUpdateRequest::getNonsearchMaxPrice() const {
  return nonsearchMaxPrice;
}
void SimbaAdgroupUpdateRequest::setNonsearchMaxPrice (qlonglong nonsearchMaxPrice) {
  this->nonsearchMaxPrice = nonsearchMaxPrice;
  appParams.insert("nonsearch_max_price", QString::number(nonsearchMaxPrice));
}

QString SimbaAdgroupUpdateRequest::getOnlineStatus() const {
  return onlineStatus;
}
void SimbaAdgroupUpdateRequest::setOnlineStatus (QString onlineStatus) {
  this->onlineStatus = onlineStatus;
  appParams.insert("online_status", onlineStatus);
}

bool SimbaAdgroupUpdateRequest::getUseNonsearchDefaultPrice() const {
  return useNonsearchDefaultPrice;
}
void SimbaAdgroupUpdateRequest::setUseNonsearchDefaultPrice (bool useNonsearchDefaultPrice) {
  this->useNonsearchDefaultPrice = useNonsearchDefaultPrice;
  appParams.insert("use_nonsearch_default_price", useNonsearchDefaultPrice? "true": "false");
}



SimbaAdgroupUpdateResponse *SimbaAdgroupUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupUpdateResponse *tmpResponse = new SimbaAdgroupUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
