#include <TaoApiCpp/domain/FenxiaoItemRecord.h>
QDateTime FenxiaoItemRecord::getCreated() const {
  return created;
}
void FenxiaoItemRecord::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong FenxiaoItemRecord::getDistributorId() const {
  return distributorId;
}
void FenxiaoItemRecord::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
}

qlonglong FenxiaoItemRecord::getItemId() const {
  return itemId;
}
void FenxiaoItemRecord::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QDateTime FenxiaoItemRecord::getModified() const {
  return modified;
}
void FenxiaoItemRecord::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong FenxiaoItemRecord::getProductId() const {
  return productId;
}
void FenxiaoItemRecord::setProductId (qlonglong productId) {
  this->productId = productId;
}

QString FenxiaoItemRecord::getTradeType() const {
  return tradeType;
}
void FenxiaoItemRecord::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
}


void FenxiaoItemRecord::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("distributor_id")) {
  distributorId = responseParser->getNumByName("distributor_id");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("trade_type")) {
  tradeType = responseParser->getStrByName("trade_type");
  }

}

