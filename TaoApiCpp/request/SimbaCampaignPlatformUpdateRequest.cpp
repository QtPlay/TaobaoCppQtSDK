#include <TaoApiCpp/request/SimbaCampaignPlatformUpdateRequest.h>

QString SimbaCampaignPlatformUpdateRequest::getApiMethodName() const {
  return "taobao.simba.campaign.platform.update";
}

qlonglong SimbaCampaignPlatformUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignPlatformUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignPlatformUpdateRequest::getNick() const {
  return nick;
}
void SimbaCampaignPlatformUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaCampaignPlatformUpdateRequest::getNonsearchChannels() const {
  return nonsearchChannels;
}
void SimbaCampaignPlatformUpdateRequest::setNonsearchChannels (qlonglong nonsearchChannels) {
  this->nonsearchChannels = nonsearchChannels;
  appParams.insert("nonsearch_channels", QString::number(nonsearchChannels));
}

qlonglong SimbaCampaignPlatformUpdateRequest::getOutsideDiscount() const {
  return outsideDiscount;
}
void SimbaCampaignPlatformUpdateRequest::setOutsideDiscount (qlonglong outsideDiscount) {
  this->outsideDiscount = outsideDiscount;
  appParams.insert("outside_discount", QString::number(outsideDiscount));
}

qlonglong SimbaCampaignPlatformUpdateRequest::getSearchChannels() const {
  return searchChannels;
}
void SimbaCampaignPlatformUpdateRequest::setSearchChannels (qlonglong searchChannels) {
  this->searchChannels = searchChannels;
  appParams.insert("search_channels", QString::number(searchChannels));
}



SimbaCampaignPlatformUpdateResponse *SimbaCampaignPlatformUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignPlatformUpdateResponse *tmpResponse = new SimbaCampaignPlatformUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
