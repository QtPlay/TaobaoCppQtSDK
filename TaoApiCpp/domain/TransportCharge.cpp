#include <TaoApiCpp/domain/TransportCharge.h>
QString TransportCharge::getCost() const {
  return cost;
}
void TransportCharge::setCost (QString cost) {
  this->cost = cost;
}

QString TransportCharge::getCostBy() const {
  return costBy;
}
void TransportCharge::setCostBy (QString costBy) {
  this->costBy = costBy;
}

QString TransportCharge::getOriginalCost() const {
  return originalCost;
}
void TransportCharge::setOriginalCost (QString originalCost) {
  this->originalCost = originalCost;
}

QString TransportCharge::getSavedCost() const {
  return savedCost;
}
void TransportCharge::setSavedCost (QString savedCost) {
  this->savedCost = savedCost;
}


void TransportCharge::parseResponse() {
  if (responseParser->hasName("cost")) {
  cost = responseParser->getStrByName("cost");
  }
  if (responseParser->hasName("cost_by")) {
  costBy = responseParser->getStrByName("cost_by");
  }
  if (responseParser->hasName("original_cost")) {
  originalCost = responseParser->getStrByName("original_cost");
  }
  if (responseParser->hasName("saved_cost")) {
  savedCost = responseParser->getStrByName("saved_cost");
  }

}

