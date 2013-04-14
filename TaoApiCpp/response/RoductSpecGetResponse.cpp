#include <TaoApiCpp/response/RoductSpecGetResponse.h>

ProductSpec RoductSpecGetResponse::getProductSpec() const {
  return productSpec;
}
void RoductSpecGetResponse::setProductSpec (ProductSpec productSpec) {
  this->productSpec = productSpec;
}

void RoductSpecGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_spec")) {
  productSpec.setParser(responseParser->getObjectParser("product_spec"));
  productSpec.parseResponse();
  }

}

