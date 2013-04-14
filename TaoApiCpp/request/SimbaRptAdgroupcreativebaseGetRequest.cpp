#include <TaoApiCpp/request/SimbaRptAdgroupcreativebaseGetRequest.h>

QString SimbaRptAdgroupcreativebaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupcreativebase.get";
}

qlonglong SimbaRptAdgroupcreativebaseGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupcreativebaseGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupcreativebaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupcreativebaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupcreativebaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupcreativebaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupcreativebaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupcreativebaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupcreativebaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupcreativebaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupcreativebaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupcreativebaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupcreativebaseGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptAdgroupcreativebaseGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptAdgroupcreativebaseGetRequest::getSource() const {
  return source;
}
void SimbaRptAdgroupcreativebaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptAdgroupcreativebaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupcreativebaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupcreativebaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupcreativebaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupcreativebaseGetResponse *SimbaRptAdgroupcreativebaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupcreativebaseGetResponse *tmpResponse = new SimbaRptAdgroupcreativebaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
