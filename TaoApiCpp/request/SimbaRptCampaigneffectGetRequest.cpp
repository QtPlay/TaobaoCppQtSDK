#include <TaoApiCpp/request/SimbaRptCampaigneffectGetRequest.h>

QString SimbaRptCampaigneffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.campaigneffect.get";
}

qlonglong SimbaRptCampaigneffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptCampaigneffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptCampaigneffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptCampaigneffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptCampaigneffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptCampaigneffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptCampaigneffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptCampaigneffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptCampaigneffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptCampaigneffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptCampaigneffectGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptCampaigneffectGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptCampaigneffectGetRequest::getSource() const {
  return source;
}
void SimbaRptCampaigneffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptCampaigneffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptCampaigneffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptCampaigneffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptCampaigneffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptCampaigneffectGetResponse *SimbaRptCampaigneffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptCampaigneffectGetResponse *tmpResponse = new SimbaRptCampaigneffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
