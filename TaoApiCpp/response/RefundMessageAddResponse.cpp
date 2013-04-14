#include <TaoApiCpp/response/RefundMessageAddResponse.h>

RefundMessage RefundMessageAddResponse::getRefundMessage() const {
  return refundMessage;
}
void RefundMessageAddResponse::setRefundMessage (RefundMessage refundMessage) {
  this->refundMessage = refundMessage;
}

void RefundMessageAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("refund_message")) {
  refundMessage.setParser(responseParser->getObjectParser("refund_message"));
  refundMessage.parseResponse();
  }

}

