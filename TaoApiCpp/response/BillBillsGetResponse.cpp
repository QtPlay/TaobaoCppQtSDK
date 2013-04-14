#include <TaoApiCpp/response/BillBillsGetResponse.h>

QList<Bill> BillBillsGetResponse::getBills() const {
  return bills;
}
void BillBillsGetResponse::setBills (QList<Bill> bills) {
  this->bills = bills;
}
bool BillBillsGetResponse::getHasNext() const {
  return hasNext;
}
void BillBillsGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
qlonglong BillBillsGetResponse::getTotalResults() const {
  return totalResults;
}
void BillBillsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void BillBillsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("bills")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("bills");
  Parser *parser;
  foreach (parser, listParser) {
    Bill tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    bills.append(tmp);
  }
  }
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

