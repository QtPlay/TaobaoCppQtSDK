#include <TaoApiCpp/domain/PolicyDetail.h>
QString PolicyDetail::getChangeRule() const {
  return changeRule;
}
void PolicyDetail::setChangeRule (QString changeRule) {
  this->changeRule = changeRule;
}

QString PolicyDetail::getDayOfWeeks() const {
  return dayOfWeeks;
}
void PolicyDetail::setDayOfWeeks (QString dayOfWeeks) {
  this->dayOfWeeks = dayOfWeeks;
}

QString PolicyDetail::getEi() const {
  return ei;
}
void PolicyDetail::setEi (QString ei) {
  this->ei = ei;
}

QString PolicyDetail::getExcludeDate() const {
  return excludeDate;
}
void PolicyDetail::setExcludeDate (QString excludeDate) {
  this->excludeDate = excludeDate;
}

QString PolicyDetail::getMemo() const {
  return memo;
}
void PolicyDetail::setMemo (QString memo) {
  this->memo = memo;
}

QString PolicyDetail::getOfficeId() const {
  return officeId;
}
void PolicyDetail::setOfficeId (QString officeId) {
  this->officeId = officeId;
}

QString PolicyDetail::getRefundRule() const {
  return refundRule;
}
void PolicyDetail::setRefundRule (QString refundRule) {
  this->refundRule = refundRule;
}

QString PolicyDetail::getReissueRule() const {
  return reissueRule;
}
void PolicyDetail::setReissueRule (QString reissueRule) {
  this->reissueRule = reissueRule;
}

QString PolicyDetail::getSpecialRule() const {
  return specialRule;
}
void PolicyDetail::setSpecialRule (QString specialRule) {
  this->specialRule = specialRule;
}


void PolicyDetail::parseResponse() {
  if (responseParser->hasName("change_rule")) {
  changeRule = responseParser->getStrByName("change_rule");
  }
  if (responseParser->hasName("day_of_weeks")) {
  dayOfWeeks = responseParser->getStrByName("day_of_weeks");
  }
  if (responseParser->hasName("ei")) {
  ei = responseParser->getStrByName("ei");
  }
  if (responseParser->hasName("exclude_date")) {
  excludeDate = responseParser->getStrByName("exclude_date");
  }
  if (responseParser->hasName("memo")) {
  memo = responseParser->getStrByName("memo");
  }
  if (responseParser->hasName("office_id")) {
  officeId = responseParser->getStrByName("office_id");
  }
  if (responseParser->hasName("refund_rule")) {
  refundRule = responseParser->getStrByName("refund_rule");
  }
  if (responseParser->hasName("reissue_rule")) {
  reissueRule = responseParser->getStrByName("reissue_rule");
  }
  if (responseParser->hasName("special_rule")) {
  specialRule = responseParser->getStrByName("special_rule");
  }

}

