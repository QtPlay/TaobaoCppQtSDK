#include <TaoApiCpp/response/WlbOrderScheduleRuleAddResponse.h>

qlonglong WlbOrderScheduleRuleAddResponse::getScheduleRuleId() const {
  return scheduleRuleId;
}
void WlbOrderScheduleRuleAddResponse::setScheduleRuleId (qlonglong scheduleRuleId) {
  this->scheduleRuleId = scheduleRuleId;
}

void WlbOrderScheduleRuleAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("schedule_rule_id")) {
  scheduleRuleId = responseParser->getNumByName("schedule_rule_id");
  }

}

