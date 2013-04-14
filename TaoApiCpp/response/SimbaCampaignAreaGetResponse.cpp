#include <TaoApiCpp/response/SimbaCampaignAreaGetResponse.h>

CampaignArea SimbaCampaignAreaGetResponse::getCampaignArea() const {
  return campaignArea;
}
void SimbaCampaignAreaGetResponse::setCampaignArea (CampaignArea campaignArea) {
  this->campaignArea = campaignArea;
}

void SimbaCampaignAreaGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_area")) {
  campaignArea.setParser(responseParser->getObjectParser("campaign_area"));
  campaignArea.parseResponse();
  }

}

