#include <TaoApiCpp/domain/TradeMonitor.h>
qlonglong TradeMonitor::getBuyAmount() const {
  return buyAmount;
}
void TradeMonitor::setBuyAmount (qlonglong buyAmount) {
  this->buyAmount = buyAmount;
}

QString TradeMonitor::getBuyerNick() const {
  return buyerNick;
}
void TradeMonitor::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QString TradeMonitor::getDistributorNick() const {
  return distributorNick;
}
void TradeMonitor::setDistributorNick (QString distributorNick) {
  this->distributorNick = distributorNick;
}

qlonglong TradeMonitor::getItemId() const {
  return itemId;
}
void TradeMonitor::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString TradeMonitor::getItemNumber() const {
  return itemNumber;
}
void TradeMonitor::setItemNumber (QString itemNumber) {
  this->itemNumber = itemNumber;
}

qlonglong TradeMonitor::getItemPrice() const {
  return itemPrice;
}
void TradeMonitor::setItemPrice (qlonglong itemPrice) {
  this->itemPrice = itemPrice;
}

QString TradeMonitor::getItemSkuName() const {
  return itemSkuName;
}
void TradeMonitor::setItemSkuName (QString itemSkuName) {
  this->itemSkuName = itemSkuName;
}

QString TradeMonitor::getItemSkuNumber() const {
  return itemSkuNumber;
}
void TradeMonitor::setItemSkuNumber (QString itemSkuNumber) {
  this->itemSkuNumber = itemSkuNumber;
}

QString TradeMonitor::getItemTitle() const {
  return itemTitle;
}
void TradeMonitor::setItemTitle (QString itemTitle) {
  this->itemTitle = itemTitle;
}

qlonglong TradeMonitor::getItemTotalPrice() const {
  return itemTotalPrice;
}
void TradeMonitor::setItemTotalPrice (qlonglong itemTotalPrice) {
  this->itemTotalPrice = itemTotalPrice;
}

QDateTime TradeMonitor::getPayTime() const {
  return payTime;
}
void TradeMonitor::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

qlonglong TradeMonitor::getProductId() const {
  return productId;
}
void TradeMonitor::setProductId (qlonglong productId) {
  this->productId = productId;
}

QString TradeMonitor::getProductNumber() const {
  return productNumber;
}
void TradeMonitor::setProductNumber (QString productNumber) {
  this->productNumber = productNumber;
}

QString TradeMonitor::getProductSkuNumber() const {
  return productSkuNumber;
}
void TradeMonitor::setProductSkuNumber (QString productSkuNumber) {
  this->productSkuNumber = productSkuNumber;
}

QString TradeMonitor::getProductTitle() const {
  return productTitle;
}
void TradeMonitor::setProductTitle (QString productTitle) {
  this->productTitle = productTitle;
}

qlonglong TradeMonitor::getRetailPriceHigh() const {
  return retailPriceHigh;
}
void TradeMonitor::setRetailPriceHigh (qlonglong retailPriceHigh) {
  this->retailPriceHigh = retailPriceHigh;
}

qlonglong TradeMonitor::getRetailPriceLow() const {
  return retailPriceLow;
}
void TradeMonitor::setRetailPriceLow (qlonglong retailPriceLow) {
  this->retailPriceLow = retailPriceLow;
}

QString TradeMonitor::getShippingAddress() const {
  return shippingAddress;
}
void TradeMonitor::setShippingAddress (QString shippingAddress) {
  this->shippingAddress = shippingAddress;
}

QString TradeMonitor::getStatus() const {
  return status;
}
void TradeMonitor::setStatus (QString status) {
  this->status = status;
}

qlonglong TradeMonitor::getSubTcOrderId() const {
  return subTcOrderId;
}
void TradeMonitor::setSubTcOrderId (qlonglong subTcOrderId) {
  this->subTcOrderId = subTcOrderId;
}

QString TradeMonitor::getSupplierNick() const {
  return supplierNick;
}
void TradeMonitor::setSupplierNick (QString supplierNick) {
  this->supplierNick = supplierNick;
}

qlonglong TradeMonitor::getTcOrderId() const {
  return tcOrderId;
}
void TradeMonitor::setTcOrderId (qlonglong tcOrderId) {
  this->tcOrderId = tcOrderId;
}

qlonglong TradeMonitor::getTradeMonitorId() const {
  return tradeMonitorId;
}
void TradeMonitor::setTradeMonitorId (qlonglong tradeMonitorId) {
  this->tradeMonitorId = tradeMonitorId;
}


void TradeMonitor::parseResponse() {
  if (responseParser->hasName("buy_amount")) {
  buyAmount = responseParser->getNumByName("buy_amount");
  }
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("distributor_nick")) {
  distributorNick = responseParser->getStrByName("distributor_nick");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("item_number")) {
  itemNumber = responseParser->getStrByName("item_number");
  }
  if (responseParser->hasName("item_price")) {
  itemPrice = responseParser->getNumByName("item_price");
  }
  if (responseParser->hasName("item_sku_name")) {
  itemSkuName = responseParser->getStrByName("item_sku_name");
  }
  if (responseParser->hasName("item_sku_number")) {
  itemSkuNumber = responseParser->getStrByName("item_sku_number");
  }
  if (responseParser->hasName("item_title")) {
  itemTitle = responseParser->getStrByName("item_title");
  }
  if (responseParser->hasName("item_total_price")) {
  itemTotalPrice = responseParser->getNumByName("item_total_price");
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("product_number")) {
  productNumber = responseParser->getStrByName("product_number");
  }
  if (responseParser->hasName("product_sku_number")) {
  productSkuNumber = responseParser->getStrByName("product_sku_number");
  }
  if (responseParser->hasName("product_title")) {
  productTitle = responseParser->getStrByName("product_title");
  }
  if (responseParser->hasName("retail_price_high")) {
  retailPriceHigh = responseParser->getNumByName("retail_price_high");
  }
  if (responseParser->hasName("retail_price_low")) {
  retailPriceLow = responseParser->getNumByName("retail_price_low");
  }
  if (responseParser->hasName("shipping_address")) {
  shippingAddress = responseParser->getStrByName("shipping_address");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("sub_tc_order_id")) {
  subTcOrderId = responseParser->getNumByName("sub_tc_order_id");
  }
  if (responseParser->hasName("supplier_nick")) {
  supplierNick = responseParser->getStrByName("supplier_nick");
  }
  if (responseParser->hasName("tc_order_id")) {
  tcOrderId = responseParser->getNumByName("tc_order_id");
  }
  if (responseParser->hasName("trade_monitor_id")) {
  tradeMonitorId = responseParser->getNumByName("trade_monitor_id");
  }

}

