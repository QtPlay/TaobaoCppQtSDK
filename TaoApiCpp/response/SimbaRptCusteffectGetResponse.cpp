#include <TaoApiCpp/response/SimbaRptCusteffectGetResponse.h>

QString SimbaRptCusteffectGetResponse::getRptCustEffectList() const {
  return rptCustEffectList;
}
void SimbaRptCusteffectGetResponse::setRptCustEffectList (QString rptCustEffectList) {
  this->rptCustEffectList = rptCustEffectList;
}

void SimbaRptCusteffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rpt_cust_effect_list")) {
  rptCustEffectList = responseParser->getStrByName("rpt_cust_effect_list");
  }

}

