#include <TaoApiCpp/domain/TopFee.h>
QString TopFee::getAddFee() const {
  return addFee;
}
void TopFee::setAddFee (QString addFee) {
  this->addFee = addFee;
}

QString TopFee::getAddStandard() const {
  return addStandard;
}
void TopFee::setAddStandard (QString addStandard) {
  this->addStandard = addStandard;
}

QString TopFee::getDestination() const {
  return destination;
}
void TopFee::setDestination (QString destination) {
  this->destination = destination;
}

QString TopFee::getServiceType() const {
  return serviceType;
}
void TopFee::setServiceType (QString serviceType) {
  this->serviceType = serviceType;
}

QString TopFee::getStartFee() const {
  return startFee;
}
void TopFee::setStartFee (QString startFee) {
  this->startFee = startFee;
}

QString TopFee::getStartStandard() const {
  return startStandard;
}
void TopFee::setStartStandard (QString startStandard) {
  this->startStandard = startStandard;
}


void TopFee::parseResponse() {
  if (responseParser->hasName("add_fee")) {
  addFee = responseParser->getStrByName("add_fee");
  }
  if (responseParser->hasName("add_standard")) {
  addStandard = responseParser->getStrByName("add_standard");
  }
  if (responseParser->hasName("destination")) {
  destination = responseParser->getStrByName("destination");
  }
  if (responseParser->hasName("service_type")) {
  serviceType = responseParser->getStrByName("service_type");
  }
  if (responseParser->hasName("start_fee")) {
  startFee = responseParser->getStrByName("start_fee");
  }
  if (responseParser->hasName("start_standard")) {
  startStandard = responseParser->getStrByName("start_standard");
  }

}

