#include <TaoApiCpp/response/ProductsGetResponse.h>

QList<Product> ProductsGetResponse::getProducts() const {
  return products;
}
void ProductsGetResponse::setProducts (QList<Product> products) {
  this->products = products;
}

void ProductsGetResponse::parseNormalResponse() {
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

}

