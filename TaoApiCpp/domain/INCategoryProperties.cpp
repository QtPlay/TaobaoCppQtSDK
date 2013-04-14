#include <TaoApiCpp/domain/INCategoryProperties.h>
QString INCategoryProperties::getPropertiesDesc() const {
  return propertiesDesc;
}
void INCategoryProperties::setPropertiesDesc (QString propertiesDesc) {
  this->propertiesDesc = propertiesDesc;
}

qlonglong INCategoryProperties::getPropertiesId() const {
  return propertiesId;
}
void INCategoryProperties::setPropertiesId (qlonglong propertiesId) {
  this->propertiesId = propertiesId;
}

QString INCategoryProperties::getPropertiesName() const {
  return propertiesName;
}
void INCategoryProperties::setPropertiesName (QString propertiesName) {
  this->propertiesName = propertiesName;
}


void INCategoryProperties::parseResponse() {
  if (responseParser->hasName("properties_desc")) {
  propertiesDesc = responseParser->getStrByName("properties_desc");
  }
  if (responseParser->hasName("properties_id")) {
  propertiesId = responseParser->getNumByName("properties_id");
  }
  if (responseParser->hasName("properties_name")) {
  propertiesName = responseParser->getStrByName("properties_name");
  }

}

