#include <TaoApiCpp/response/ProductGetResponse.h>

Product ProductGetResponse::getProduct() const {
  return product;
}
void ProductGetResponse::setProduct (Product product) {
  this->product = product;
}

void ProductGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product")) {
  product.setParser(responseParser->getObjectParser("product"));
  product.parseResponse();
  }

}

