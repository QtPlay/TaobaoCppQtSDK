#include <TaoApiCpp/response/LogisticsOrderConsignResponse.h>

ConsignResult LogisticsOrderConsignResponse::getConsignResult() const {
  return consignResult;
}
void LogisticsOrderConsignResponse::setConsignResult (ConsignResult consignResult) {
  this->consignResult = consignResult;
}

void LogisticsOrderConsignResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("consign_result")) {
  consignResult.setParser(responseParser->getObjectParser("consign_result"));
  consignResult.parseResponse();
  }

}

