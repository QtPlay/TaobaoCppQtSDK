#include <TaoApiCpp/response/BillBillGetResponse.h>

Bill BillBillGetResponse::getBill() const {
  return bill;
}
void BillBillGetResponse::setBill (Bill bill) {
  this->bill = bill;
}

void BillBillGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("bill")) {
  bill.setParser(responseParser->getObjectParser("bill"));
  bill.parseResponse();
  }

}

