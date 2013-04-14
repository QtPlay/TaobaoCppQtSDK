#include <TaoApiCpp/response/ItemSkuGetResponse.h>

Sku ItemSkuGetResponse::getSku() const {
  return sku;
}
void ItemSkuGetResponse::setSku (Sku sku) {
  this->sku = sku;
}

void ItemSkuGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sku")) {
  sku.setParser(responseParser->getObjectParser("sku"));
  sku.parseResponse();
  }

}

