#include <TaoApiCpp/response/WlbOrderscheduleruleQueryResponse.h>

QList<WlbOrderScheduleRule> WlbOrderscheduleruleQueryResponse::getOrderScheduleRuleList() const {
  return orderScheduleRuleList;
}
void WlbOrderscheduleruleQueryResponse::setOrderScheduleRuleList (QList<WlbOrderScheduleRule> orderScheduleRuleList) {
  this->orderScheduleRuleList = orderScheduleRuleList;
}
qlonglong WlbOrderscheduleruleQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbOrderscheduleruleQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbOrderscheduleruleQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("order_schedule_rule_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("order_schedule_rule_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbOrderScheduleRule tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    orderScheduleRuleList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

