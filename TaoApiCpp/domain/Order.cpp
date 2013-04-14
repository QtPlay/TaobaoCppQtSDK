#include <TaoApiCpp/domain/Order.h>
QString Order::getAdjustFee() const {
  return adjustFee;
}
void Order::setAdjustFee (QString adjustFee) {
  this->adjustFee = adjustFee;
}

qlonglong Order::getBindOid() const {
  return bindOid;
}
void Order::setBindOid (qlonglong bindOid) {
  this->bindOid = bindOid;
}

QString Order::getBuyerNick() const {
  return buyerNick;
}
void Order::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

bool Order::getBuyerRate() const {
  return buyerRate;
}
void Order::setBuyerRate (bool buyerRate) {
  this->buyerRate = buyerRate;
}

qlonglong Order::getCid() const {
  return cid;
}
void Order::setCid (qlonglong cid) {
  this->cid = cid;
}

QString Order::getConsignTime() const {
  return consignTime;
}
void Order::setConsignTime (QString consignTime) {
  this->consignTime = consignTime;
}

QString Order::getDiscountFee() const {
  return discountFee;
}
void Order::setDiscountFee (QString discountFee) {
  this->discountFee = discountFee;
}

QDateTime Order::getEndTime() const {
  return endTime;
}
void Order::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

QString Order::getIid() const {
  return iid;
}
void Order::setIid (QString iid) {
  this->iid = iid;
}

QString Order::getInvoiceNo() const {
  return invoiceNo;
}
void Order::setInvoiceNo (QString invoiceNo) {
  this->invoiceNo = invoiceNo;
}

bool Order::getIsOversold() const {
  return isOversold;
}
void Order::setIsOversold (bool isOversold) {
  this->isOversold = isOversold;
}

bool Order::getIsServiceOrder() const {
  return isServiceOrder;
}
void Order::setIsServiceOrder (bool isServiceOrder) {
  this->isServiceOrder = isServiceOrder;
}

qlonglong Order::getItemMealId() const {
  return itemMealId;
}
void Order::setItemMealId (qlonglong itemMealId) {
  this->itemMealId = itemMealId;
}

QString Order::getItemMealName() const {
  return itemMealName;
}
void Order::setItemMealName (QString itemMealName) {
  this->itemMealName = itemMealName;
}

QString Order::getLogisticsCompany() const {
  return logisticsCompany;
}
void Order::setLogisticsCompany (QString logisticsCompany) {
  this->logisticsCompany = logisticsCompany;
}

QDateTime Order::getModified() const {
  return modified;
}
void Order::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong Order::getNum() const {
  return num;
}
void Order::setNum (qlonglong num) {
  this->num = num;
}

qlonglong Order::getNumIid() const {
  return numIid;
}
void Order::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

qlonglong Order::getOid() const {
  return oid;
}
void Order::setOid (qlonglong oid) {
  this->oid = oid;
}

QString Order::getOrderFrom() const {
  return orderFrom;
}
void Order::setOrderFrom (QString orderFrom) {
  this->orderFrom = orderFrom;
}

QString Order::getOuterIid() const {
  return outerIid;
}
void Order::setOuterIid (QString outerIid) {
  this->outerIid = outerIid;
}

QString Order::getOuterSkuId() const {
  return outerSkuId;
}
void Order::setOuterSkuId (QString outerSkuId) {
  this->outerSkuId = outerSkuId;
}

QString Order::getPayment() const {
  return payment;
}
void Order::setPayment (QString payment) {
  this->payment = payment;
}

QString Order::getPicPath() const {
  return picPath;
}
void Order::setPicPath (QString picPath) {
  this->picPath = picPath;
}

QString Order::getPrice() const {
  return price;
}
void Order::setPrice (QString price) {
  this->price = price;
}

qlonglong Order::getRefundId() const {
  return refundId;
}
void Order::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
}

QString Order::getRefundStatus() const {
  return refundStatus;
}
void Order::setRefundStatus (QString refundStatus) {
  this->refundStatus = refundStatus;
}

QString Order::getSellerNick() const {
  return sellerNick;
}
void Order::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

bool Order::getSellerRate() const {
  return sellerRate;
}
void Order::setSellerRate (bool sellerRate) {
  this->sellerRate = sellerRate;
}

QString Order::getSellerType() const {
  return sellerType;
}
void Order::setSellerType (QString sellerType) {
  this->sellerType = sellerType;
}

