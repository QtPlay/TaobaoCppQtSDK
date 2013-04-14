#include <TaoApiCpp/request/SimbaCampaignBudgetGetRequest.h>

QString SimbaCampaignBudgetGetRequest::getApiMethodName() const {
  return "taobao.simba.campaign.budget.get";
}

qlonglong SimbaCampaignBudgetGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignBudgetGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignBudgetGetRequest::getNick() const {
  return nick;
}
void SimbaCampaignBudgetGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCampaignBudgetGetResponse *SimbaCampaignBudgetGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignBudgetGetResponse *tmpResponse = new SimbaCampaignBudgetGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
