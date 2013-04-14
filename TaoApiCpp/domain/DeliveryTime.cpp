#include <TaoApiCpp/domain/DeliveryTime.h>
QString DeliveryTime::getDeliveryTime() const {
  return deliveryTime;
}
void DeliveryTime::setDeliveryTime (QString deliveryTime) {
  this->deliveryTime = deliveryTime;
}

QString DeliveryTime::getDeliveryTimeType() const {
  return deliveryTimeType;
}
void DeliveryTime::setDeliveryTimeType (QString deliveryTimeType) {
  this->deliveryTimeType = deliveryTimeType;
}

QString DeliveryTime::getNeedDeliveryTime() const {
  return needDeliveryTime;
}
void DeliveryTime::setNeedDeliveryTime (QString needDeliveryTime) {
  this->needDeliveryTime = needDeliveryTime;
}


void DeliveryTime::parseResponse() {
  if (responseParser->hasName("delivery_time")) {
  deliveryTime = responseParser->getStrByName("delivery_time");
  }
  if (responseParser->hasName("delivery_time_type")) {
  deliveryTimeType = responseParser->getStrByName("delivery_time_type");
  }
  if (responseParser->hasName("need_delivery_time")) {
  needDeliveryTime = responseParser->getStrByName("need_delivery_time");
  }

}

