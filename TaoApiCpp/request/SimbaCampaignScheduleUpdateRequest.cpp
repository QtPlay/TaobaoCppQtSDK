#include <TaoApiCpp/request/SimbaCampaignScheduleUpdateRequest.h>

QString SimbaCampaignScheduleUpdateRequest::getApiMethodName() const {
  return "taobao.simba.campaign.schedule.update";
}

qlonglong SimbaCampaignScheduleUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignScheduleUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignScheduleUpdateRequest::getNick() const {
  return nick;
}
void SimbaCampaignScheduleUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaCampaignScheduleUpdateRequest::getSchedule() const {
  return schedule;
}
void SimbaCampaignScheduleUpdateRequest::setSchedule (QString schedule) {
  this->schedule = schedule;
  appParams.insert("schedule", schedule);
}



SimbaCampaignScheduleUpdateResponse *SimbaCampaignScheduleUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignScheduleUpdateResponse *tmpResponse = new SimbaCampaignScheduleUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
