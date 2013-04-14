#include <TaoApiCpp/domain/Policy.h>
qlonglong Policy::getAgentId() const {
  return agentId;
}
void Policy::setAgentId (qlonglong agentId) {
  this->agentId = agentId;
}

QString Policy::getAirline() const {
  return airline;
}
void Policy::setAirline (QString airline) {
  this->airline = airline;
}

QString Policy::getArrAirports() const {
  return arrAirports;
}
void Policy::setArrAirports (QString arrAirports) {
  this->arrAirports = arrAirports;
}

QString Policy::getAttributes() const {
  return attributes;
}
void Policy::setAttributes (QString attributes) {
  this->attributes = attributes;
}

bool Policy::getAutoHkFlag() const {
  return autoHkFlag;
}
void Policy::setAutoHkFlag (bool autoHkFlag) {
  this->autoHkFlag = autoHkFlag;
}

bool Policy::getAutoTicketFlag() const {
  return autoTicketFlag;
}
void Policy::setAutoTicketFlag (bool autoTicketFlag) {
  this->autoTicketFlag = autoTicketFlag;
}

QString Policy::getCabinRules() const {
  return cabinRules;
}
void Policy::setCabinRules (QString cabinRules) {
  this->cabinRules = cabinRules;
}

QString Policy::getDepAirports() const {
  return depAirports;
}
void Policy::setDepAirports (QString depAirports) {
  this->depAirports = depAirports;
}

qlonglong Policy::getFirstSaleAdvanceDay() const {
  return firstSaleAdvanceDay;
}
void Policy::setFirstSaleAdvanceDay (qlonglong firstSaleAdvanceDay) {
  this->firstSaleAdvanceDay = firstSaleAdvanceDay;
}

qlonglong Policy::getFlags() const {
  return flags;
}
void Policy::setFlags (qlonglong flags) {
  this->flags = flags;
}

QString Policy::getFlightInfo() const {
  return flightInfo;
}
void Policy::setFlightInfo (QString flightInfo) {
  this->flightInfo = flightInfo;
}

qlonglong Policy::getId() const {
  return id;
}
void Policy::setId (qlonglong id) {
  this->id = id;
}

qlonglong Policy::getLastSaleAdvanceDay() const {
  return lastSaleAdvanceDay;
}
void Policy::setLastSaleAdvanceDay (qlonglong lastSaleAdvanceDay) {
  this->lastSaleAdvanceDay = lastSaleAdvanceDay;
}

QString Policy::getOutProductId() const {
  return outProductId;
}
void Policy::setOutProductId (QString outProductId) {
  this->outProductId = outProductId;
}

PolicyDetail Policy::getPolicyDetail() const {
  return policyDetail;
}
void Policy::setPolicyDetail (PolicyDetail policyDetail) {
  this->policyDetail = policyDetail;
}

qlonglong Policy::getPolicyType() const {
  return policyType;
}
void Policy::setPolicyType (qlonglong policyType) {
  this->policyType = policyType;
}

QDateTime Policy::getSaleEndDate() const {
  return saleEndDate;
}
void Policy::setSaleEndDate (QDateTime saleEndDate) {
  this->saleEndDate = saleEndDate;
}

QDateTime Policy::getSaleStartDate() const {
  return saleStartDate;
}
void Policy::setSaleStartDate (QDateTime saleStartDate) {
  this->saleStartDate = saleStartDate;
}

QString Policy::getSeatInfo() const {
  return seatInfo;
}
void Policy::setSeatInfo (QString seatInfo) {
  this->seatInfo = seatInfo;
}

bool Policy::getShareSupport() const {
  return shareSupport;
}
void Policy::setShareSupport (bool shareSupport) {
  this->shareSupport = shareSupport;
}

qlonglong Policy::getStatus() const {
  return status;
}
void Policy::setStatus (qlonglong status) {
  this->status = status;
}

QDateTime Policy::getTravelEndDate() const {
  return travelEndDate;
}
void Policy::setTravelEndDate (QDateTime travelEndDate) {
  this->travelEndDate = travelEndDate;
}

QDateTime Policy::getTravelStartDate() const {
  return travelStartDate;
}
void Policy::setTravelStartDate (QDateTime travelStartDate) {
  this->travelStartDate = travelStartDate;
}

qlonglong Policy::getTripType() const {
  return tripType;
}
void Policy::setTripType (qlonglong tripType) {
  this->tripType = tripType;
}


void Policy::parseResponse() {
  if (responseParser->hasName("agent_id")) {
  agentId = responseParser->getNumByName("agent_id");
  }
  if (responseParser->hasName("airline")) {
  airline = responseParser->getStrByName("airline");
  }
  if (responseParser->hasName("arr_airports")) {
  arrAirports = responseParser->getStrByName("arr_airports");
  }
  if (responseParser->hasName("attributes")) {
  attributes = responseParser->getStrByName("attributes");
  }
  if (responseParser->hasName("auto_hk_flag")) {
  autoHkFlag = responseParser->getBoolByName("auto_hk_flag");
  }
  if (responseParser->hasName("auto_ticket_flag")) {
  autoTicketFlag = responseParser->getBoolByName("auto_ticket_flag");
  }
  if (responseParser->hasName("cabin_rules")) {
  cabinRules = responseParser->getStrByName("cabin_rules");
  }
  if (responseParser->hasName("dep_airports")) {
  depAirports = responseParser->getStrByName("dep_airports");
  }
  if (responseParser->hasName("first_sale_advance_day")) {
  firstSaleAdvanceDay = responseParser->getNumByName("first_sale_advance_day");
  }
  if (responseParser->hasName("flags")) {
  flags = responseParser->getNumByName("flags");
  }
  if (responseParser->hasName("flight_info")) {
  flightInfo = responseParser->getStrByName("flight_info");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("last_sale_advance_day")) {
  lastSaleAdvanceDay = responseParser->getNumByName("last_sale_advance_day");
  }
  if (responseParser->hasName("out_product_id")) {
  outProductId = responseParser->getStrByName("out_product_id");
  }
  if (responseParser->hasName("policy_detail")) {
  policyDetail.setParser(responseParser->getObjectParser("policy_detail"));
  policyDetail.parseResponse();
  }
  if (responseParser->hasName("policy_type")) {
  policyType = responseParser->getNumByName("policy_type");
  }
  if (responseParser->hasName("sale_end_date")) {
  saleEndDate = responseParser->getDateByName("sale_end_date");
  }
  if (responseParser->hasName("sale_start_date")) {
  saleStartDate = responseParser->getDateByName("sale_start_date");
  }
  if (responseParser->hasName("seat_info")) {
  seatInfo = responseParser->getStrByName("seat_info");
  }
  if (responseParser->hasName("share_support")) {
  shareSupport = responseParser->getBoolByName("share_support");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("travel_end_date")) {
  travelEndDate = responseParser->getDateByName("travel_end_date");
  }
  if (responseParser->hasName("travel_start_date")) {
  travelStartDate = responseParser->getDateByName("travel_start_date");
  }
  if (responseParser->hasName("trip_type")) {
  tripType = responseParser->getNumByName("trip_type");
  }

}

