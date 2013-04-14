#include <TaoApiCpp/domain/WlbPartnerContact.h>
QString WlbPartnerContact::getName() const {
  return name;
}
void WlbPartnerContact::setName (QString name) {
  this->name = name;
}

QString WlbPartnerContact::getPhone() const {
  return phone;
}
void WlbPartnerContact::setPhone (QString phone) {
  this->phone = phone;
}


void WlbPartnerContact::parseResponse() {
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("phone")) {
  phone = responseParser->getStrByName("phone");
  }

}

