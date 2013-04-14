#include <TaoApiCpp/domain/Receiver.h>
QString Receiver::getAddress() const {
  return address;
}
void Receiver::setAddress (QString address) {
  this->address = address;
}

QString Receiver::getCity() const {
  return city;
}
void Receiver::setCity (QString city) {
  this->city = city;
}

QString Receiver::getDistrict() const {
  return district;
}
void Receiver::setDistrict (QString district) {
  this->district = district;
}

QString Receiver::getMobilePhone() const {
  return mobilePhone;
}
void Receiver::setMobilePhone (QString mobilePhone) {
  this->mobilePhone = mobilePhone;
}

QString Receiver::getName() const {
  return name;
}
void Receiver::setName (QString name) {
  this->name = name;
}

QString Receiver::getPhone() const {
  return phone;
}
void Receiver::setPhone (QString phone) {
  this->phone = phone;
}

QString Receiver::getState() const {
  return state;
}
void Receiver::setState (QString state) {
  this->state = state;
}

QString Receiver::getZip() const {
  return zip;
}
void Receiver::setZip (QString zip) {
  this->zip = zip;
}


void Receiver::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("city")) {
  city = responseParser->getStrByName("city");
  }
  if (responseParser->hasName("district")) {
  district = responseParser->getStrByName("district");
  }
  if (responseParser->hasName("mobile_phone")) {
  mobilePhone = responseParser->getStrByName("mobile_phone");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("phone")) {
  phone = responseParser->getStrByName("phone");
  }
  if (responseParser->hasName("state")) {
  state = responseParser->getStrByName("state");
  }
  if (responseParser->hasName("zip")) {
  zip = responseParser->getStrByName("zip");
  }

}

