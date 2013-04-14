#include <TaoApiCpp/response/LogisticsOfflineSendResponse.h>

Shipping LogisticsOfflineSendResponse::getShipping() const {
  return shipping;
}
void LogisticsOfflineSendResponse::setShipping (Shipping shipping) {
  this->shipping = shipping;
}

void LogisticsOfflineSendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shipping")) {
  shipping.setParser(responseParser->getObjectParser("shipping"));
  shipping.parseResponse();
  }

}

