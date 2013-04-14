#include <TaoApiCpp/response/LogisticsDummySendResponse.h>

Shipping LogisticsDummySendResponse::getShipping() const {
  return shipping;
}
void LogisticsDummySendResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsDummySendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

