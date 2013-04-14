#include <TaoApiCpp/response/SimbaCampaignPlatformGetResponse.h>

CampaignPlatform SimbaCampaignPlatformGetResponse::getCampaignPlatform() const {
  return campaignPlatform;
}
void SimbaCampaignPlatformGetResponse::setCampaignPlatform (CampaignPlatform campaignPlatform) {
  this->campaignPlatform = campaignPlatform;
}

void SimbaCampaignPlatformGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_platform")) {
  campaignPlatform.setParser(responseParser->getObjectParser("campaign_platform"));
  campaignPlatform.parseResponse();
  }

}

