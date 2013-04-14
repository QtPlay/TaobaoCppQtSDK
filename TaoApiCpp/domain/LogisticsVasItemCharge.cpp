#include <TaoApiCpp/domain/LogisticsVasItemCharge.h>
QString LogisticsVasItemCharge::getCost() const {
  return cost;
}
void LogisticsVasItemCharge::setCost (QString cost) {
  this->cost = cost;
}

QString LogisticsVasItemCharge::getOriginalCost() const {
  return originalCost;
}
void LogisticsVasItemCharge::setOriginalCost (QString originalCost) {
  this->originalCost = originalCost;
}

QString LogisticsVasItemCharge::getVasCode() const {
  return vasCode;
}
void LogisticsVasItemCharge::setVasCode (QString vasCode) {
  this->vasCode = vasCode;
}

QString LogisticsVasItemCharge::getVasId() const {
  return vasId;
}
void LogisticsVasItemCharge::setVasId (QString vasId) {
  this->vasId = vasId;
}


void LogisticsVasItemCharge::parseResponse() {
  if (responseParser->hasName("cost")) {
  cost = responseParser->getStrByName("cost");
  }
  if (responseParser->hasName("original_cost")) {
  originalCost = responseParser->getStrByName("original_cost");
  }
  if (responseParser->hasName("vas_code")) {
  vasCode = responseParser->getStrByName("vas_code");
  }
  if (responseParser->hasName("vas_id")) {
  vasId = responseParser->getStrByName("vas_id");
  }

}

