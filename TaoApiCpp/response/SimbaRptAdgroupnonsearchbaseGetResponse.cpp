#include <TaoApiCpp/response/SimbaRptAdgroupnonsearchbaseGetResponse.h>

QString SimbaRptAdgroupnonsearchbaseGetResponse::getRptAdgroupNonsearchBase() const {
  return rptAdgroupNonsearchBase;
}
void SimbaRptAdgroupnonsearchbaseGetResponse::setRptAdgroupNonsearchBase (QString rptAdgroupNonsearchBase) {
  this->rptAdgroupNonsearchBase = rptAdgroupNonsearchBase;
}

void SimbaRptAdgroupnonsearchbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroup_nonsearch_base")) {
  rptAdgroupNonsearchBase = responseParser->getStrByName("rpt_adgroup_nonsearch_base");
  }

}

