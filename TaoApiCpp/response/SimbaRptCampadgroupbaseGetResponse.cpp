#include <TaoApiCpp/response/SimbaRptCampadgroupbaseGetResponse.h>

QString SimbaRptCampadgroupbaseGetResponse::getRptCampadgroupBaseList() const {
  return rptCampadgroupBaseList;
}
void SimbaRptCampadgroupbaseGetResponse::setRptCampadgroupBaseList (QString rptCampadgroupBaseList) {
  this->rptCampadgroupBaseList = rptCampadgroupBaseList;
}

void SimbaRptCampadgroupbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_campadgroup_base_list")) {
  rptCampadgroupBaseList = responseParser->getStrByName("rpt_campadgroup_base_list");
  }

}

