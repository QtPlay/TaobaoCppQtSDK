#include <TaoApiCpp/request/SimbaRptAdgroupkeywordbaseGetRequest.h>

QString SimbaRptAdgroupkeywordbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupkeywordbase.get";
}

qlonglong SimbaRptAdgroupkeywordbaseGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupkeywordbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupkeywordbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupkeywordbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupkeywordbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupkeywordbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupkeywordbaseGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptAdgroupkeywordbaseGetRequest::getSource() const {
  return source;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptAdgroupkeywordbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupkeywordbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupkeywordbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupkeywordbaseGetResponse *SimbaRptAdgroupkeywordbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupkeywordbaseGetResponse *tmpResponse = new SimbaRptAdgroupkeywordbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
