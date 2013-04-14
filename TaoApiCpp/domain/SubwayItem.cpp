#include <TaoApiCpp/domain/SubwayItem.h>
ExtraAttributes SubwayItem::getExtraAttributes() const {
  return extraAttributes;
}
void SubwayItem::setExtraAttributes (ExtraAttributes extraAttributes) {
  this->extraAttributes = extraAttributes;
}

qlonglong SubwayItem::getNumId() const {
  return numId;
}
void SubwayItem::setNumId (qlonglong numId) {
  this->numId = numId;
}

QString SubwayItem::getPrice() const {
  return price;
}
void SubwayItem::setPrice (QString price) {
  this->price = price;
}

QString SubwayItem::getTitle() const {
  return title;
}
void SubwayItem::setTitle (QString title) {
  this->title = title;
}


void SubwayItem::parseResponse() {
  if (responseParser->hasName("extra_attributes")) {
  extraAttributes.setParser(responseParser->getObjectParser("extra_attributes"));
  extraAttributes.parseResponse();
  }
  if (responseParser->hasName("num_id")) {
  numId = responseParser->getNumByName("num_id");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

