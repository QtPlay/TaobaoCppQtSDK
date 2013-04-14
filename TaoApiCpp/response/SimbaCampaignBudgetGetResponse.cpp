#include <TaoApiCpp/response/SimbaCampaignBudgetGetResponse.h>

CampaignBudget SimbaCampaignBudgetGetResponse::getCampaignBudget() const {
  return campaignBudget;
}
void SimbaCampaignBudgetGetResponse::setCampaignBudget (CampaignBudget campaignBudget) {
  this->campaignBudget = campaignBudget;
}

void SimbaCampaignBudgetGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_budget")) {
  campaignBudget.setParser(responseParser->getObjectParser("campaign_budget"));
  campaignBudget.parseResponse();
  }

}

