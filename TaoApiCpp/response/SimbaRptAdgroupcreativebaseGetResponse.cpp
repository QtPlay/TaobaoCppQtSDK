#include <TaoApiCpp/response/SimbaRptAdgroupcreativebaseGetResponse.h>

QString SimbaRptAdgroupcreativebaseGetResponse::getRptAdgroupcreativeBaseList() const {
  return rptAdgroupcreativeBaseList;
}
void SimbaRptAdgroupcreativebaseGetResponse::setRptAdgroupcreativeBaseList (QString rptAdgroupcreativeBaseList) {
  this->rptAdgroupcreativeBaseList = rptAdgroupcreativeBaseList;
}

void SimbaRptAdgroupcreativebaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_adgroupcreative_base_list")) {
  rptAdgroupcreativeBaseList = responseParser->getStrByName("rpt_adgroupcreative_base_list");
  }

}

