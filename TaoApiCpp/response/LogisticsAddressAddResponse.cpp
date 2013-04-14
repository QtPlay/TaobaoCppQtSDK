#include <TaoApiCpp/response/LogisticsAddressAddResponse.h>

AddressResult LogisticsAddressAddResponse::getAddressResult() const {
  return addressResult;
}
void LogisticsAddressAddResponse::setAddressResult (AddressResult addressResult) {
  this->addressResult = addressResult;
}

void LogisticsAddressAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("address_result")) {
  addressResult.setParser(responseParser->getObjectParser("address_result"));
  addressResult.parseResponse();
  }

}

