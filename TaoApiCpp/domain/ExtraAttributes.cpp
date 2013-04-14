#include <TaoApiCpp/domain/ExtraAttributes.h>
QDateTime ExtraAttributes::getPublishTime() const {
  return publishTime;
}
void ExtraAttributes::setPublishTime (QDateTime publishTime) {
  this->publishTime = publishTime;
}

QString ExtraAttributes::getQuantity() const {
  return quantity;
}
void ExtraAttributes::setQuantity (QString quantity) {
  this->quantity = quantity;
}

QString ExtraAttributes::getSalesCount() const {
  return salesCount;
}
void ExtraAttributes::setSalesCount (QString salesCount) {
  this->salesCount = salesCount;
}


void ExtraAttributes::parseResponse() {
  if (responseParser->hasName("publish_time")) {
  publishTime = responseParser->getDateByName("publish_time");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getStrByName("quantity");
  }
  if (responseParser->hasName("sales_count")) {
  salesCount = responseParser->getStrByName("sales_count");
  }

}

