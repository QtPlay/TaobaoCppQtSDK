#include <TaoApiCpp/response/ItemSkuAddResponse.h>

Sku ItemSkuAddResponse::getSku() const {
  return sku;
}
void ItemSkuAddResponse::setSku (Sku sku) {
  this->sku = sku;
}

void ItemSkuAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sku")) {
  sku.setParser(responseParser->getObjectParser("sku"));
  sku.parseResponse();
  }

}

