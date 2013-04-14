#include <TaoApiCpp/request/SimbaCampaignAreaGetRequest.h>

QString SimbaCampaignAreaGetRequest::getApiMethodName() const {
  return "taobao.simba.campaign.area.get";
}

qlonglong SimbaCampaignAreaGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignAreaGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignAreaGetRequest::getNick() const {
  return nick;
}
void SimbaCampaignAreaGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCampaignAreaGetResponse *SimbaCampaignAreaGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignAreaGetResponse *tmpResponse = new SimbaCampaignAreaGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
