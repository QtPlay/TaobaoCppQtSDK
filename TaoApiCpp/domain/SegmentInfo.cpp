#include <TaoApiCpp/domain/SegmentInfo.h>
QString SegmentInfo::getAirlineCode() const {
  return airlineCode;
}
void SegmentInfo::setAirlineCode (QString airlineCode) {
  this->airlineCode = airlineCode;
}

QString SegmentInfo::getArrAirportCode() const {
  return arrAirportCode;
}
void SegmentInfo::setArrAirportCode (QString arrAirportCode) {
  this->arrAirportCode = arrAirportCode;
}

QString SegmentInfo::getArrCityCode() const {
  return arrCityCode;
}
void SegmentInfo::setArrCityCode (QString arrCityCode) {
  this->arrCityCode = arrCityCode;
}

QString SegmentInfo::getArrTime() const {
  return arrTime;
}
void SegmentInfo::setArrTime (QString arrTime) {
  this->arrTime = arrTime;
}

qlonglong SegmentInfo::getBookStatus() const {
  return bookStatus;
}
void SegmentInfo::setBookStatus (qlonglong bookStatus) {
  this->bookStatus = bookStatus;
}

qlonglong SegmentInfo::getCabinClass() const {
  return cabinClass;
}
void SegmentInfo::setCabinClass (qlonglong cabinClass) {
  this->cabinClass = cabinClass;
}

QString SegmentInfo::getCabinCode() const {
  return cabinCode;
}
void SegmentInfo::setCabinCode (QString cabinCode) {
  this->cabinCode = cabinCode;
}

qlonglong SegmentInfo::getCabinId() const {
  return cabinId;
}
void SegmentInfo::setCabinId (qlonglong cabinId) {
  this->cabinId = cabinId;
}

QString SegmentInfo::getCarrier() const {
  return carrier;
}
void SegmentInfo::setCarrier (QString carrier) {
  this->carrier = carrier;
}

qlonglong SegmentInfo::getChildFee() const {
  return childFee;
}
void SegmentInfo::setChildFee (qlonglong childFee) {
  this->childFee = childFee;
}

qlonglong SegmentInfo::getChildPrice() const {
  return childPrice;
}
void SegmentInfo::setChildPrice (qlonglong childPrice) {
  this->childPrice = childPrice;
}

qlonglong SegmentInfo::getChildTax() const {
  return childTax;
}
void SegmentInfo::setChildTax (qlonglong childTax) {
  this->childTax = childTax;
}

QString SegmentInfo::getDepAirportCode() const {
  return depAirportCode;
}
void SegmentInfo::setDepAirportCode (QString depAirportCode) {
  this->depAirportCode = depAirportCode;
}

QString SegmentInfo::getDepCityCode() const {
  return depCityCode;
}
void SegmentInfo::setDepCityCode (QString depCityCode) {
  this->depCityCode = depCityCode;
}

QString SegmentInfo::getDepTime() const {
  return depTime;
}
void SegmentInfo::setDepTime (QString depTime) {
  this->depTime = depTime;
}

QString SegmentInfo::getExtra() const {
  return extra;
}
void SegmentInfo::setExtra (QString extra) {
  this->extra = extra;
}

qlonglong SegmentInfo::getFee() const {
  return fee;
}
void SegmentInfo::setFee (qlonglong fee) {
  this->fee = fee;
}

qlonglong SegmentInfo::getFlightId() const {
  return flightId;
}
void SegmentInfo::setFlightId (qlonglong flightId) {
  this->flightId = flightId;
}

QString SegmentInfo::getFlightNo() const {
  return flightNo;
}
void SegmentInfo::setFlightNo (QString flightNo) {
  this->flightNo = flightNo;
}

QString SegmentInfo::getFlightType() const {
  return flightType;
}
void SegmentInfo::setFlightType (QString flightType) {
  this->flightType = flightType;
}

QString SegmentInfo::getMemo() const {
  return memo;
}
void SegmentInfo::setMemo (QString memo) {
  this->memo = memo;
}

QList<Passerger> SegmentInfo::getPassengers() const {
  return passengers;
}
void SegmentInfo::setPassengers (QList<Passerger> passengers) {
  this->passengers = passengers;
}

qlonglong SegmentInfo::getPolicyId() const {
  return policyId;
}
void SegmentInfo::setPolicyId (qlonglong policyId) {
  this->policyId = policyId;
}

