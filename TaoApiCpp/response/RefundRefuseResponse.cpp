#include <TaoApiCpp/response/RefundRefuseResponse.h>

Refund RefundRefuseResponse::getRefund() const {
  return refund;
}
void RefundRefuseResponse::setRefund (Refund refund) {
  this->refund = refund;
}

void RefundRefuseResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("refund")) {
  refund.setParser(responseParser->getObjectParser("refund"));
  refund.parseResponse();
  }

}

