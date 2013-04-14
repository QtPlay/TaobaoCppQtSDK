#include <TaoApiCpp/response/SimbaRptCampaignbaseGetResponse.h>

QString SimbaRptCampaignbaseGetResponse::getRptCampaignBaseList() const {
  return rptCampaignBaseList;
}
void SimbaRptCampaignbaseGetResponse::setRptCampaignBaseList (QString rptCampaignBaseList) {
  this->rptCampaignBaseList = rptCampaignBaseList;
}

void SimbaRptCampaignbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_campaign_base_list")) {
  rptCampaignBaseList = responseParser->getStrByName("rpt_campaign_base_list");
  }

}

