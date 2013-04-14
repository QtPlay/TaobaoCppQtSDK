#include <TaoApiCpp/response/ProductAddResponse.h>

Product ProductAddResponse::getProduct() const {
  return product;
}
void ProductAddResponse::setProduct (Product product) {
  this->product = product;
}

void ProductAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product")) {
  product.setParser(responseParser->getObjectParser("product"));
  product.parseResponse();
  }

}

