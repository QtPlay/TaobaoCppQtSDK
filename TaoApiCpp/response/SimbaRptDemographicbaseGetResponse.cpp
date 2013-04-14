#include <TaoApiCpp/response/SimbaRptDemographicbaseGetResponse.h>

QString SimbaRptDemographicbaseGetResponse::getRptDemographicBase() const {
  return rptDemographicBase;
}
void SimbaRptDemographicbaseGetResponse::setRptDemographicBase (QString rptDemographicBase) {
  this->rptDemographicBase = rptDemographicBase;
}

void SimbaRptDemographicbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_demographic_base")) {
  rptDemographicBase = responseParser->getStrByName("rpt_demographic_base");
  }

}

