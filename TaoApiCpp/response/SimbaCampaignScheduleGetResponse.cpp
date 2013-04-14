#include <TaoApiCpp/response/SimbaCampaignScheduleGetResponse.h>

CampaignSchedule SimbaCampaignScheduleGetResponse::getCampaignSchedule() const {
  return campaignSchedule;
}
void SimbaCampaignScheduleGetResponse::setCampaignSchedule (CampaignSchedule campaignSchedule) {
  this->campaignSchedule = campaignSchedule;
}

void SimbaCampaignScheduleGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaign_schedule")) {
  campaignSchedule.setParser(responseParser->getObjectParser("campaign_schedule"));
  campaignSchedule.parseResponse();
  }

}

