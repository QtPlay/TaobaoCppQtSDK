#include <TaoApiCpp/response/LogisticsOnlineConfirmResponse.h>

Shipping LogisticsOnlineConfirmResponse::getShipping() const {
  return shipping;
}
void LogisticsOnlineConfirmResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsOnlineConfirmResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

