#include <TaoApiCpp/domain/PurchaseOrder.h>
QString PurchaseOrder::getAlipayNo() const {
  return alipayNo;
}
void PurchaseOrder::setAlipayNo (QString alipayNo) {
  this->alipayNo = alipayNo;
}

QString PurchaseOrder::getBuyerNick() const {
  return buyerNick;
}
void PurchaseOrder::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QString PurchaseOrder::getBuyerPayment() const {
  return buyerPayment;
}
void PurchaseOrder::setBuyerPayment (QString buyerPayment) {
  this->buyerPayment = buyerPayment;
}

QDateTime PurchaseOrder::getConsignTime() const {
  return consignTime;
}
void PurchaseOrder::setConsignTime (QDateTime consignTime) {
  this->consignTime = consignTime;
}

QDateTime PurchaseOrder::getCreated() const {
  return created;
}
void PurchaseOrder::setCreated (QDateTime created) {
  this->created = created;
}

QString PurchaseOrder::getDistributorFrom() const {
  return distributorFrom;
}
void PurchaseOrder::setDistributorFrom (QString distributorFrom) {
  this->distributorFrom = distributorFrom;
}

QString PurchaseOrder::getDistributorPayment() const {
  return distributorPayment;
}
void PurchaseOrder::setDistributorPayment (QString distributorPayment) {
  this->distributorPayment = distributorPayment;
}

QString PurchaseOrder::getDistributorUsername() const {
  return distributorUsername;
}
void PurchaseOrder::setDistributorUsername (QString distributorUsername) {
  this->distributorUsername = distributorUsername;
}

QDateTime PurchaseOrder::getEndTime() const {
  return endTime;
}
void PurchaseOrder::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

qlonglong PurchaseOrder::getFenxiaoId() const {
  return fenxiaoId;
}
void PurchaseOrder::setFenxiaoId (qlonglong fenxiaoId) {
  this->fenxiaoId = fenxiaoId;
}

qlonglong PurchaseOrder::getId() const {
  return id;
}
void PurchaseOrder::setId (qlonglong id) {
  this->id = id;
}

QList<QString> PurchaseOrder::getIsvCustomKey() const {
  return isvCustomKey;
}
void PurchaseOrder::setIsvCustomKey (QList<QString> isvCustomKey) {
  this->isvCustomKey = isvCustomKey;
}

QList<QString> PurchaseOrder::getIsvCustomValue() const {
  return isvCustomValue;
}
void PurchaseOrder::setIsvCustomValue (QList<QString> isvCustomValue) {
  this->isvCustomValue = isvCustomValue;
}

QString PurchaseOrder::getLogisticsCompanyName() const {
  return logisticsCompanyName;
}
void PurchaseOrder::setLogisticsCompanyName (QString logisticsCompanyName) {
  this->logisticsCompanyName = logisticsCompanyName;
}

QString PurchaseOrder::getLogisticsId() const {
  return logisticsId;
}
void PurchaseOrder::setLogisticsId (QString logisticsId) {
  this->logisticsId = logisticsId;
}

QString PurchaseOrder::getMemo() const {
  return memo;
}
void PurchaseOrder::setMemo (QString memo) {
  this->memo = memo;
}

QDateTime PurchaseOrder::getModified() const {
  return modified;
}
void PurchaseOrder::setModified (QDateTime modified) {
  this->modified = modified;
}

QDateTime PurchaseOrder::getPayTime() const {
  return payTime;
}
void PurchaseOrder::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

QString PurchaseOrder::getPayType() const {
  return payType;
}
void PurchaseOrder::setPayType (QString payType) {
  this->payType = payType;
}

QString PurchaseOrder::getPostFee() const {
  return postFee;
}
void PurchaseOrder::setPostFee (QString postFee) {
  this->postFee = postFee;
}

Receiver PurchaseOrder::getReceiver() const {
  return receiver;
}
void PurchaseOrder::setReceiver (Receiver receiver) {
  this->receiver = receiver;
}

QString PurchaseOrder::getShipping() const {
  return shipping;
}
void PurchaseOrder::setShipping (QString shipping) {
  this->shipping = shipping;
}

QString PurchaseOrder::getSnapshotUrl() const {
  return snapshotUrl;
}
void PurchaseOrder::setSnapshotUrl (QString snapshotUrl) {
  this->snapshotUrl = snapshotUrl;
}

QString PurchaseOrder::getStatus() const {
  return status;
}
void PurchaseOrder::setStatus (QString status) {
  this->status = status;
}

