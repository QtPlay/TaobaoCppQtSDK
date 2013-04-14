#include <TaoApiCpp/request/SimbaRptCampaignbaseGetRequest.h>

QString SimbaRptCampaignbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.campaignbase.get";
}

qlonglong SimbaRptCampaignbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptCampaignbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptCampaignbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptCampaignbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptCampaignbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptCampaignbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptCampaignbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptCampaignbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptCampaignbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptCampaignbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptCampaignbaseGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptCampaignbaseGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptCampaignbaseGetRequest::getSource() const {
  return source;
}
void SimbaRptCampaignbaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptCampaignbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptCampaignbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptCampaignbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptCampaignbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptCampaignbaseGetResponse *SimbaRptCampaignbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptCampaignbaseGetResponse *tmpResponse = new SimbaRptCampaignbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
