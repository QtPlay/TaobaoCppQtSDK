#include <TaoApiCpp/domain/ServiceOrder.h>
QString ServiceOrder::getBuyerNick() const {
  return buyerNick;
}
void ServiceOrder::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

qlonglong ServiceOrder::getItemOid() const {
  return itemOid;
}
void ServiceOrder::setItemOid (qlonglong itemOid) {
  this->itemOid = itemOid;
}

qlonglong ServiceOrder::getNum() const {
  return num;
}
void ServiceOrder::setNum (qlonglong num) {
  this->num = num;
}

qlonglong ServiceOrder::getOid() const {
  return oid;
}
void ServiceOrder::setOid (qlonglong oid) {
  this->oid = oid;
}

QString ServiceOrder::getPayment() const {
  return payment;
}
void ServiceOrder::setPayment (QString payment) {
  this->payment = payment;
}

QString ServiceOrder::getPicPath() const {
  return picPath;
}
void ServiceOrder::setPicPath (QString picPath) {
  this->picPath = picPath;
}

QString ServiceOrder::getPrice() const {
  return price;
}
void ServiceOrder::setPrice (QString price) {
  this->price = price;
}

qlonglong ServiceOrder::getRefundId() const {
  return refundId;
}
void ServiceOrder::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
}

QString ServiceOrder::getSellerNick() const {
  return sellerNick;
}
void ServiceOrder::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString ServiceOrder::getServiceDetailUrl() const {
  return serviceDetailUrl;
}
void ServiceOrder::setServiceDetailUrl (QString serviceDetailUrl) {
  this->serviceDetailUrl = serviceDetailUrl;
}

qlonglong ServiceOrder::getServiceId() const {
  return serviceId;
}
void ServiceOrder::setServiceId (qlonglong serviceId) {
  this->serviceId = serviceId;
}

QString ServiceOrder::getTitle() const {
  return title;
}
void ServiceOrder::setTitle (QString title) {
  this->title = title;
}

QString ServiceOrder::getTotalFee() const {
  return totalFee;
}
void ServiceOrder::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}


void ServiceOrder::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("item_oid")) {
  itemOid = responseParser->getNumByName("item_oid");
  }
  if (responseParser->hasName("num")) {
  num = responseParser->getNumByName("num");
  }
  if (responseParser->hasName("oid")) {
  oid = responseParser->getNumByName("oid");
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
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("service_detail_url")) {
  serviceDetailUrl = responseParser->getStrByName("service_detail_url");
  }
  if (responseParser->hasName("service_id")) {
  serviceId = responseParser->getNumByName("service_id");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }

}

