#include <TaoApiCpp/domain/WlbPartnerAddress.h>
QString WlbPartnerAddress::getAddress() const {
  return address;
}
void WlbPartnerAddress::setAddress (QString address) {
  this->address = address;
}

QString WlbPartnerAddress::getBorough() const {
  return borough;
}
void WlbPartnerAddress::setBorough (QString borough) {
  this->borough = borough;
}

QString WlbPartnerAddress::getCity() const {
  return city;
}
void WlbPartnerAddress::setCity (QString city) {
  this->city = city;
}

QString WlbPartnerAddress::getProvince() const {
  return province;
}
void WlbPartnerAddress::setProvince (QString province) {
  this->province = province;
}

QString WlbPartnerAddress::getZip() const {
  return zip;
}
void WlbPartnerAddress::setZip (QString zip) {
  this->zip = zip;
}


void WlbPartnerAddress::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("borough")) {
  borough = responseParser->getStrByName("borough");
  }
  if (responseParser->hasName("city")) {
  city = responseParser->getStrByName("city");
  }
  if (responseParser->hasName("province")) {
  province = responseParser->getStrByName("province");
  }
  if (responseParser->hasName("zip")) {
  zip = responseParser->getStrByName("zip");
  }

}

