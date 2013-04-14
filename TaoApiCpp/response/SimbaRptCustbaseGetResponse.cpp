#include <TaoApiCpp/response/SimbaRptCustbaseGetResponse.h>

QString SimbaRptCustbaseGetResponse::getRptCustBaseList() const {
  return rptCustBaseList;
}
void SimbaRptCustbaseGetResponse::setRptCustBaseList (QString rptCustBaseList) {
  this->rptCustBaseList = rptCustBaseList;
}

void SimbaRptCustbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_cust_base_list")) {
  rptCustBaseList = responseParser->getStrByName("rpt_cust_base_list");
  }

}

