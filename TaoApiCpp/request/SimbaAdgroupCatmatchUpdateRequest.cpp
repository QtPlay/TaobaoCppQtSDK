#include <TaoApiCpp/request/SimbaAdgroupCatmatchUpdateRequest.h>

QString SimbaAdgroupCatmatchUpdateRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.catmatch.update";
}

qlonglong SimbaAdgroupCatmatchUpdateRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaAdgroupCatmatchUpdateRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaAdgroupCatmatchUpdateRequest::getCatmatchId() const {
  return catmatchId;
}
void SimbaAdgroupCatmatchUpdateRequest::setCatmatchId (qlonglong catmatchId) {
  this->catmatchId = catmatchId;
  appParams.insert("catmatch_id", QString::number(catmatchId));
}

qlonglong SimbaAdgroupCatmatchUpdateRequest::getMaxPrice() const {
  return maxPrice;
}
void SimbaAdgroupCatmatchUpdateRequest::setMaxPrice (qlonglong maxPrice) {
  this->maxPrice = maxPrice;
  appParams.insert("max_price", QString::number(maxPrice));
}

QString SimbaAdgroupCatmatchUpdateRequest::getNick() const {
  return nick;
}
void SimbaAdgroupCatmatchUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaAdgroupCatmatchUpdateRequest::getOnlineStatus() const {
  return onlineStatus;
}
void SimbaAdgroupCatmatchUpdateRequest::setOnlineStatus (QString onlineStatus) {
  this->onlineStatus = onlineStatus;
  appParams.insert("online_status", onlineStatus);
}

bool SimbaAdgroupCatmatchUpdateRequest::getUseDefaultPrice() const {
  return useDefaultPrice;
}
void SimbaAdgroupCatmatchUpdateRequest::setUseDefaultPrice (bool useDefaultPrice) {
  this->useDefaultPrice = useDefaultPrice;
  appParams.insert("use_default_price", useDefaultPrice? "true": "false");
}



SimbaAdgroupCatmatchUpdateResponse *SimbaAdgroupCatmatchUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupCatmatchUpdateResponse *tmpResponse = new SimbaAdgroupCatmatchUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
