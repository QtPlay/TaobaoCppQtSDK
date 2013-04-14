#include <TaoApiCpp/response/IncrementRefundsGetResponse.h>

QList<NotifyRefund> IncrementRefundsGetResponse::getNotifyRefunds() const {
  return notifyRefunds;
}
void IncrementRefundsGetResponse::setNotifyRefunds (QList<NotifyRefund> notifyRefunds) {
  this->notifyRefunds = notifyRefunds;
}
qlonglong IncrementRefundsGetResponse::getTotalResults() const {
  return totalResults;
}
void IncrementRefundsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void IncrementRefundsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("notify_refunds")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("notify_refunds");
  Parser *parser;
  foreach (parser, listParser) {
    NotifyRefund tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    notifyRefunds.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

