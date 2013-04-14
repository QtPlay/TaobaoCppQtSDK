#include <TaoApiCpp/response/WangwangEserviceEvaluationGetResponse.h>

QList<StaffEvalStatOnDay> WangwangEserviceEvaluationGetResponse::getStaffEvalStatOnDays() const {
  return staffEvalStatOnDays;
}
void WangwangEserviceEvaluationGetResponse::setStaffEvalStatOnDays (QList<StaffEvalStatOnDay> staffEvalStatOnDays) {
  this->staffEvalStatOnDays = staffEvalStatOnDays;
}

void WangwangEserviceEvaluationGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("staff_eval_stat_on_days")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("staff_eval_stat_on_days");
  Parser *parser;
  foreach (parser, listParser) {
    StaffEvalStatOnDay tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    staffEvalStatOnDays.append(tmp);
  }
  }

}

