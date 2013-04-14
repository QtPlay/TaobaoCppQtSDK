#include <TaoApiCpp/request/SimbaRptCampadgroupeffectGetRequest.h>

QString SimbaRptCampadgroupeffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.campadgroupeffect.get";
}

qlonglong SimbaRptCampadgroupeffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptCampadgroupeffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptCampadgroupeffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptCampadgroupeffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptCampadgroupeffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptCampadgroupeffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptCampadgroupeffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptCampadgroupeffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptCampadgroupeffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptCampadgroupeffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptCampadgroupeffectGetRequest::getSearchType() const {
  return searchType;
}
void SimbaRptCampadgroupeffectGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString SimbaRptCampadgroupeffectGetRequest::getSource() const {
  return source;
}
void SimbaRptCampadgroupeffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptCampadgroupeffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptCampadgroupeffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptCampadgroupeffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptCampadgroupeffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptCampadgroupeffectGetResponse *SimbaRptCampadgroupeffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptCampadgroupeffectGetResponse *tmpResponse = new SimbaRptCampadgroupeffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
