#include <TaoApiCpp/domain/OrderCharge.h>
QString OrderCharge::getOriginalTotalCost() const {
  return originalTotalCost;
}
void OrderCharge::setOriginalTotalCost (QString originalTotalCost) {
  this->originalTotalCost = originalTotalCost;
}

QString OrderCharge::getOtherCost() const {
  return otherCost;
}
void OrderCharge::setOtherCost (QString otherCost) {
  this->otherCost = otherCost;
}

QString OrderCharge::getTotalCost() const {
  return totalCost;
}
void OrderCharge::setTotalCost (QString totalCost) {
  this->totalCost = totalCost;
}

QString OrderCharge::getTotalSavedCost() const {
  return totalSavedCost;
}
void OrderCharge::setTotalSavedCost (QString totalSavedCost) {
  this->totalSavedCost = totalSavedCost;
}

TransportCharge OrderCharge::getTransportCharge() const {
  return transportCharge;
}
void OrderCharge::setTransportCharge (TransportCharge transportCharge) {
  this->transportCharge = transportCharge;
}

LogisticsVasCharge OrderCharge::getVasCharge() const {
  return vasCharge;
}
void OrderCharge::setVasCharge (LogisticsVasCharge vasCharge) {
  this->vasCharge = vasCharge;
}


void OrderCharge::parseResponse() {
  if (responseParser->hasName("original_total_cost")) {
  originalTotalCost = responseParser->getStrByName("original_total_cost");
  }
  if (responseParser->hasName("other_cost")) {
  otherCost = responseParser->getStrByName("other_cost");
  }
  if (responseParser->hasName("total_cost")) {
  totalCost = responseParser->getStrByName("total_cost");
  }
  if (responseParser->hasName("total_saved_cost")) {
  totalSavedCost = responseParser->getStrByName("total_saved_cost");
  }
  if (responseParser->hasName("transport_charge")) {
  transportCharge.setParser(responseParser->getObjectParser("transport_charge"));
  transportCharge.parseResponse();
  }
  if (responseParser->hasName("vas_charge")) {
  vasCharge.setParser(responseParser->getObjectParser("vas_charge"));
  vasCharge.parseResponse();
  }

}

