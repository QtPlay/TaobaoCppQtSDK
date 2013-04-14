#include <TaoApiCpp/response/BillBookBillGetResponse.h>

BookBill BillBookBillGetResponse::getBookbill() const {
  return bookbill;
}
void BillBookBillGetResponse::setBookbill (BookBill bookbill) {
  this->bookbill = bookbill;
}

void BillBookBillGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("bookbill")) {
  bookbill.setParser(responseParser->getObjectParser("bookbill"));
  bookbill.parseResponse();
  }

}

