#include <TaoApiCpp/response/RoductSpecsGetResponse.h>

QList<ProductSpec> RoductSpecsGetResponse::getProductSpecs() const {
  return productSpecs;
}
void RoductSpecsGetResponse::setProductSpecs (QList<ProductSpec> productSpecs) {
  this->productSpecs = productSpecs;
}

void RoductSpecsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_specs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("product_specs");
  Parser *parser;
  foreach (parser, listParser) {
    ProductSpec tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    productSpecs.append(tmp);
  }
  }

}

