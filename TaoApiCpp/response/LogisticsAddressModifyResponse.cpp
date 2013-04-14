#include <TaoApiCpp/response/LogisticsAddressModifyResponse.h>

AddressResult LogisticsAddressModifyResponse::getAddressResult() const {
  return addressResult;
}
void LogisticsAddressModifyResponse::setAddressResult (AddressResult addressResult) {
  this->addressResult = addressResult;
}

void LogisticsAddressModifyResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("address_result")) {
  addressResult.setParser(responseParser->getObjectParser("address_result"));
  addressResult.parseResponse();
  }

}

