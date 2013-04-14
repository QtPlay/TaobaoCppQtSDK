#include <TaoApiCpp/response/RefundsReceiveGetResponse.h>

bool RefundsReceiveGetResponse::getHasNext() const {
  return hasNext;
}
void RefundsReceiveGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
QList<Refund> RefundsReceiveGetResponse::getRefunds() const {
  return refunds;
}
void RefundsReceiveGetResponse::setRefunds (QList<Refund> refunds) {
  this->refunds = refunds;
}
qlonglong RefundsReceiveGetResponse::getTotalResults() const {
  return totalResults;
}
void RefundsReceiveGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void RefundsReceiveGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("refunds")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("refunds");
  Parser *parser;
  foreach (parser, listParser) {
    Refund tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    refunds.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

