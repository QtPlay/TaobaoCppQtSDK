#include <TaoApiCpp/response/ItemSkuDeleteResponse.h>

Sku ItemSkuDeleteResponse::getSku() const {
  return sku;
}
void ItemSkuDeleteResponse::setSku (Sku sku) {
  this->sku = sku;
}

void ItemSkuDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sku")) {
  sku.setParser(responseParser->getObjectParser("sku"));
  sku.parseResponse();
  }

}

