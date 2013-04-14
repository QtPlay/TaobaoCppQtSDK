#include <TaoApiCpp/domain/PropImg.h>
QDateTime PropImg::getCreated() const {
  return created;
}
void PropImg::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong PropImg::getId() const {
  return id;
}
void PropImg::setId (qlonglong id) {
  this->id = id;
}

qlonglong PropImg::getPosition() const {
  return position;
}
void PropImg::setPosition (qlonglong position) {
  this->position = position;
}

QString PropImg::getProperties() const {
  return properties;
}
void PropImg::setProperties (QString properties) {
  this->properties = properties;
}

QString PropImg::getUrl() const {
  return url;
}
void PropImg::setUrl (QString url) {
  this->url = url;
}


void PropImg::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("position")) {
  position = responseParser->getNumByName("position");
  }
  if (responseParser->hasName("properties")) {
  properties = responseParser->getStrByName("properties");
  }
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }

}

