#include <TaoApiCpp/response/RefundGetResponse.h>

Refund RefundGetResponse::getRefund() const {
  return refund;
}
void RefundGetResponse::setRefund (Refund refund) {
  this->refund = refund;
}

void RefundGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("refund")) {
  refund.setParser(responseParser->getObjectParser("refund"));
  refund.parseResponse();
  }

}

