#include <TaoApiCpp/response/SimbaRptCampaigneffectGetResponse.h>

QString SimbaRptCampaigneffectGetResponse::getRptCampaignEffectList() const {
  return rptCampaignEffectList;
}
void SimbaRptCampaigneffectGetResponse::setRptCampaignEffectList (QString rptCampaignEffectList) {
  this->rptCampaignEffectList = rptCampaignEffectList;
}

void SimbaRptCampaigneffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_campaign_effect_list")) {
  rptCampaignEffectList = responseParser->getStrByName("rpt_campaign_effect_list");
  }

}

