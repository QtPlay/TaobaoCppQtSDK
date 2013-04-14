#include <TaoApiCpp/response/SimbaRptAdgroupcreativeeffectGetResponse.h>

QString SimbaRptAdgroupcreativeeffectGetResponse::getRptAdgroupcreativeEffectList() const {
  return rptAdgroupcreativeEffectList;
}
void SimbaRptAdgroupcreativeeffectGetResponse::setRptAdgroupcreativeEffectList (QString rptAdgroupcreativeEffectList) {
  this->rptAdgroupcreativeEffectList = rptAdgroupcreativeEffectList;
}

void SimbaRptAdgroupcreativeeffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroupcreative_effect_list")) {
  rptAdgroupcreativeEffectList = responseParser->getStrByName("rpt_adgroupcreative_effect_list");
  }

}

