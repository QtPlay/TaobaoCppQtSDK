#include <TaoApiCpp/domain/ShopScore.h>
QString ShopScore::getDeliveryScore() const {
  return deliveryScore;
}
void ShopScore::setDeliveryScore (QString deliveryScore) {
  this->deliveryScore = deliveryScore;
}

QString ShopScore::getItemScore() const {
  return itemScore;
}
void ShopScore::setItemScore (QString itemScore) {
  this->itemScore = itemScore;
}

QString ShopScore::getServiceScore() const {
  return serviceScore;
}
void ShopScore::setServiceScore (QString serviceScore) {
  this->serviceScore = serviceScore;
}


void ShopScore::parseResponse() {
  if (responseParser->hasName("delivery_score")) {
  deliveryScore = responseParser->getStrByName("delivery_score");
  }
  if (responseParser->hasName("item_score")) {
  itemScore = responseParser->getStrByName("item_score");
  }
  if (responseParser->hasName("service_score")) {
  serviceScore = responseParser->getStrByName("service_score");
  }

}

