#include <TaoApiCpp/domain/Feature.h>
QString Feature::getAttrKey() const {
  return attrKey;
}
void Feature::setAttrKey (QString attrKey) {
  this->attrKey = attrKey;
}

QString Feature::getAttrValue() const {
  return attrValue;
}
void Feature::setAttrValue (QString attrValue) {
  this->attrValue = attrValue;
}


void Feature::parseResponse() {
  if (responseParser->hasName("attr_key")) {
  attrKey = responseParser->getStrByName("attr_key");
  }
  if (responseParser->hasName("attr_value")) {
  attrValue = responseParser->getStrByName("attr_value");
  }

}

