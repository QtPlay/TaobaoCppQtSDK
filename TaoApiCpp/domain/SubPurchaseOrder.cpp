#include <TaoApiCpp/domain/SubPurchaseOrder.h>
QString SubPurchaseOrder::getAuctionPrice() const {
  return auctionPrice;
}
void SubPurchaseOrder::setAuctionPrice (QString auctionPrice) {
  this->auctionPrice = auctionPrice;
}

QString SubPurchaseOrder::getBillFee() const {
  return billFee;
}
void SubPurchaseOrder::setBillFee (QString billFee) {
  this->billFee = billFee;
}

QString SubPurchaseOrder::getBuyerPayment() const {
  return buyerPayment;
}
void SubPurchaseOrder::setBuyerPayment (QString buyerPayment) {
  this->buyerPayment = buyerPayment;
}

QDateTime SubPurchaseOrder::getCreated() const {
  return created;
}
void SubPurchaseOrder::setCreated (QDateTime created) {
  this->created = created;
}

QString SubPurchaseOrder::getDistributorPayment() const {
  return distributorPayment;
}
void SubPurchaseOrder::setDistributorPayment (QString distributorPayment) {
  this->distributorPayment = distributorPayment;
}

qlonglong SubPurchaseOrder::getFenxiaoId() const {
  return fenxiaoId;
}
void SubPurchaseOrder::setFenxiaoId (qlonglong fenxiaoId) {
  this->fenxiaoId = fenxiaoId;
}

qlonglong SubPurchaseOrder::getId() const {
  return id;
}
void SubPurchaseOrder::setId (qlonglong id) {
  this->id = id;
}

qlonglong SubPurchaseOrder::getItemId() const {
  return itemId;
}
void SubPurchaseOrder::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString SubPurchaseOrder::getItemOuterId() const {
  return itemOuterId;
}
void SubPurchaseOrder::setItemOuterId (QString itemOuterId) {
  this->itemOuterId = itemOuterId;
}

qlonglong SubPurchaseOrder::getNum() const {
  return num;
}
void SubPurchaseOrder::setNum (qlonglong num) {
  this->num = num;
}

QString SubPurchaseOrder::getOldSkuProperties() const {
  return oldSkuProperties;
}
void SubPurchaseOrder::setOldSkuProperties (QString oldSkuProperties) {
  this->oldSkuProperties = oldSkuProperties;
}

QString SubPurchaseOrder::getOrder200Status() const {
  return order200Status;
}
void SubPurchaseOrder::setOrder200Status (QString order200Status) {
  this->order200Status = order200Status;
}

QString SubPurchaseOrder::getPrice() const {
  return price;
}
void SubPurchaseOrder::setPrice (QString price) {
  this->price = price;
}

QString SubPurchaseOrder::getRefundFee() const {
  return refundFee;
}
void SubPurchaseOrder::setRefundFee (QString refundFee) {
  this->refundFee = refundFee;
}

qlonglong SubPurchaseOrder::getScItemId() const {
  return scItemId;
}
void SubPurchaseOrder::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
}

qlonglong SubPurchaseOrder::getSkuId() const {
  return skuId;
}
void SubPurchaseOrder::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}

QString SubPurchaseOrder::getSkuOuterId() const {
  return skuOuterId;
}
void SubPurchaseOrder::setSkuOuterId (QString skuOuterId) {
  this->skuOuterId = skuOuterId;
}

QString SubPurchaseOrder::getSkuProperties() const {
  return skuProperties;
}
void SubPurchaseOrder::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
}

QString SubPurchaseOrder::getSnapshotUrl() const {
  return snapshotUrl;
}
void SubPurchaseOrder::setSnapshotUrl (QString snapshotUrl) {
  this->snapshotUrl = snapshotUrl;
}

QString SubPurchaseOrder::getStatus() const {
  return status;
}
void SubPurchaseOrder::setStatus (QString status) {
  this->status = status;
}

qlonglong SubPurchaseOrder::getTcOrderId() const {
  return tcOrderId;
}
void SubPurchaseOrder::setTcOrderId (qlonglong tcOrderId) {
  this->tcOrderId = tcOrderId;
}

QString SubPurchaseOrder::getTitle() const {
  return title;
}
void SubPurchaseOrder::setTitle (QString title) {
  this->title = title;
}

QString SubPurchaseOrder::getTotalFee() const {
  return totalFee;
}
void SubPurchaseOrder::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}


void SubPurchaseOrder::parseResponse() {
  if (responseParser->hasName("auction_price")) {
  auctionPrice = responseParser->getStrByName("auction_price");
  }
  if (responseParser->hasName("bill_fee")) {
  billFee = responseParser->getStrByName("bill_fee");
  }
  if (responseParser->hasName("buyer_payment")) {
  buyerPayment = responseParser->getStrByName("buyer_payment");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("distributor_payment")) {
  distributorPayment = responseParser->getStrByName("distributor_payment");
  }
  if (responseParser->hasName("fenxiao_id")) {
  fenxiaoId = responseParser->getNumByName("fenxiao_id");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("item_outer_id")) {
  itemOuterId = responseParser->getStrByName("item_outer_id");
  }
  if (responseParser->hasName("num")) {
  num = responseParser->getNumByName("num");
  }
  if (responseParser->hasName("old_sku_properties")) {
  oldSkuProperties = responseParser->getStrByName("old_sku_properties");
  }
  if (responseParser->hasName("order_200_status")) {
  order200Status = responseParser->getStrByName("order_200_status");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("refund_fee")) {
  refundFee = responseParser->getStrByName("refund_fee");
  }
  if (responseParser->hasName("sc_item_id")) {
  scItemId = responseParser->getNumByName("sc_item_id");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }
  if (responseParser->hasName("sku_outer_id")) {
  skuOuterId = responseParser->getStrByName("sku_outer_id");
  }
  if (responseParser->hasName("sku_properties")) {
  skuProperties = responseParser->getStrByName("sku_properties");
  }
  if (responseParser->hasName("snapshot_url")) {
  snapshotUrl = responseParser->getStrByName("snapshot_url");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("tc_order_id")) {
  tcOrderId = responseParser->getNumByName("tc_order_id");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }

}