qlonglong SegmentInfo::getPolicyType() const {
  return policyType;
}
void SegmentInfo::setPolicyType (qlonglong policyType) {
  this->policyType = policyType;
}

qlonglong SegmentInfo::getPrice() const {
  return price;
}
void SegmentInfo::setPrice (qlonglong price) {
  this->price = price;
}

qlonglong SegmentInfo::getSegmentType() const {
  return segmentType;
}
void SegmentInfo::setSegmentType (qlonglong segmentType) {
  this->segmentType = segmentType;
}

QString SegmentInfo::getSpecialRule() const {
  return specialRule;
}
void SegmentInfo::setSpecialRule (QString specialRule) {
  this->specialRule = specialRule;
}

qlonglong SegmentInfo::getTax() const {
  return tax;
}
void SegmentInfo::setTax (qlonglong tax) {
  this->tax = tax;
}

qlonglong SegmentInfo::getTicketPrice() const {
  return ticketPrice;
}
void SegmentInfo::setTicketPrice (qlonglong ticketPrice) {
  this->ticketPrice = ticketPrice;
}


void SegmentInfo::parseResponse() {
  if (responseParser->hasName("airline_code")) {
  airlineCode = responseParser->getStrByName("airline_code");
  }
  if (responseParser->hasName("arr_airport_code")) {
  arrAirportCode = responseParser->getStrByName("arr_airport_code");
  }
  if (responseParser->hasName("arr_city_code")) {
  arrCityCode = responseParser->getStrByName("arr_city_code");
  }
  if (responseParser->hasName("arr_time")) {
  arrTime = responseParser->getStrByName("arr_time");
  }
  if (responseParser->hasName("book_status")) {
  bookStatus = responseParser->getNumByName("book_status");
  }
  if (responseParser->hasName("cabin_class")) {
  cabinClass = responseParser->getNumByName("cabin_class");
  }
  if (responseParser->hasName("cabin_code")) {
  cabinCode = responseParser->getStrByName("cabin_code");
  }
  if (responseParser->hasName("cabin_id")) {
  cabinId = responseParser->getNumByName("cabin_id");
  }
  if (responseParser->hasName("carrier")) {
  carrier = responseParser->getStrByName("carrier");
  }
  if (responseParser->hasName("child_fee")) {
  childFee = responseParser->getNumByName("child_fee");
  }
  if (responseParser->hasName("child_price")) {
  childPrice = responseParser->getNumByName("child_price");
  }
  if (responseParser->hasName("child_tax")) {
  childTax = responseParser->getNumByName("child_tax");
  }
  if (responseParser->hasName("dep_airport_code")) {
  depAirportCode = responseParser->getStrByName("dep_airport_code");
  }
  if (responseParser->hasName("dep_city_code")) {
  depCityCode = responseParser->getStrByName("dep_city_code");
  }
  if (responseParser->hasName("dep_time")) {
  depTime = responseParser->getStrByName("dep_time");
  }
  if (responseParser->hasName("extra")) {
  extra = responseParser->getStrByName("extra");
  }
  if (responseParser->hasName("fee")) {
  fee = responseParser->getNumByName("fee");
  }
  if (responseParser->hasName("flight_id")) {
  flightId = responseParser->getNumByName("flight_id");
  }
  if (responseParser->hasName("flight_no")) {
  flightNo = responseParser->getStrByName("flight_no");
  }
  if (responseParser->hasName("flight_type")) {
  flightType = responseParser->getStrByName("flight_type");
  }
  if (responseParser->hasName("memo")) {
  memo = responseParser->getStrByName("memo");
  }
  if (responseParser->hasName("passengers")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("passengers");
  Parser *parser;
  foreach (parser, listParser) {
    Passerger tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    passengers.append(tmp);
  }
  }
  if (responseParser->hasName("policy_id")) {
  policyId = responseParser->getNumByName("policy_id");
  }
  if (responseParser->hasName("policy_type")) {
  policyType = responseParser->getNumByName("policy_type");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getNumByName("price");
  }
  if (responseParser->hasName("segment_type")) {
  segmentType = responseParser->getNumByName("segment_type");
  }
  if (responseParser->hasName("special_rule")) {
  specialRule = responseParser->getStrByName("special_rule");
  }
  if (responseParser->hasName("tax")) {
  tax = responseParser->getNumByName("tax");
  }
  if (responseParser->hasName("ticket_price")) {
  ticketPrice = responseParser->getNumByName("ticket_price");
  }

}

