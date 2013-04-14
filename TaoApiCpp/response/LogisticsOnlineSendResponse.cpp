#include <TaoApiCpp/response/LogisticsOnlineSendResponse.h>

Shipping LogisticsOnlineSendResponse::getShipping() const {
  return shipping;
}
void LogisticsOnlineSendResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsOnlineSendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

