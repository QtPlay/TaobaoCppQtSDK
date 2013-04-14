#include <TaoApiCpp/domain/DistributorItemFlow.h>
QString DistributorItemFlow::getItemPv() const {
  return itemPv;
}
void DistributorItemFlow::setItemPv (QString itemPv) {
  this->itemPv = itemPv;
}

QString DistributorItemFlow::getItemUv() const {
  return itemUv;
}
void DistributorItemFlow::setItemUv (QString itemUv) {
  this->itemUv = itemUv;
}

qlonglong DistributorItemFlow::getProductId() const {
  return productId;
}
void DistributorItemFlow::setProductId (qlonglong productId) {
  this->productId = productId;
}


void DistributorItemFlow::parseResponse() {
  if (responseParser->hasName("item_pv")) {
  itemPv = responseParser->getStrByName("item_pv");
  }
  if (responseParser->hasName("item_uv")) {
  itemUv = responseParser->getStrByName("item_uv");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }

}

