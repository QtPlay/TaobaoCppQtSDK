#include <TaoApiCpp/response/SimbaRptAdgroupeffectGetResponse.h>

QString SimbaRptAdgroupeffectGetResponse::getRptAdgroupEffectList() const {
  return rptAdgroupEffectList;
}
void SimbaRptAdgroupeffectGetResponse::setRptAdgroupEffectList (QString rptAdgroupEffectList) {
  this->rptAdgroupEffectList = rptAdgroupEffectList;
}

void SimbaRptAdgroupeffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroup_effect_list")) {
  rptAdgroupEffectList = responseParser->getStrByName("rpt_adgroup_effect_list");
  }

}

