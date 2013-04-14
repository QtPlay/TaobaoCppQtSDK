#include <TaoApiCpp/response/ProductsSearchResponse.h>

QList<Product> ProductsSearchResponse::getProducts() const {
  return products;
}
void ProductsSearchResponse::setProducts (QList<Product> products) {
  this->products = products;
}
qlonglong ProductsSearchResponse::getTotalResults() const {
  return totalResults;
}
void ProductsSearchResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void ProductsSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("products")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("products");
  Parser *parser;
  foreach (parser, listParser) {
    Product tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    products.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

