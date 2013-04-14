#include <TaoApiCpp/request/JipiaoPolicyProcessRequest.h>

QString JipiaoPolicyProcessRequest::getApiMethodName() const {
  return "taobao.jipiao.policy.process";
}

QString JipiaoPolicyProcessRequest::getAirline() const {
  return airline;
}
void JipiaoPolicyProcessRequest::setAirline (QString airline) {
  this->airline = airline;
  appParams.insert("airline", airline);
}

QString JipiaoPolicyProcessRequest::getArrAirports() const {
  return arrAirports;
}
void JipiaoPolicyProcessRequest::setArrAirports (QString arrAirports) {
  this->arrAirports = arrAirports;
  appParams.insert("arr_airports", arrAirports);
}

QString JipiaoPolicyProcessRequest::getAttributes() const {
  return attributes;
}
void JipiaoPolicyProcessRequest::setAttributes (QString attributes) {
  this->attributes = attributes;
  appParams.insert("attributes", attributes);
}

bool JipiaoPolicyProcessRequest::getAutoHkFlag() const {
  return autoHkFlag;
}
void JipiaoPolicyProcessRequest::setAutoHkFlag (bool autoHkFlag) {
  this->autoHkFlag = autoHkFlag;
  appParams.insert("auto_hk_flag", autoHkFlag? "true": "false");
}

bool JipiaoPolicyProcessRequest::getAutoTicketFlag() const {
  return autoTicketFlag;
}
void JipiaoPolicyProcessRequest::setAutoTicketFlag (bool autoTicketFlag) {
  this->autoTicketFlag = autoTicketFlag;
  appParams.insert("auto_ticket_flag", autoTicketFlag? "true": "false");
}

QString JipiaoPolicyProcessRequest::getCabinRules() const {
  return cabinRules;
}
void JipiaoPolicyProcessRequest::setCabinRules (QString cabinRules) {
  this->cabinRules = cabinRules;
  appParams.insert("cabin_rules", cabinRules);
}

QString JipiaoPolicyProcessRequest::getChangeRule() const {
  return changeRule;
}
void JipiaoPolicyProcessRequest::setChangeRule (QString changeRule) {
  this->changeRule = changeRule;
  appParams.insert("change_rule", changeRule);
}

QString JipiaoPolicyProcessRequest::getDayOfWeeks() const {
  return dayOfWeeks;
}
void JipiaoPolicyProcessRequest::setDayOfWeeks (QString dayOfWeeks) {
  this->dayOfWeeks = dayOfWeeks;
  appParams.insert("day_of_weeks", dayOfWeeks);
}

QString JipiaoPolicyProcessRequest::getDepAirports() const {
  return depAirports;
}
void JipiaoPolicyProcessRequest::setDepAirports (QString depAirports) {
  this->depAirports = depAirports;
  appParams.insert("dep_airports", depAirports);
}

QString JipiaoPolicyProcessRequest::getEi() const {
  return ei;
}
void JipiaoPolicyProcessRequest::setEi (QString ei) {
  this->ei = ei;
  appParams.insert("ei", ei);
}

QString JipiaoPolicyProcessRequest::getExcludeDate() const {
  return excludeDate;
}
void JipiaoPolicyProcessRequest::setExcludeDate (QString excludeDate) {
  this->excludeDate = excludeDate;
  appParams.insert("exclude_date", excludeDate);
}

qlonglong JipiaoPolicyProcessRequest::getFirstSaleAdvanceDay() const {
  return firstSaleAdvanceDay;
}
void JipiaoPolicyProcessRequest::setFirstSaleAdvanceDay (qlonglong firstSaleAdvanceDay) {
  this->firstSaleAdvanceDay = firstSaleAdvanceDay;
  appParams.insert("first_sale_advance_day", QString::number(firstSaleAdvanceDay));
}

qlonglong JipiaoPolicyProcessRequest::getFlags() const {
  return flags;
}
void JipiaoPolicyProcessRequest::setFlags (qlonglong flags) {
  this->flags = flags;
  appParams.insert("flags", QString::number(flags));
}

QString JipiaoPolicyProcessRequest::getFlightInfo() const {
  return flightInfo;
}
void JipiaoPolicyProcessRequest::setFlightInfo (QString flightInfo) {
  this->flightInfo = flightInfo;
  appParams.insert("flight_info", flightInfo);
}

