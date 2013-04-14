#include <TaoApiCpp/response/SimbaRptAdgroupkeywordbaseGetResponse.h>

QString SimbaRptAdgroupkeywordbaseGetResponse::getRptAdgroupkeywordBaseList() const {
  return rptAdgroupkeywordBaseList;
}
void SimbaRptAdgroupkeywordbaseGetResponse::setRptAdgroupkeywordBaseList (QString rptAdgroupkeywordBaseList) {
  this->rptAdgroupkeywordBaseList = rptAdgroupkeywordBaseList;
}

void SimbaRptAdgroupkeywordbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroupkeyword_base_list")) {
  rptAdgroupkeywordBaseList = responseParser->getStrByName("rpt_adgroupkeyword_base_list");
  }

}

