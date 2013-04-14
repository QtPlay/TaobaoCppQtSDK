#include <TaoApiCpp/response/SimbaCampaignScheduleUpdateResponse.h>

CampaignSchedule SimbaCampaignScheduleUpdateResponse::getCampaignSchedule() const {
  return campaignSchedule;
}
void SimbaCampaignScheduleUpdateResponse::setCampaignSchedule (CampaignSchedule campaignSchedule) {
  this->campaignSchedule = campaignSchedule;
}

void SimbaCampaignScheduleUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_schedule")) {
  campaignSchedule.setParser(responseParser->getObjectParser("campaign_schedule"));
  campaignSchedule.parseResponse();
  }

}