qlonglong JipiaoPolicyProcessRequest::getLastSaleAdvanceDay() const {
  return lastSaleAdvanceDay;
}
void JipiaoPolicyProcessRequest::setLastSaleAdvanceDay (qlonglong lastSaleAdvanceDay) {
  this->lastSaleAdvanceDay = lastSaleAdvanceDay;
  appParams.insert("last_sale_advance_day", QString::number(lastSaleAdvanceDay));
}

QString JipiaoPolicyProcessRequest::getMemo() const {
  return memo;
}
void JipiaoPolicyProcessRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString JipiaoPolicyProcessRequest::getOfficeId() const {
  return officeId;
}
void JipiaoPolicyProcessRequest::setOfficeId (QString officeId) {
  this->officeId = officeId;
  appParams.insert("office_id", officeId);
}

QString JipiaoPolicyProcessRequest::getOutProductId() const {
  return outProductId;
}
void JipiaoPolicyProcessRequest::setOutProductId (QString outProductId) {
  this->outProductId = outProductId;
  appParams.insert("out_product_id", outProductId);
}

QString JipiaoPolicyProcessRequest::getPolicyId() const {
  return policyId;
}
void JipiaoPolicyProcessRequest::setPolicyId (QString policyId) {
  this->policyId = policyId;
  appParams.insert("policy_id", policyId);
}

qlonglong JipiaoPolicyProcessRequest::getPolicyType() const {
  return policyType;
}
void JipiaoPolicyProcessRequest::setPolicyType (qlonglong policyType) {
  this->policyType = policyType;
  appParams.insert("policy_type", QString::number(policyType));
}

QString JipiaoPolicyProcessRequest::getRefundRule() const {
  return refundRule;
}
void JipiaoPolicyProcessRequest::setRefundRule (QString refundRule) {
  this->refundRule = refundRule;
  appParams.insert("refund_rule", refundRule);
}

QString JipiaoPolicyProcessRequest::getReissueRule() const {
  return reissueRule;
}
void JipiaoPolicyProcessRequest::setReissueRule (QString reissueRule) {
  this->reissueRule = reissueRule;
  appParams.insert("reissue_rule", reissueRule);
}

QDateTime JipiaoPolicyProcessRequest::getSaleEndDate() const {
  return saleEndDate;
}
void JipiaoPolicyProcessRequest::setSaleEndDate (QDateTime saleEndDate) {
  this->saleEndDate = saleEndDate;
  appParams.insert("sale_end_date", saleEndDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime JipiaoPolicyProcessRequest::getSaleStartDate() const {
  return saleStartDate;
}
void JipiaoPolicyProcessRequest::setSaleStartDate (QDateTime saleStartDate) {
  this->saleStartDate = saleStartDate;
  appParams.insert("sale_start_date", saleStartDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString JipiaoPolicyProcessRequest::getSeatInfo() const {
  return seatInfo;
}
void JipiaoPolicyProcessRequest::setSeatInfo (QString seatInfo) {
  this->seatInfo = seatInfo;
  appParams.insert("seat_info", seatInfo);
}

bool JipiaoPolicyProcessRequest::getShareSupport() const {
  return shareSupport;
}
void JipiaoPolicyProcessRequest::setShareSupport (bool shareSupport) {
  this->shareSupport = shareSupport;
  appParams.insert("share_support", shareSupport? "true": "false");
}

QString JipiaoPolicyProcessRequest::getSpecialRule() const {
  return specialRule;
}
void JipiaoPolicyProcessRequest::setSpecialRule (QString specialRule) {
  this->specialRule = specialRule;
  appParams.insert("special_rule", specialRule);
}

QDateTime JipiaoPolicyProcessRequest::getTravelEndDate() const {
  return travelEndDate;
}
void JipiaoPolicyProcessRequest::setTravelEndDate (QDateTime travelEndDate) {
  this->travelEndDate = travelEndDate;
  appParams.insert("travel_end_date", travelEndDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime JipiaoPolicyProcessRequest::getTravelStartDate() const {
  return travelStartDate;
}
void JipiaoPolicyProcessRequest::setTravelStartDate (QDateTime travelStartDate) {
  this->travelStartDate = travelStartDate;
  appParams.insert("travel_start_date", travelStartDate.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong JipiaoPolicyProcessRequest::getType() const {
  return type;
}
void JipiaoPolicyProcessRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



JipiaoPolicyProcessResponse *JipiaoPolicyProcessRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  JipiaoPolicyProcessResponse *tmpResponse = new JipiaoPolicyProcessResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
