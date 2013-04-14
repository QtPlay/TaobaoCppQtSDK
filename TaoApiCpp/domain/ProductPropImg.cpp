#include <TaoApiCpp/domain/ProductPropImg.h>
QDateTime ProductPropImg::getCreated() const {
  return created;
}
void ProductPropImg::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong ProductPropImg::getId() const {
  return id;
}
void ProductPropImg::setId (qlonglong id) {
  this->id = id;
}

QDateTime ProductPropImg::getModified() const {
  return modified;
}
void ProductPropImg::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong ProductPropImg::getPosition() const {
  return position;
}
void ProductPropImg::setPosition (qlonglong position) {
  this->position = position;
}

qlonglong ProductPropImg::getProductId() const {
  return productId;
}
void ProductPropImg::setProductId (qlonglong productId) {
  this->productId = productId;
}

QString ProductPropImg::getProps() const {
  return props;
}
void ProductPropImg::setProps (QString props) {
  this->props = props;
}

QString ProductPropImg::getUrl() const {
  return url;
}
void ProductPropImg::setUrl (QString url) {
  this->url = url;
}


void ProductPropImg::parseResponse() {
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
  if (responseParser->hasName("props")) {
  props = responseParser->getStrByName("props");
  }
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }

}

