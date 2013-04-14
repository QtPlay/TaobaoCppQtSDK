#include <TaoApiCpp/domain/Refund.h>
QString Refund::getAddress() const {
  return address;
}
void Refund::setAddress (QString address) {
  this->address = address;
}

qlonglong Refund::getAdvanceStatus() const {
  return advanceStatus;
}
void Refund::setAdvanceStatus (qlonglong advanceStatus) {
  this->advanceStatus = advanceStatus;
}

QString Refund::getAlipayNo() const {
  return alipayNo;
}
void Refund::setAlipayNo (QString alipayNo) {
  this->alipayNo = alipayNo;
}

QString Refund::getBuyerNick() const {
  return buyerNick;
}
void Refund::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QString Refund::getCompanyName() const {
  return companyName;
}
void Refund::setCompanyName (QString companyName) {
  this->companyName = companyName;
}

QDateTime Refund::getCreated() const {
  return created;
}
void Refund::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong Refund::getCsStatus() const {
  return csStatus;
}
void Refund::setCsStatus (qlonglong csStatus) {
  this->csStatus = csStatus;
}

QString Refund::getDesc() const {
  return desc;
}
void Refund::setDesc (QString desc) {
  this->desc = desc;
}

QDateTime Refund::getGoodReturnTime() const {
  return goodReturnTime;
}
void Refund::setGoodReturnTime (QDateTime goodReturnTime) {
  this->goodReturnTime = goodReturnTime;
}

QString Refund::getGoodStatus() const {
  return goodStatus;
}
void Refund::setGoodStatus (QString goodStatus) {
  this->goodStatus = goodStatus;
}

bool Refund::getHasGoodReturn() const {
  return hasGoodReturn;
}
void Refund::setHasGoodReturn (bool hasGoodReturn) {
  this->hasGoodReturn = hasGoodReturn;
}

QString Refund::getIid() const {
  return iid;
}
void Refund::setIid (QString iid) {
  this->iid = iid;
}

QDateTime Refund::getModified() const {
  return modified;
}
void Refund::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong Refund::getNum() const {
  return num;
}
void Refund::setNum (qlonglong num) {
  this->num = num;
}

qlonglong Refund::getNumIid() const {
  return numIid;
}
void Refund::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

qlonglong Refund::getOid() const {
  return oid;
}
void Refund::setOid (qlonglong oid) {
  this->oid = oid;
}

QString Refund::getOrderStatus() const {
  return orderStatus;
}
void Refund::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}

QString Refund::getPayment() const {
  return payment;
}
void Refund::setPayment (QString payment) {
  this->payment = payment;
}

QString Refund::getPrice() const {
  return price;
}
void Refund::setPrice (QString price) {
  this->price = price;
}

QString Refund::getReason() const {
  return reason;
}
void Refund::setReason (QString reason) {
  this->reason = reason;
}

QString Refund::getRefundFee() const {
  return refundFee;
}
void Refund::setRefundFee (QString refundFee) {
  this->refundFee = refundFee;
}

qlonglong Refund::getRefundId() const {
  return refundId;
}
void Refund::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
}

RefundRemindTimeout Refund::getRefundRemindTimeout() const {
  return refundRemindTimeout;
}
void Refund::setRefundRemindTimeout (RefundRemindTimeout refundRemindTimeout) {
  this->refundRemindTimeout = refundRemindTimeout;
}

QString Refund::getSellerNick() const {
  return sellerNick;
}
void Refund::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString Refund::getShippingType() const {
  return shippingType;
}
void Refund::setShippingType (QString shippingType) {
  this->shippingType = shippingType;
}

QString Refund::getSid() const {
  return sid;
}
void Refund::setSid (QString sid) {
  this->sid = sid;
}

QString Refund::getSplitSellerFee() const {
  return splitSellerFee;
}
void Refund::setSplitSellerFee (QString splitSellerFee) {
  this->splitSellerFee = splitSellerFee;
}

QString Refund::getSplitTaobaoFee() const {
  return splitTaobaoFee;
}
void Refund::setSplitTaobaoFee (QString splitTaobaoFee) {
  this->splitTaobaoFee = splitTaobaoFee;
}

QString Refund::getStatus() const {
  return status;
}
void Refund::setStatus (QString status) {
  this->status = status;
}

qlonglong Refund::getTid() const {
  return tid;
}
void Refund::setTid (qlonglong tid) {
  this->tid = tid;
}

QString Refund::getTitle() const {
  return title;
}
void Refund::setTitle (QString title) {
  this->title = title;
}

QString Refund::getTotalFee() const {
  return totalFee;
}
void Refund::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}


void Refund::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("advance_status")) {
  advanceStatus = responseParser->getNumByName("advance_status");
  }
  if (responseParser->hasName("alipay_no")) {
  alipayNo = responseParser->getStrByName("alipay_no");
  }
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("company_name")) {
  companyName = responseParser->getStrByName("company_name");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("cs_status")) {
  csStatus = responseParser->getNumByName("cs_status");
  }
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("good_return_time")) {
  goodReturnTime = responseParser->getDateByName("good_return_time");
  }
  if (responseParser->hasName("good_status")) {
  goodStatus = responseParser->getStrByName("good_status");
  }
  if (responseParser->hasName("has_good_return")) {
  hasGoodReturn = responseParser->getBoolByName("has_good_return");
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getStrByName("iid");
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
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
  }
  if (responseParser->hasName("payment")) {
  payment = responseParser->getStrByName("payment");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("reason")) {
  reason = responseParser->getStrByName("reason");
  }
  if (responseParser->hasName("refund_fee")) {
  refundFee = responseParser->getStrByName("refund_fee");
  }
  if (responseParser->hasName("refund_id")) {
  refundId = responseParser->getNumByName("refund_id");
  }
  if (responseParser->hasName("refund_remind_timeout")) {
  refundRemindTimeout.setParser(responseParser->getObjectParser("refund_remind_timeout"));
  refundRemindTimeout.parseResponse();
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("shipping_type")) {
  shippingType = responseParser->getStrByName("shipping_type");
  }
  if (responseParser->hasName("sid")) {
  sid = responseParser->getStrByName("sid");
  }
  if (responseParser->hasName("split_seller_fee")) {
  splitSellerFee = responseParser->getStrByName("split_seller_fee");
  }
  if (responseParser->hasName("split_taobao_fee")) {
  splitTaobaoFee = responseParser->getStrByName("split_taobao_fee");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }

}

