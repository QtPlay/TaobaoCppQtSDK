#include <TaoApiCpp/domain/ItemImg.h>
QDateTime ItemImg::getCreated() const {
  return created;
}
void ItemImg::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong ItemImg::getId() const {
  return id;
}
void ItemImg::setId (qlonglong id) {
  this->id = id;
}

qlonglong ItemImg::getPosition() const {
  return position;
}
void ItemImg::setPosition (qlonglong position) {
  this->position = position;
}

QString ItemImg::getUrl() const {
  return url;
}
void ItemImg::setUrl (QString url) {
  this->url = url;
}


void ItemImg::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("position")) {
  position = responseParser->getNumByName("position");
  }
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }

}