QString Order::getShippingType() const {
  return shippingType;
}
void Order::setShippingType (QString shippingType) {
  this->shippingType = shippingType;
}

QString Order::getSkuId() const {
  return skuId;
}
void Order::setSkuId (QString skuId) {
  this->skuId = skuId;
}

QString Order::getSkuPropertiesName() const {
  return skuPropertiesName;
}
void Order::setSkuPropertiesName (QString skuPropertiesName) {
  this->skuPropertiesName = skuPropertiesName;
}

QString Order::getSnapshot() const {
  return snapshot;
}
void Order::setSnapshot (QString snapshot) {
  this->snapshot = snapshot;
}

QString Order::getSnapshotUrl() const {
  return snapshotUrl;
}
void Order::setSnapshotUrl (QString snapshotUrl) {
  this->snapshotUrl = snapshotUrl;
}

QString Order::getStatus() const {
  return status;
}
void Order::setStatus (QString status) {
  this->status = status;
}

QDateTime Order::getTimeoutActionTime() const {
  return timeoutActionTime;
}
void Order::setTimeoutActionTime (QDateTime timeoutActionTime) {
  this->timeoutActionTime = timeoutActionTime;
}

QString Order::getTitle() const {
  return title;
}
void Order::setTitle (QString title) {
  this->title = title;
}

QString Order::getTotalFee() const {
  return totalFee;
}
void Order::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}


void Order::parseResponse() {
  if (responseParser->hasName("adjust_fee")) {
  adjustFee = responseParser->getStrByName("adjust_fee");
  }
  if (responseParser->hasName("bind_oid")) {
  bindOid = responseParser->getNumByName("bind_oid");
  }
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("buyer_rate")) {
  buyerRate = responseParser->getBoolByName("buyer_rate");
  }
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("consign_time")) {
  consignTime = responseParser->getStrByName("consign_time");
  }
  if (responseParser->hasName("discount_fee")) {
  discountFee = responseParser->getStrByName("discount_fee");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getStrByName("iid");
  }
  if (responseParser->hasName("invoice_no")) {
  invoiceNo = responseParser->getStrByName("invoice_no");
  }
  if (responseParser->hasName("is_oversold")) {
  isOversold = responseParser->getBoolByName("is_oversold");
  }
  if (responseParser->hasName("is_service_order")) {
  isServiceOrder = responseParser->getBoolByName("is_service_order");
  }
  if (responseParser->hasName("item_meal_id")) {
  itemMealId = responseParser->getNumByName("item_meal_id");
  }
  if (responseParser->hasName("item_meal_name")) {
  itemMealName = responseParser->getStrByName("item_meal_name");
  }
  if (responseParser->hasName("logistics_company")) {
  logisticsCompany = responseParser->getStrByName("logistics_company");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("num")) {
  num = responseParser->getNumByName("num");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("oid")) {
  oid = responseParser->getNumByName("oid");
  }
  if (responseParser->hasName("order_from")) {
  orderFrom = responseParser->getStrByName("order_from");
  }
  if (responseParser->hasName("outer_iid")) {
  outerIid = responseParser->getStrByName("outer_iid");
  }
  if (responseParser->hasName("outer_sku_id")) {
  outerSkuId = responseParser->getStrByName("outer_sku_id");
  }
  if (responseParser->hasName("payment")) {
  payment = responseParser->getStrByName("payment");
  }
  if (responseParser->hasName("pic_path")) {
  picPath = responseParser->getStrByName("pic_path");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("refund_id")) {
  refundId = responseParser->getNumByName("refund_id");
  }
  if (responseParser->hasName("refund_status")) {
  refundStatus = responseParser->getStrByName("refund_status");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("seller_rate")) {
  sellerRate = responseParser->getBoolByName("seller_rate");
  }
  if (responseParser->hasName("seller_type")) {
  sellerType = responseParser->getStrByName("seller_type");
  }
  if (responseParser->hasName("shipping_type")) {
  shippingType = responseParser->getStrByName("shipping_type");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getStrByName("sku_id");
  }
  if (responseParser->hasName("sku_properties_name")) {
  skuPropertiesName = responseParser->getStrByName("sku_properties_name");
  }
  if (responseParser->hasName("snapshot")) {
  snapshot = responseParser->getStrByName("snapshot");
  }
  if (responseParser->hasName("snapshot_url")) {
  snapshotUrl = responseParser->getStrByName("snapshot_url");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("timeout_action_time")) {
  timeoutActionTime = responseParser->getDateByName("timeout_action_time");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }

}

