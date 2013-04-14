#include <TaoApiCpp/response/BillBookBillsGetResponse.h>

QList<BookBill> BillBookBillsGetResponse::getBills() const {
  return bills;
}
void BillBookBillsGetResponse::setBills (QList<BookBill> bills) {
  this->bills = bills;
}
bool BillBookBillsGetResponse::getHasNext() const {
  return hasNext;
}
void BillBookBillsGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
qlonglong BillBookBillsGetResponse::getTotalResults() const {
  return totalResults;
}
void BillBookBillsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void BillBookBillsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("bills")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("bills");
  Parser *parser;
  foreach (parser, listParser) {
    BookBill tmp;
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

