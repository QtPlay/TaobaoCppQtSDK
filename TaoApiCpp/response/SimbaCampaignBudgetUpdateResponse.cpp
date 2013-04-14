#include <TaoApiCpp/response/SimbaCampaignBudgetUpdateResponse.h>

CampaignBudget SimbaCampaignBudgetUpdateResponse::getCampaignBudget() const {
  return campaignBudget;
}
void SimbaCampaignBudgetUpdateResponse::setCampaignBudget (CampaignBudget campaignBudget) {
  this->campaignBudget = campaignBudget;
}

void SimbaCampaignBudgetUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_budget")) {
  campaignBudget.setParser(responseParser->getObjectParser("campaign_budget"));
  campaignBudget.parseResponse();
  }

}

