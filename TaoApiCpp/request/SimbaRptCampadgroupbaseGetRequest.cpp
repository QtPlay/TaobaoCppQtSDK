#include <TaoApiCpp/request/SimbaRptCampadgroupbaseGetRequest.h>

QString SimbaRptCampadgroupbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.campadgroupbase.get";
}

qlonglong SimbaRptCampadgroupbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptCampadgroupbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptCampadgroupbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptCampadgroupbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptCampadgroupbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptCampadgroupbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptCampadgroupbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptCampadgroupbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptCampadgroupbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptCampadgroupbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptCampadgroupbaseGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptCampadgroupbaseGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptCampadgroupbaseGetRequest::getSource() const {
  return source;
}
void SimbaRptCampadgroupbaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptCampadgroupbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptCampadgroupbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptCampadgroupbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptCampadgroupbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptCampadgroupbaseGetResponse *SimbaRptCampadgroupbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptCampadgroupbaseGetResponse *tmpResponse = new SimbaRptCampadgroupbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
