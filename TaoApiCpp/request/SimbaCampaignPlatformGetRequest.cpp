#include <TaoApiCpp/request/SimbaCampaignPlatformGetRequest.h>

QString SimbaCampaignPlatformGetRequest::getApiMethodName() const {
  return "taobao.simba.campaign.platform.get";
}

qlonglong SimbaCampaignPlatformGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignPlatformGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignPlatformGetRequest::getNick() const {
  return nick;
}
void SimbaCampaignPlatformGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCampaignPlatformGetResponse *SimbaCampaignPlatformGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignPlatformGetResponse *tmpResponse = new SimbaCampaignPlatformGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
