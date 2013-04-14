#include <TaoApiCpp/response/FenxiaoOrdersGetResponse.h>

QList<PurchaseOrder> FenxiaoOrdersGetResponse::getPurchaseOrders() const {
  return purchaseOrders;
}
void FenxiaoOrdersGetResponse::setPurchaseOrders (QList<PurchaseOrder> purchaseOrders) {
  this->purchaseOrders = purchaseOrders;
}
qlonglong FenxiaoOrdersGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoOrdersGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoOrdersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("purchase_orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("purchase_orders");
  Parser *parser;
  foreach (parser, listParser) {
    PurchaseOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    purchaseOrders.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

