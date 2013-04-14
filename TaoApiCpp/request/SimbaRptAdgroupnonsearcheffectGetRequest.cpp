#include <TaoApiCpp/request/SimbaRptAdgroupnonsearcheffectGetRequest.h>

QString SimbaRptAdgroupnonsearcheffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupnonsearcheffect.get";
}

qlonglong SimbaRptAdgroupnonsearcheffectGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupnonsearcheffectGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupnonsearcheffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupnonsearcheffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupnonsearcheffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupnonsearcheffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupnonsearcheffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupnonsearcheffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupnonsearcheffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupnonsearcheffectGetResponse *SimbaRptAdgroupnonsearcheffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupnonsearcheffectGetResponse *tmpResponse = new SimbaRptAdgroupnonsearcheffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
