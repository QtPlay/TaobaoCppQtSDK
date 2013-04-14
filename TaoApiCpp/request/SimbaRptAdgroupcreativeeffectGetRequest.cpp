#include <TaoApiCpp/request/SimbaRptAdgroupcreativeeffectGetRequest.h>

QString SimbaRptAdgroupcreativeeffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupcreativeeffect.get";
}

qlonglong SimbaRptAdgroupcreativeeffectGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupcreativeeffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupcreativeeffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupcreativeeffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupcreativeeffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupcreativeeffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupcreativeeffectGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptAdgroupcreativeeffectGetRequest::getSource() const {
  return source;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptAdgroupcreativeeffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupcreativeeffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupcreativeeffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupcreativeeffectGetResponse *SimbaRptAdgroupcreativeeffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupcreativeeffectGetResponse *tmpResponse = new SimbaRptAdgroupcreativeeffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
