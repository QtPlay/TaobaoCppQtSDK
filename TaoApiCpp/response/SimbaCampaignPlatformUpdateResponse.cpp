#include <TaoApiCpp/response/SimbaCampaignPlatformUpdateResponse.h>

CampaignPlatform SimbaCampaignPlatformUpdateResponse::getCampaignPlatform() const {
  return campaignPlatform;
}
void SimbaCampaignPlatformUpdateResponse::setCampaignPlatform (CampaignPlatform campaignPlatform) {
  this->campaignPlatform = campaignPlatform;
}

void SimbaCampaignPlatformUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_platform")) {
  campaignPlatform.setParser(responseParser->getObjectParser("campaign_platform"));
  campaignPlatform.parseResponse();
  }

}

