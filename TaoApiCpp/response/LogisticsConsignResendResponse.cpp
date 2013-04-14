#include <TaoApiCpp/response/LogisticsConsignResendResponse.h>

Shipping LogisticsConsignResendResponse::getShipping() const {
  return shipping;
}
void LogisticsConsignResendResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsConsignResendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

