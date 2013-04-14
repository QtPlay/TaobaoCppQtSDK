#include <TaoApiCpp/domain/IdsModule.h>
qlonglong IdsModule::getId() const {
  return id;
}
void IdsModule::setId (qlonglong id) {
  this->id = id;
}

QString IdsModule::getName() const {
  return name;
}
void IdsModule::setName (QString name) {
  this->name = name;
}

qlonglong IdsModule::getType() const {
  return type;
}
void IdsModule::setType (qlonglong type) {
  this->type = type;
}


void IdsModule::parseResponse() {
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getNumByName("type");
  }

}

