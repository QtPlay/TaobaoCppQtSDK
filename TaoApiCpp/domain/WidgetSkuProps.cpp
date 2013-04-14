#include <TaoApiCpp/domain/WidgetSkuProps.h>
QString WidgetSkuProps::getAlias() const {
  return alias;
}
void WidgetSkuProps::setAlias (QString alias) {
  this->alias = alias;
}

QString WidgetSkuProps::getKeyName() const {
  return keyName;
}
void WidgetSkuProps::setKeyName (QString keyName) {
  this->keyName = keyName;
}

QString WidgetSkuProps::getPicUrl() const {
  return picUrl;
}
void WidgetSkuProps::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

qlonglong WidgetSkuProps::getPropKey() const {
  return propKey;
}
void WidgetSkuProps::setPropKey (qlonglong propKey) {
  this->propKey = propKey;
}

qlonglong WidgetSkuProps::getPropValue() const {
  return propValue;
}
void WidgetSkuProps::setPropValue (qlonglong propValue) {
  this->propValue = propValue;
}

QString WidgetSkuProps::getValueName() const {
  return valueName;
}
void WidgetSkuProps::setValueName (QString valueName) {
  this->valueName = valueName;
}


void WidgetSkuProps::parseResponse() {
  if (responseParser->hasName("alias")) {
  alias = responseParser->getStrByName("alias");
  }
  if (responseParser->hasName("key_name")) {
  keyName = responseParser->getStrByName("key_name");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("prop_key")) {
  propKey = responseParser->getNumByName("prop_key");
  }
  if (responseParser->hasName("prop_value")) {
  propValue = responseParser->getNumByName("prop_value");
  }
  if (responseParser->hasName("value_name")) {
  valueName = responseParser->getStrByName("value_name");
  }

}

