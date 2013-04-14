#include <TaoApiCpp/response/ItemSkuUpdateResponse.h>

Sku ItemSkuUpdateResponse::getSku() const {
  return sku;
}
void ItemSkuUpdateResponse::setSku (Sku sku) {
  this->sku = sku;
}

void ItemSkuUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sku")) {
  sku.setParser(responseParser->getObjectParser("sku"));
  sku.parseResponse();
  }

}

