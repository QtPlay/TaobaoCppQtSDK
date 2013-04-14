#include <TaoApiCpp/response/ItemSkuPriceUpdateResponse.h>

Sku ItemSkuPriceUpdateResponse::getSku() const {
  return sku;
}
void ItemSkuPriceUpdateResponse::setSku (Sku sku) {
  this->sku = sku;
}

void ItemSkuPriceUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sku")) {
  sku.setParser(responseParser->getObjectParser("sku"));
  sku.parseResponse();
  }

}

