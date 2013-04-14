#include <TaoApiCpp/response/RefundMessagesGetResponse.h>

QList<RefundMessage> RefundMessagesGetResponse::getRefundMessages() const {
  return refundMessages;
}
void RefundMessagesGetResponse::setRefundMessages (QList<RefundMessage> refundMessages) {
  this->refundMessages = refundMessages;
}
qlonglong RefundMessagesGetResponse::getTotalResults() const {
  return totalResults;
}
void RefundMessagesGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void RefundMessagesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("refund_messages")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("refund_messages");
  Parser *parser;
  foreach (parser, listParser) {
    RefundMessage tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    refundMessages.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

