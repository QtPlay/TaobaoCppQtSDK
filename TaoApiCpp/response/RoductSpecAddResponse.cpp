#include <TaoApiCpp/response/RoductSpecAddResponse.h>

ProductSpec RoductSpecAddResponse::getProductSpec() const {
  return productSpec;
}
void RoductSpecAddResponse::setProductSpec (ProductSpec productSpec) {
  this->productSpec = productSpec;
}

void RoductSpecAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_spec")) {
  productSpec.setParser(responseParser->getObjectParser("product_spec"));
  productSpec.parseResponse();
  }

}

