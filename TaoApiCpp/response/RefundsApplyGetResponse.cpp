#include <TaoApiCpp/response/RefundsApplyGetResponse.h>

QList<Refund> RefundsApplyGetResponse::getRefunds() const {
  return refunds;
}
void RefundsApplyGetResponse::setRefunds (QList<Refund> refunds) {
  this->refunds = refunds;
}
qlonglong RefundsApplyGetResponse::getTotalResults() const {
  return totalResults;
}
void RefundsApplyGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void RefundsApplyGetResponse::parseNormalResponse() {
  parseError();
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

