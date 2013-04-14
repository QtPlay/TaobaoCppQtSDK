#include <TaoApiCpp/domain/ProductImg.h>
QDateTime ProductImg::getCreated() const {
  return created;
}
void ProductImg::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong ProductImg::getId() const {
  return id;
}
void ProductImg::setId (qlonglong id) {
  this->id = id;
}

QDateTime ProductImg::getModified() const {
  return modified;
}
void ProductImg::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong ProductImg::getPosition() const {
  return position;
}
void ProductImg::setPosition (qlonglong position) {
  this->position = position;
}

qlonglong ProductImg::getProductId() const {
  return productId;
}
void ProductImg::setProductId (qlonglong productId) {
  this->productId = productId;
}

QString ProductImg::getUrl() const {
  return url;
}
void ProductImg::setUrl (QString url) {
  this->url = url;
}


void ProductImg::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("position")) {
  position = responseParser->getNumByName("position");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }

}

