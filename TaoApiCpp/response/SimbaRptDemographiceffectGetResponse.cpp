#include <TaoApiCpp/response/SimbaRptDemographiceffectGetResponse.h>

QString SimbaRptDemographiceffectGetResponse::getRptDemographicEffect() const {
  return rptDemographicEffect;
}
void SimbaRptDemographiceffectGetResponse::setRptDemographicEffect (QString rptDemographicEffect) {
  this->rptDemographicEffect = rptDemographicEffect;
}

void SimbaRptDemographiceffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_demographic_effect")) {
  rptDemographicEffect = responseParser->getStrByName("rpt_demographic_effect");
  }

}

