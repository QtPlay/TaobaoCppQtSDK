#include <TaoApiCpp/request/SimbaCampaignUpdateRequest.h>

QString SimbaCampaignUpdateRequest::getApiMethodName() const {
  return "taobao.simba.campaign.update";
}

qlonglong SimbaCampaignUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignUpdateRequest::getNick() const {
  return nick;
}
void SimbaCampaignUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaCampaignUpdateRequest::getOnlineStatus() const {
  return onlineStatus;
}
void SimbaCampaignUpdateRequest::setOnlineStatus (QString onlineStatus) {
  this->onlineStatus = onlineStatus;
  appParams.insert("online_status", onlineStatus);
}

QString SimbaCampaignUpdateRequest::getTitle() const {
  return title;
}
void SimbaCampaignUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



SimbaCampaignUpdateResponse *SimbaCampaignUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignUpdateResponse *tmpResponse = new SimbaCampaignUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
