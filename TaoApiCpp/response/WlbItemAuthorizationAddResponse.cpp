#include <TaoApiCpp/response/WlbItemAuthorizationAddResponse.h>

QList<qlonglong> WlbItemAuthorizationAddResponse::getRuleIdList() const {
  return ruleIdList;
}
void WlbItemAuthorizationAddResponse::setRuleIdList (QList<qlonglong> ruleIdList) {
  this->ruleIdList = ruleIdList;
}

void WlbItemAuthorizationAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rule_id_list")) {
  ruleIdList = responseParser->getListNumByName("rule_id_list");
  }

}

