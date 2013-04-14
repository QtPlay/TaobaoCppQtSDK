#include <TaoApiCpp/response/FenxiaoProductsGetResponse.h>

QList<FenxiaoProduct> FenxiaoProductsGetResponse::getProducts() const {
  return products;
}
void FenxiaoProductsGetResponse::setProducts (QList<FenxiaoProduct> products) {
  this->products = products;
}
qlonglong FenxiaoProductsGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoProductsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoProductsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("products")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("products");
  Parser *parser;
  foreach (parser, listParser) {
    FenxiaoProduct tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    products.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

