#include <TaoApiCpp/request/SimbaCampaignAreaUpdateRequest.h>

QString SimbaCampaignAreaUpdateRequest::getApiMethodName() const {
  return "taobao.simba.campaign.area.update";
}

QString SimbaCampaignAreaUpdateRequest::getArea() const {
  return area;
}
void SimbaCampaignAreaUpdateRequest::setArea (QString area) {
  this->area = area;
  appParams.insert("area", area);
}

qlonglong SimbaCampaignAreaUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignAreaUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignAreaUpdateRequest::getNick() const {
  return nick;
}
void SimbaCampaignAreaUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCampaignAreaUpdateResponse *SimbaCampaignAreaUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignAreaUpdateResponse *tmpResponse = new SimbaCampaignAreaUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
