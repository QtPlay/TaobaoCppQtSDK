#include <TaoApiCpp/response/SimbaRptAdgroupkeywordeffectGetResponse.h>

QString SimbaRptAdgroupkeywordeffectGetResponse::getRptAdgroupkeywordEffectList() const {
  return rptAdgroupkeywordEffectList;
}
void SimbaRptAdgroupkeywordeffectGetResponse::setRptAdgroupkeywordEffectList (QString rptAdgroupkeywordEffectList) {
  this->rptAdgroupkeywordEffectList = rptAdgroupkeywordEffectList;
}

void SimbaRptAdgroupkeywordeffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroupkeyword_effect_list")) {
  rptAdgroupkeywordEffectList = responseParser->getStrByName("rpt_adgroupkeyword_effect_list");
  }

}

