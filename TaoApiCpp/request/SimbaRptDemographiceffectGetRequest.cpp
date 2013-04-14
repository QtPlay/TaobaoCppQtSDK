#include <TaoApiCpp/request/SimbaRptDemographiceffectGetRequest.h>

QString SimbaRptDemographiceffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.demographiceffect.get";
}

qlonglong SimbaRptDemographiceffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptDemographiceffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptDemographiceffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptDemographiceffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptDemographiceffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptDemographiceffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptDemographiceffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptDemographiceffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptDemographiceffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptDemographiceffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptDemographiceffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptDemographiceffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptDemographiceffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptDemographiceffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptDemographiceffectGetResponse *SimbaRptDemographiceffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptDemographiceffectGetResponse *tmpResponse = new SimbaRptDemographiceffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
