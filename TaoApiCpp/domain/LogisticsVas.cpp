#include <TaoApiCpp/domain/LogisticsVas.h>
QString LogisticsVas::getChargeCalculateType() const {
  return chargeCalculateType;
}
void LogisticsVas::setChargeCalculateType (QString chargeCalculateType) {
  this->chargeCalculateType = chargeCalculateType;
}

QString LogisticsVas::getComments() const {
  return comments;
}
void LogisticsVas::setComments (QString comments) {
  this->comments = comments;
}

bool LogisticsVas::getDefaultSelected() const {
  return defaultSelected;
}
void LogisticsVas::setDefaultSelected (bool defaultSelected) {
  this->defaultSelected = defaultSelected;
}

bool LogisticsVas::getDisplayable() const {
  return displayable;
}
void LogisticsVas::setDisplayable (bool displayable) {
  this->displayable = displayable;
}

bool LogisticsVas::getNeeded() const {
  return needed;
}
void LogisticsVas::setNeeded (bool needed) {
  this->needed = needed;
}

bool LogisticsVas::getValueDisplayable() const {
  return valueDisplayable;
}
void LogisticsVas::setValueDisplayable (bool valueDisplayable) {
  this->valueDisplayable = valueDisplayable;
}

QString LogisticsVas::getVasCode() const {
  return vasCode;
}
void LogisticsVas::setVasCode (QString vasCode) {
  this->vasCode = vasCode;
}

QString LogisticsVas::getVasName() const {
  return vasName;
}
void LogisticsVas::setVasName (QString vasName) {
  this->vasName = vasName;
}


void LogisticsVas::parseResponse() {
  if (responseParser->hasName("charge_calculate_type")) {
  chargeCalculateType = responseParser->getStrByName("charge_calculate_type");
  }
  if (responseParser->hasName("comments")) {
  comments = responseParser->getStrByName("comments");
  }
  if (responseParser->hasName("default_selected")) {
  defaultSelected = responseParser->getBoolByName("default_selected");
  }
  if (responseParser->hasName("displayable")) {
  displayable = responseParser->getBoolByName("displayable");
  }
  if (responseParser->hasName("needed")) {
  needed = responseParser->getBoolByName("needed");
  }
  if (responseParser->hasName("value_displayable")) {
  valueDisplayable = responseParser->getBoolByName("value_displayable");
  }
  if (responseParser->hasName("vas_code")) {
  vasCode = responseParser->getStrByName("vas_code");
  }
  if (responseParser->hasName("vas_name")) {
  vasName = responseParser->getStrByName("vas_name");
  }

}

