#include <TaoApiCpp/response/SimbaRptAdgroupnonsearcheffectGetResponse.h>

QString SimbaRptAdgroupnonsearcheffectGetResponse::getRptAdgroupNonsearchEffect() const {
  return rptAdgroupNonsearchEffect;
}
void SimbaRptAdgroupnonsearcheffectGetResponse::setRptAdgroupNonsearchEffect (QString rptAdgroupNonsearchEffect) {
  this->rptAdgroupNonsearchEffect = rptAdgroupNonsearchEffect;
}

void SimbaRptAdgroupnonsearcheffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroup_nonsearch_effect")) {
  rptAdgroupNonsearchEffect = responseParser->getStrByName("rpt_adgroup_nonsearch_effect");
  }

}

