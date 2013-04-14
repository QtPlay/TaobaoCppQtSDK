#include <TaoApiCpp/request/SimbaRptAdgroupeffectGetRequest.h>

QString SimbaRptAdgroupeffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupeffect.get";
}

qlonglong SimbaRptAdgroupeffectGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupeffectGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupeffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupeffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupeffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupeffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupeffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupeffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupeffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupeffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupeffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupeffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupeffectGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptAdgroupeffectGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptAdgroupeffectGetRequest::getSource() const {
  return source;
}
void SimbaRptAdgroupeffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptAdgroupeffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupeffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupeffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupeffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupeffectGetResponse *SimbaRptAdgroupeffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupeffectGetResponse *tmpResponse = new SimbaRptAdgroupeffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
