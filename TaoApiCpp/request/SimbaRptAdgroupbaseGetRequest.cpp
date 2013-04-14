#include <TaoApiCpp/request/SimbaRptAdgroupbaseGetRequest.h>

QString SimbaRptAdgroupbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupbase.get";
}

qlonglong SimbaRptAdgroupbaseGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupbaseGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupbaseGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptAdgroupbaseGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptAdgroupbaseGetRequest::getSource() const {
  return source;
}
void SimbaRptAdgroupbaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptAdgroupbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupbaseGetResponse *SimbaRptAdgroupbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupbaseGetResponse *tmpResponse = new SimbaRptAdgroupbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
