#include <TaoApiCpp/response/SimbaRptAdgroupbaseGetResponse.h>

QString SimbaRptAdgroupbaseGetResponse::getRptAdgroupBaseList() const {
  return rptAdgroupBaseList;
}
void SimbaRptAdgroupbaseGetResponse::setRptAdgroupBaseList (QString rptAdgroupBaseList) {
  this->rptAdgroupBaseList = rptAdgroupBaseList;
}

void SimbaRptAdgroupbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroup_base_list")) {
  rptAdgroupBaseList = responseParser->getStrByName("rpt_adgroup_base_list");
  }

}

