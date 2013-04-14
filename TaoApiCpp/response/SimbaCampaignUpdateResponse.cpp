#include <TaoApiCpp/response/SimbaCampaignUpdateResponse.h>

Campaign SimbaCampaignUpdateResponse::getCampaign() const {
  return campaign;
}
void SimbaCampaignUpdateResponse::setCampaign (Campaign campaign) {
  this->campaign = campaign;
}

void SimbaCampaignUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign")) {
  campaign.setParser(responseParser->getObjectParser("campaign"));
  campaign.parseResponse();
  }

}

