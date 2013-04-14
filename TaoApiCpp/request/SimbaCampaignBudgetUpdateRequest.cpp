#include <TaoApiCpp/request/SimbaCampaignBudgetUpdateRequest.h>

QString SimbaCampaignBudgetUpdateRequest::getApiMethodName() const {
  return "taobao.simba.campaign.budget.update";
}

qlonglong SimbaCampaignBudgetUpdateRequest::getBudget() const {
  return budget;
}
void SimbaCampaignBudgetUpdateRequest::setBudget (qlonglong budget) {
  this->budget = budget;
  appParams.insert("budget", QString::number(budget));
}

qlonglong SimbaCampaignBudgetUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaCampaignBudgetUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaCampaignBudgetUpdateRequest::getNick() const {
  return nick;
}
void SimbaCampaignBudgetUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

bool SimbaCampaignBudgetUpdateRequest::getUseSmooth() const {
  return useSmooth;
}
void SimbaCampaignBudgetUpdateRequest::setUseSmooth (bool useSmooth) {
  this->useSmooth = useSmooth;
  appParams.insert("use_smooth", useSmooth? "true": "false");
}



SimbaCampaignBudgetUpdateResponse *SimbaCampaignBudgetUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignBudgetUpdateResponse *tmpResponse = new SimbaCampaignBudgetUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
