#include <TaoApiCpp/request/SimbaAdgroupsbycampaignidGetRequest.h>

QString SimbaAdgroupsbycampaignidGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroupsbycampaignid.get";
}

qlonglong SimbaAdgroupsbycampaignidGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaAdgroupsbycampaignidGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaAdgroupsbycampaignidGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupsbycampaignidGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupsbycampaignidGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupsbycampaignidGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupsbycampaignidGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupsbycampaignidGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



SimbaAdgroupsbycampaignidGetResponse *SimbaAdgroupsbycampaignidGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupsbycampaignidGetResponse *tmpResponse = new SimbaAdgroupsbycampaignidGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
