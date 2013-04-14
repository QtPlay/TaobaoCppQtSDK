#include <TaoApiCpp/domain/CarriageDetail.h>
qlonglong CarriageDetail::getAddFee() const {
  return addFee;
}
void CarriageDetail::setAddFee (qlonglong addFee) {
  this->addFee = addFee;
}

qlonglong CarriageDetail::getAddWeight() const {
  return addWeight;
}
void CarriageDetail::setAddWeight (qlonglong addWeight) {
  this->addWeight = addWeight;
}

QString CarriageDetail::getDamagePayment() const {
  return damagePayment;
}
void CarriageDetail::setDamagePayment (QString damagePayment) {
  this->damagePayment = damagePayment;
}

QString CarriageDetail::getGotTime() const {
  return gotTime;
}
void CarriageDetail::setGotTime (QString gotTime) {
  this->gotTime = gotTime;
}

qlonglong CarriageDetail::getInitialFee() const {
  return initialFee;
}
void CarriageDetail::setInitialFee (qlonglong initialFee) {
  this->initialFee = initialFee;
}

qlonglong CarriageDetail::getInitialWeight() const {
  return initialWeight;
}
void CarriageDetail::setInitialWeight (qlonglong initialWeight) {
  this->initialWeight = initialWeight;
}

QString CarriageDetail::getLostPayment() const {
  return lostPayment;
}
void CarriageDetail::setLostPayment (QString lostPayment) {
  this->lostPayment = lostPayment;
}

QString CarriageDetail::getWayDay() const {
  return wayDay;
}
void CarriageDetail::setWayDay (QString wayDay) {
  this->wayDay = wayDay;
}


void CarriageDetail::parseResponse() {
  if (responseParser->hasName("add_fee")) {
  addFee = responseParser->getNumByName("add_fee");
  }
  if (responseParser->hasName("add_weight")) {
  addWeight = responseParser->getNumByName("add_weight");
  }
  if (responseParser->hasName("damage_payment")) {
  damagePayment = responseParser->getStrByName("damage_payment");
  }
  if (responseParser->hasName("got_time")) {
  gotTime = responseParser->getStrByName("got_time");
  }
  if (responseParser->hasName("initial_fee")) {
  initialFee = responseParser->getNumByName("initial_fee");
  }
  if (responseParser->hasName("initial_weight")) {
  initialWeight = responseParser->getNumByName("initial_weight");
  }
  if (responseParser->hasName("lost_payment")) {
  lostPayment = responseParser->getStrByName("lost_payment");
  }
  if (responseParser->hasName("way_day")) {
  wayDay = responseParser->getStrByName("way_day");
  }

}

