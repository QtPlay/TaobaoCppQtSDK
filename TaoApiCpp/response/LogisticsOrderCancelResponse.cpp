#include <TaoApiCpp/response/LogisticsOrderCancelResponse.h>

CancelOrderResult LogisticsOrderCancelResponse::getCancelOrderResult() const {
  return cancelOrderResult;
}
void LogisticsOrderCancelResponse::setCancelOrderResult (CancelOrderResult cancelOrderResult) {
  this->cancelOrderResult = cancelOrderResult;
}

void LogisticsOrderCancelResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("cancel_order_result")) {
  cancelOrderResult.setParser(responseParser->getObjectParser("cancel_order_result"));
  cancelOrderResult.parseResponse();
  }

}

