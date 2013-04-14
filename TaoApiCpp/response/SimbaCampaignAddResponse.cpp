#include <TaoApiCpp/response/SimbaCampaignAddResponse.h>

Campaign SimbaCampaignAddResponse::getCampaign() const {
  return campaign;
}
void SimbaCampaignAddResponse::setCampaign (Campaign campaign) {
  this->campaign = campaign;
}

void SimbaCampaignAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign")) {
  campaign.setParser(responseParser->getObjectParser("campaign"));
  campaign.parseResponse();
  }

}

