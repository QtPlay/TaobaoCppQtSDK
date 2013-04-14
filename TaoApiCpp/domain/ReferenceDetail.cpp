#include <TaoApiCpp/domain/ReferenceDetail.h>
QString ReferenceDetail::getAddress() const {
  return address;
}
void ReferenceDetail::setAddress (QString address) {
  this->address = address;
}

QString ReferenceDetail::getName() const {
  return name;
}
void ReferenceDetail::setName (QString name) {
  this->name = name;
}

QString ReferenceDetail::getReferenceType() const {
  return referenceType;
}
void ReferenceDetail::setReferenceType (QString referenceType) {
  this->referenceType = referenceType;
}


void ReferenceDetail::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("reference_type")) {
  referenceType = responseParser->getStrByName("reference_type");
  }

}

