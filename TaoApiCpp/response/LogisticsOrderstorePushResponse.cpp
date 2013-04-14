#include <TaoApiCpp/response/LogisticsOrderstorePushResponse.h>

Shipping LogisticsOrderstorePushResponse::getShipping() const {
  return shipping;
}
void LogisticsOrderstorePushResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsOrderstorePushResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

