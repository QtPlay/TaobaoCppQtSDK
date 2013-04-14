#include <TaoApiCpp/domain/Shipping.h>
QString Shipping::getBuyerNick() const {
  return buyerNick;
}
void Shipping::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QString Shipping::getCompanyName() const {
  return companyName;
}
void Shipping::setCompanyName (QString companyName) {
  this->companyName = companyName;
}

QDateTime Shipping::getCreated() const {
  return created;
}
void Shipping::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime Shipping::getDeliveryEnd() const {
  return deliveryEnd;
}
void Shipping::setDeliveryEnd (QDateTime deliveryEnd) {
  this->deliveryEnd = deliveryEnd;
}

QDateTime Shipping::getDeliveryStart() const {
  return deliveryStart;
}
void Shipping::setDeliveryStart (QDateTime deliveryStart) {
  this->deliveryStart = deliveryStart;
}

QString Shipping::getFreightPayer() const {
  return freightPayer;
}
void Shipping::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
}

bool Shipping::getIsQuickCodOrder() const {
  return isQuickCodOrder;
}
void Shipping::setIsQuickCodOrder (bool isQuickCodOrder) {
  this->isQuickCodOrder = isQuickCodOrder;
}

bool Shipping::getIsSuccess() const {
  return isSuccess;
}
void Shipping::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

QString Shipping::getItemTitle() const {
  return itemTitle;
}
void Shipping::setItemTitle (QString itemTitle) {
  this->itemTitle = itemTitle;
}

Location Shipping::getLocation() const {
  return location;
}
void Shipping::setLocation (Location location) {
  this->location = location;
}

QDateTime Shipping::getModified() const {
  return modified;
}
void Shipping::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Shipping::getOrderCode() const {
  return orderCode;
}
void Shipping::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

QString Shipping::getOutSid() const {
  return outSid;
}
void Shipping::setOutSid (QString outSid) {
  this->outSid = outSid;
}

QString Shipping::getReceiverMobile() const {
  return receiverMobile;
}
void Shipping::setReceiverMobile (QString receiverMobile) {
  this->receiverMobile = receiverMobile;
}

QString Shipping::getReceiverName() const {
  return receiverName;
}
void Shipping::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
}

QString Shipping::getReceiverPhone() const {
  return receiverPhone;
}
void Shipping::setReceiverPhone (QString receiverPhone) {
  this->receiverPhone = receiverPhone;
}

QString Shipping::getSellerConfirm() const {
  return sellerConfirm;
}
void Shipping::setSellerConfirm (QString sellerConfirm) {
  this->sellerConfirm = sellerConfirm;
}

QString Shipping::getSellerNick() const {
  return sellerNick;
}
void Shipping::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString Shipping::getStatus() const {
  return status;
}
void Shipping::setStatus (QString status) {
  this->status = status;
}

qlonglong Shipping::getTid() const {
  return tid;
}
void Shipping::setTid (qlonglong tid) {
  this->tid = tid;
}

QString Shipping::getType() const {
  return type;
}
void Shipping::setType (QString type) {
  this->type = type;
}


void Shipping::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("company_name")) {
  companyName = responseParser->getStrByName("company_name");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("delivery_end")) {
  deliveryEnd = responseParser->getDateByName("delivery_end");
  }
  if (responseParser->hasName("delivery_start")) {
  deliveryStart = responseParser->getDateByName("delivery_start");
  }
  if (responseParser->hasName("freight_payer")) {
  freightPayer = responseParser->getStrByName("freight_payer");
  }
  if (responseParser->hasName("is_quick_cod_order")) {
  isQuickCodOrder = responseParser->getBoolByName("is_quick_cod_order");
  }
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }
  if (responseParser->hasName("item_title")) {
  itemTitle = responseParser->getStrByName("item_title");
  }
  if (responseParser->hasName("location")) {
  location.setParser(responseParser->getObjectParser("location"));
  location.parseResponse();
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }
  if (responseParser->hasName("out_sid")) {
  outSid = responseParser->getStrByName("out_sid");
  }
  if (responseParser->hasName("receiver_mobile")) {
  receiverMobile = responseParser->getStrByName("receiver_mobile");
  }
  if (responseParser->hasName("receiver_name")) {
  receiverName = responseParser->getStrByName("receiver_name");
  }
  if (responseParser->hasName("receiver_phone")) {
  receiverPhone = responseParser->getStrByName("receiver_phone");
  }
  if (responseParser->hasName("seller_confirm")) {
  sellerConfirm = responseParser->getStrByName("seller_confirm");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }

}

