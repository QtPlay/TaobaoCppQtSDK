#include <TaoApiCpp/domain/Passerger.h>
QString Passerger::getBirthday() const {
  return birthday;
}
void Passerger::setBirthday (QString birthday) {
  this->birthday = birthday;
}

QString Passerger::getCertNo() const {
  return certNo;
}
void Passerger::setCertNo (QString certNo) {
  this->certNo = certNo;
}

qlonglong Passerger::getCertType() const {
  return certType;
}
void Passerger::setCertType (qlonglong certType) {
  this->certType = certType;
}

QString Passerger::getEi() const {
  return ei;
}
void Passerger::setEi (QString ei) {
  this->ei = ei;
}

QString Passerger::getExtra() const {
  return extra;
}
void Passerger::setExtra (QString extra) {
  this->extra = extra;
}

QString Passerger::getName() const {
  return name;
}
void Passerger::setName (QString name) {
  this->name = name;
}

qlonglong Passerger::getPassengerType() const {
  return passengerType;
}
void Passerger::setPassengerType (qlonglong passengerType) {
  this->passengerType = passengerType;
}

QString Passerger::getPnr() const {
  return pnr;
}
void Passerger::setPnr (QString pnr) {
  this->pnr = pnr;
}

QString Passerger::getTicketNo() const {
  return ticketNo;
}
void Passerger::setTicketNo (QString ticketNo) {
  this->ticketNo = ticketNo;
}

QString Passerger::getTripCardNo() const {
  return tripCardNo;
}
void Passerger::setTripCardNo (QString tripCardNo) {
  this->tripCardNo = tripCardNo;
}

QString Passerger::getTuigaiqian() const {
  return tuigaiqian;
}
void Passerger::setTuigaiqian (QString tuigaiqian) {
  this->tuigaiqian = tuigaiqian;
}


void Passerger::parseResponse() {
  if (responseParser->hasName("birthday")) {
  birthday = responseParser->getStrByName("birthday");
  }
  if (responseParser->hasName("cert_no")) {
  certNo = responseParser->getStrByName("cert_no");
  }
  if (responseParser->hasName("cert_type")) {
  certType = responseParser->getNumByName("cert_type");
  }
  if (responseParser->hasName("ei")) {
  ei = responseParser->getStrByName("ei");
  }
  if (responseParser->hasName("extra")) {
  extra = responseParser->getStrByName("extra");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("passenger_type")) {
  passengerType = responseParser->getNumByName("passenger_type");
  }
  if (responseParser->hasName("pnr")) {
  pnr = responseParser->getStrByName("pnr");
  }
  if (responseParser->hasName("ticket_no")) {
  ticketNo = responseParser->getStrByName("ticket_no");
  }
  if (responseParser->hasName("trip_card_no")) {
  tripCardNo = responseParser->getStrByName("trip_card_no");
  }
  if (responseParser->hasName("tuigaiqian")) {
  tuigaiqian = responseParser->getStrByName("tuigaiqian");
  }

}

