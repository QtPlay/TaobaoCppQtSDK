#include <TaoApiCpp/request/SimbaAdgroupCampcatmatchsGetRequest.h>

QString SimbaAdgroupCampcatmatchsGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.campcatmatchs.get";
}

qlonglong SimbaAdgroupCampcatmatchsGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaAdgroupCampcatmatchsGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaAdgroupCampcatmatchsGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupCampcatmatchsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupCampcatmatchsGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupCampcatmatchsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupCampcatmatchsGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupCampcatmatchsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



SimbaAdgroupCampcatmatchsGetResponse *SimbaAdgroupCampcatmatchsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupCampcatmatchsGetResponse *tmpResponse = new SimbaAdgroupCampcatmatchsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
