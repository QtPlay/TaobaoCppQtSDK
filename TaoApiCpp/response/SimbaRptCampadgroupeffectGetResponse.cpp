#include <TaoApiCpp/response/SimbaRptCampadgroupeffectGetResponse.h>

QString SimbaRptCampadgroupeffectGetResponse::getRptCampadgroupEffectList() const {
  return rptCampadgroupEffectList;
}
void SimbaRptCampadgroupeffectGetResponse::setRptCampadgroupEffectList (QString rptCampadgroupEffectList) {
  this->rptCampadgroupEffectList = rptCampadgroupEffectList;
}

void SimbaRptCampadgroupeffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_campadgroup_effect_list")) {
  rptCampadgroupEffectList = responseParser->getStrByName("rpt_campadgroup_effect_list");
  }

}

