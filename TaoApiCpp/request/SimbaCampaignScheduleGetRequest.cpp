#include <TaoApiCpp/request/SimbaCampaignScheduleGetRequest.h>

QString SimbaCampaignScheduleGetRequest::getApiMethodName() const {
  return "taobao.simba.campaign.schedule.get";
}

qlonglong SimbaCampaignScheduleGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignScheduleGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignScheduleGetRequest::getNick() const {
  return nick;
}
void SimbaCampaignScheduleGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCampaignScheduleGetResponse *SimbaCampaignScheduleGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignScheduleGetResponse *tmpResponse = new SimbaCampaignScheduleGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
