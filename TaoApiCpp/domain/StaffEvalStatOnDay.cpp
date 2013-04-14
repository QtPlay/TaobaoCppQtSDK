#include <TaoApiCpp/domain/StaffEvalStatOnDay.h>
QDateTime StaffEvalStatOnDay::getEvalDate() const {
  return evalDate;
}
void StaffEvalStatOnDay::setEvalDate (QDateTime evalDate) {
  this->evalDate = evalDate;
}

QList<StaffEvalStatById> StaffEvalStatOnDay::getStaffEvalStatByIds() const {
  return staffEvalStatByIds;
}
void StaffEvalStatOnDay::setStaffEvalStatByIds (QList<StaffEvalStatById> staffEvalStatByIds) {
  this->staffEvalStatByIds = staffEvalStatByIds;
}


void StaffEvalStatOnDay::parseResponse() {
  if (responseParser->hasName("eval_date")) {
  evalDate = responseParser->getDateByName("eval_date");
  }
  if (responseParser->hasName("staff_eval_stat_by_ids")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("staff_eval_stat_by_ids");
  Parser *parser;
  foreach (parser, listParser) {
    StaffEvalStatById tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    staffEvalStatByIds.append(tmp);
  }
  }

}

