#include <TaoApiCpp/response/IncrementCustomerPermitResponse.h>

AppCustomer IncrementCustomerPermitResponse::getAppCustomer() const {
  return appCustomer;
}
void IncrementCustomerPermitResponse::setAppCustomer (AppCustomer appCustomer) {
  this->appCustomer = appCustomer;
}

void IncrementCustomerPermitResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("app_customer")) {
  appCustomer.setParser(responseParser->getObjectParser("app_customer"));
  appCustomer.parseResponse();
  }

}

