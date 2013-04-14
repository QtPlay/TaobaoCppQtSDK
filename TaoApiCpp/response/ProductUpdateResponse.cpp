#include <TaoApiCpp/response/ProductUpdateResponse.h>

Product ProductUpdateResponse::getProduct() const {
  return product;
}
void ProductUpdateResponse::setProduct (Product product) {
  this->product = product;
}

void ProductUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product")) {
  product.setParser(responseParser->getObjectParser("product"));
  product.parseResponse();
  }

}

