#include <TaoApiCpp/request/SimbaRptDemographicbaseGetRequest.h>

QString SimbaRptDemographicbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.demographicbase.get";
}

qlonglong SimbaRptDemographicbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptDemographicbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptDemographicbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptDemographicbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptDemographicbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptDemographicbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptDemographicbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptDemographicbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptDemographicbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptDemographicbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptDemographicbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptDemographicbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptDemographicbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptDemographicbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptDemographicbaseGetResponse *SimbaRptDemographicbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptDemographicbaseGetResponse *tmpResponse = new SimbaRptDemographicbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
