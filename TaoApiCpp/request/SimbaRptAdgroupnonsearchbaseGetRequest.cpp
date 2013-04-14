#include <TaoApiCpp/request/SimbaRptAdgroupnonsearchbaseGetRequest.h>

QString SimbaRptAdgroupnonsearchbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.adgroupnonsearchbase.get";
}

qlonglong SimbaRptAdgroupnonsearchbaseGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaRptAdgroupnonsearchbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaRptAdgroupnonsearchbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptAdgroupnonsearchbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptAdgroupnonsearchbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptAdgroupnonsearchbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptAdgroupnonsearchbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptAdgroupnonsearchbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptAdgroupnonsearchbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptAdgroupnonsearchbaseGetResponse *SimbaRptAdgroupnonsearchbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptAdgroupnonsearchbaseGetResponse *tmpResponse = new SimbaRptAdgroupnonsearchbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