QList<SubPurchaseOrder> PurchaseOrder::getSubPurchaseOrders() const {
  return subPurchaseOrders;
}
void PurchaseOrder::setSubPurchaseOrders (QList<SubPurchaseOrder> subPurchaseOrders) {
  this->subPurchaseOrders = subPurchaseOrders;
}

qlonglong PurchaseOrder::getSupplierFlag() const {
  return supplierFlag;
}
void PurchaseOrder::setSupplierFlag (qlonglong supplierFlag) {
  this->supplierFlag = supplierFlag;
}

QString PurchaseOrder::getSupplierFrom() const {
  return supplierFrom;
}
void PurchaseOrder::setSupplierFrom (QString supplierFrom) {
  this->supplierFrom = supplierFrom;
}

QString PurchaseOrder::getSupplierMemo() const {
  return supplierMemo;
}
void PurchaseOrder::setSupplierMemo (QString supplierMemo) {
  this->supplierMemo = supplierMemo;
}

QString PurchaseOrder::getSupplierUsername() const {
  return supplierUsername;
}
void PurchaseOrder::setSupplierUsername (QString supplierUsername) {
  this->supplierUsername = supplierUsername;
}

qlonglong PurchaseOrder::getTcOrderId() const {
  return tcOrderId;
}
void PurchaseOrder::setTcOrderId (qlonglong tcOrderId) {
  this->tcOrderId = tcOrderId;
}

QString PurchaseOrder::getTotalFee() const {
  return totalFee;
}
void PurchaseOrder::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}

QString PurchaseOrder::getTradeType() const {
  return tradeType;
}
void PurchaseOrder::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
}


void PurchaseOrder::parseResponse() {
  if (responseParser->hasName("alipay_no")) {
  alipayNo = responseParser->getStrByName("alipay_no");
  }
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("buyer_payment")) {
  buyerPayment = responseParser->getStrByName("buyer_payment");
  }
  if (responseParser->hasName("consign_time")) {
  consignTime = responseParser->getDateByName("consign_time");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("distributor_from")) {
  distributorFrom = responseParser->getStrByName("distributor_from");
  }
  if (responseParser->hasName("distributor_payment")) {
  distributorPayment = responseParser->getStrByName("distributor_payment");
  }
  if (responseParser->hasName("distributor_username")) {
  distributorUsername = responseParser->getStrByName("distributor_username");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("fenxiao_id")) {
  fenxiaoId = responseParser->getNumByName("fenxiao_id");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("isv_custom_key")) {
  isvCustomKey = responseParser->getListStrByName("isv_custom_key");
  }
  if (responseParser->hasName("isv_custom_value")) {
  isvCustomValue = responseParser->getListStrByName("isv_custom_value");
  }
  if (responseParser->hasName("logistics_company_name")) {
  logisticsCompanyName = responseParser->getStrByName("logistics_company_name");
  }
  if (responseParser->hasName("logistics_id")) {
  logisticsId = responseParser->getStrByName("logistics_id");
  }
  if (responseParser->hasName("memo")) {
  memo = responseParser->getStrByName("memo");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("pay_type")) {
  payType = responseParser->getStrByName("pay_type");
  }
  if (responseParser->hasName("post_fee")) {
  postFee = responseParser->getStrByName("post_fee");
  }
  if (responseParser->hasName("receiver")) {
  receiver.setParser(responseParser->getObjectParser("receiver"));
  receiver.parseResponse();
  }
  if (responseParser->hasName("shipping")) {
  shipping = responseParser->getStrByName("shipping");
  }
  if (responseParser->hasName("snapshot_url")) {
  snapshotUrl = responseParser->getStrByName("snapshot_url");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("sub_purchase_orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("sub_purchase_orders");
  Parser *parser;
  foreach (parser, listParser) {
    SubPurchaseOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    subPurchaseOrders.append(tmp);
  }
  }
  if (responseParser->hasName("supplier_flag")) {
  supplierFlag = responseParser->getNumByName("supplier_flag");
  }
  if (responseParser->hasName("supplier_from")) {
  supplierFrom = responseParser->getStrByName("supplier_from");
  }
  if (responseParser->hasName("supplier_memo")) {
  supplierMemo = responseParser->getStrByName("supplier_memo");
  }
  if (responseParser->hasName("supplier_username")) {
  supplierUsername = responseParser->getStrByName("supplier_username");
  }
  if (responseParser->hasName("tc_order_id")) {
  tcOrderId = responseParser->getNumByName("tc_order_id");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }
  if (responseParser->hasName("trade_type")) {
  tradeType = responseParser->getStrByName("trade_type");
  }

}

