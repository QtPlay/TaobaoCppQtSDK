#include <TaoApiCpp/response/LogisticsOrdertracePushResponse.h>

Shipping LogisticsOrdertracePushResponse::getShipping() const {
  return shipping;
}
void LogisticsOrdertracePushResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsOrdertracePushResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

