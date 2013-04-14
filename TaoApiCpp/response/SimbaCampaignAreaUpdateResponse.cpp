#include <TaoApiCpp/response/SimbaCampaignAreaUpdateResponse.h>

CampaignArea SimbaCampaignAreaUpdateResponse::getCampaignArea() const {
  return campaignArea;
}
void SimbaCampaignAreaUpdateResponse::setCampaignArea (CampaignArea campaignArea) {
  this->campaignArea = campaignArea;
}

void SimbaCampaignAreaUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_area")) {
  campaignArea.setParser(responseParser->getObjectParser("campaign_area"));
  campaignArea.parseResponse();
  }

}

