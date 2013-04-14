#include <TaoApiCpp/request/SimbaRptAdgroupkeywordeffectGetRequest.h>

QString SimbaRptAdgroupkeywordeffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupkeywordeffect.get";
}

qlonglong SimbaRptAdgroupkeywordeffectGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupkeywordeffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupkeywordeffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupkeywordeffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupkeywordeffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupkeywordeffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupkeywordeffectGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptAdgroupkeywordeffectGetRequest::getSource() const {
  return source;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptAdgroupkeywordeffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupkeywordeffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupkeywordeffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupkeywordeffectGetResponse *SimbaRptAdgroupkeywordeffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupkeywordeffectGetResponse *tmpResponse = new SimbaRptAdgroupkeywordeffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
