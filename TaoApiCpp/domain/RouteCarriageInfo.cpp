#include <TaoApiCpp/domain/RouteCarriageInfo.h>
QString RouteCarriageInfo::getAddFee() const {
  return addFee;
}
void RouteCarriageInfo::setAddFee (QString addFee) {
  this->addFee = addFee;
}

QString RouteCarriageInfo::getComments() const {
  return comments;
}
void RouteCarriageInfo::setComments (QString comments) {
  this->comments = comments;
}

QString RouteCarriageInfo::getGiveTime() const {
  return giveTime;
}
void RouteCarriageInfo::setGiveTime (QString giveTime) {
  this->giveTime = giveTime;
}

QString RouteCarriageInfo::getInitialFee() const {
  return initialFee;
}
void RouteCarriageInfo::setInitialFee (QString initialFee) {
  this->initialFee = initialFee;
}

QString RouteCarriageInfo::getLeastExpense() const {
  return leastExpense;
}
void RouteCarriageInfo::setLeastExpense (QString leastExpense) {
  this->leastExpense = leastExpense;
}

QString RouteCarriageInfo::getOrigVolumeRate() const {
  return origVolumeRate;
}
void RouteCarriageInfo::setOrigVolumeRate (QString origVolumeRate) {
  this->origVolumeRate = origVolumeRate;
}

QString RouteCarriageInfo::getOrigWeightRate() const {
  return origWeightRate;
}
void RouteCarriageInfo::setOrigWeightRate (QString origWeightRate) {
  this->origWeightRate = origWeightRate;
}

QString RouteCarriageInfo::getPriceDescription() const {
  return priceDescription;
}
void RouteCarriageInfo::setPriceDescription (QString priceDescription) {
  this->priceDescription = priceDescription;
}

QString RouteCarriageInfo::getTakeTime() const {
  return takeTime;
}
void RouteCarriageInfo::setTakeTime (QString takeTime) {
  this->takeTime = takeTime;
}

QString RouteCarriageInfo::getTransportMode() const {
  return transportMode;
}
void RouteCarriageInfo::setTransportMode (QString transportMode) {
  this->transportMode = transportMode;
}

QString RouteCarriageInfo::getTransportName() const {
  return transportName;
}
void RouteCarriageInfo::setTransportName (QString transportName) {
  this->transportName = transportName;
}

QString RouteCarriageInfo::getTransportTime() const {
  return transportTime;
}
void RouteCarriageInfo::setTransportTime (QString transportTime) {
  this->transportTime = transportTime;
}

qlonglong RouteCarriageInfo::getTransportTimeHours() const {
  return transportTimeHours;
}
void RouteCarriageInfo::setTransportTimeHours (qlonglong transportTimeHours) {
  this->transportTimeHours = transportTimeHours;
}

QString RouteCarriageInfo::getTransportTypeCode() const {
  return transportTypeCode;
}
void RouteCarriageInfo::setTransportTypeCode (QString transportTypeCode) {
  this->transportTypeCode = transportTypeCode;
}

QString RouteCarriageInfo::getTransportWay() const {
  return transportWay;
}
void RouteCarriageInfo::setTransportWay (QString transportWay) {
  this->transportWay = transportWay;
}

QString RouteCarriageInfo::getVolumeRate() const {
  return volumeRate;
}
void RouteCarriageInfo::setVolumeRate (QString volumeRate) {
  this->volumeRate = volumeRate;
}

QString RouteCarriageInfo::getWeightRate() const {
  return weightRate;
}
void RouteCarriageInfo::setWeightRate (QString weightRate) {
  this->weightRate = weightRate;
}


void RouteCarriageInfo::parseResponse() {
  if (responseParser->hasName("add_fee")) {
  addFee = responseParser->getStrByName("add_fee");
  }
  if (responseParser->hasName("comments")) {
  comments = responseParser->getStrByName("comments");
  }
  if (responseParser->hasName("give_time")) {
  giveTime = responseParser->getStrByName("give_time");
  }
  if (responseParser->hasName("initial_fee")) {
  initialFee = responseParser->getStrByName("initial_fee");
  }
  if (responseParser->hasName("least_expense")) {
  leastExpense = responseParser->getStrByName("least_expense");
  }
  if (responseParser->hasName("orig_volume_rate")) {
  origVolumeRate = responseParser->getStrByName("orig_volume_rate");
  }
  if (responseParser->hasName("orig_weight_rate")) {
  origWeightRate = responseParser->getStrByName("orig_weight_rate");
  }
  if (responseParser->hasName("price_description")) {
  priceDescription = responseParser->getStrByName("price_description");
  }
  if (responseParser->hasName("take_time")) {
  takeTime = responseParser->getStrByName("take_time");
  }
  if (responseParser->hasName("transport_mode")) {
  transportMode = responseParser->getStrByName("transport_mode");
  }
  if (responseParser->hasName("transport_name")) {
  transportName = responseParser->getStrByName("transport_name");
  }
  if (responseParser->hasName("transport_time")) {
  transportTime = responseParser->getStrByName("transport_time");
  }
  if (responseParser->hasName("transport_time_hours")) {
  transportTimeHours = responseParser->getNumByName("transport_time_hours");
  }
  if (responseParser->hasName("transport_type_code")) {
  transportTypeCode = responseParser->getStrByName("transport_type_code");
  }
  if (responseParser->hasName("transport_way")) {
  transportWay = responseParser->getStrByName("transport_way");
  }
  if (responseParser->hasName("volume_rate")) {
  volumeRate = responseParser->getStrByName("volume_rate");
  }
  if (responseParser->hasName("weight_rate")) {
  weightRate = responseParser->getStrByName("weight_rate");
  }

}

