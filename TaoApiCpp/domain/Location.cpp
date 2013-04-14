#include <TaoApiCpp/domain/Location.h>
QString Location::getAddress() const {
  return address;
}
void Location::setAddress (QString address) {
  this->address = address;
}

QString Location::getCity() const {
  return city;
}
void Location::setCity (QString city) {
  this->city = city;
}

QString Location::getCountry() const {
  return country;
}
void Location::setCountry (QString country) {
  this->country = country;
}

QString Location::getDistrict() const {
  return district;
}
void Location::setDistrict (QString district) {
  this->district = district;
}

QString Location::getState() const {
  return state;
}
void Location::setState (QString state) {
  this->state = state;
}

QString Location::getZip() const {
  return zip;
}
void Location::setZip (QString zip) {
  this->zip = zip;
}


void Location::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("city")) {
  city = responseParser->getStrByName("city");
  }
  if (responseParser->hasName("country")) {
  country = responseParser->getStrByName("country");
  }
  if (responseParser->hasName("district")) {
  district = responseParser->getStrByName("district");
  }
  if (responseParser->hasName("state")) {
  state = responseParser->getStrByName("state");
  }
  if (responseParser->hasName("zip")) {
  zip = responseParser->getStrByName("zip");
  }

}

