#include <TaoApiCpp/response/LogisticsAddressRemoveResponse.h>

AddressResult LogisticsAddressRemoveResponse::getAddressResult() const {
  return addressResult;
}
void LogisticsAddressRemoveResponse::setAddressResult (AddressResult addressResult) {
  this->addressResult = addressResult;
}

void LogisticsAddressRemoveResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("address_result")) {
  addressResult.setParser(responseParser->getObjectParser("address_result"));
  addressResult.parseResponse();
  }

}

