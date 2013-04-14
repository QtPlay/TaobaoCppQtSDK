#include <TaoApiCpp/domain/FenxiaoPdu.h>
qlonglong FenxiaoPdu::getDistributorId() const {
  return distributorId;
}
void FenxiaoPdu::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
}

QString FenxiaoPdu::getDistributorName() const {
  return distributorName;
}
void FenxiaoPdu::setDistributorName (QString distributorName) {
  this->distributorName = distributorName;
}

qlonglong FenxiaoPdu::getProductId() const {
  return productId;
}
void FenxiaoPdu::setProductId (qlonglong productId) {
  this->productId = productId;
}

qlonglong FenxiaoPdu::getQuantityAgent() const {
  return quantityAgent;
}
void FenxiaoPdu::setQuantityAgent (qlonglong quantityAgent) {
  this->quantityAgent = quantityAgent;
}

QString FenxiaoPdu::getSkuProperties() const {
  return skuProperties;
}
void FenxiaoPdu::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
}


void FenxiaoPdu::parseResponse() {
  if (responseParser->hasName("distributor_id")) {
  distributorId = responseParser->getNumByName("distributor_id");
  }
  if (responseParser->hasName("distributor_name")) {
  distributorName = responseParser->getStrByName("distributor_name");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("quantity_agent")) {
  quantityAgent = responseParser->getNumByName("quantity_agent");
  }
  if (responseParser->hasName("sku_properties")) {
  skuProperties = responseParser->getStrByName("sku_properties");
  }

}

