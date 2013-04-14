#include <TaoApiCpp/domain/OrderAmount.h>
QString OrderAmount::getAdjustFee() const {
  return adjustFee;
}
void OrderAmount::setAdjustFee (QString adjustFee) {
  this->adjustFee = adjustFee;
}

QString OrderAmount::getDiscountFee() const {
  return discountFee;
}
void OrderAmount::setDiscountFee (QString discountFee) {
  this->discountFee = discountFee;
}

qlonglong OrderAmount::getNum() const {
  return num;
}
void OrderAmount::setNum (qlonglong num) {
  this->num = num;
}

qlonglong OrderAmount::getNumIid() const {
  return numIid;
}
void OrderAmount::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

qlonglong OrderAmount::getOid() const {
  return oid;
}
void OrderAmount::setOid (qlonglong oid) {
  this->oid = oid;
}

QString OrderAmount::getPayment() const {
  return payment;
}
void OrderAmount::setPayment (QString payment) {
  this->payment = payment;
}

QString OrderAmount::getPrice() const {
  return price;
}
void OrderAmount::setPrice (QString price) {
  this->price = price;
}

QString OrderAmount::getPromotionName() const {
  return promotionName;
}
void OrderAmount::setPromotionName (QString promotionName) {
  this->promotionName = promotionName;
}

qlonglong OrderAmount::getSkuId() const {
  return skuId;
}
void OrderAmount::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}

QString OrderAmount::getSkuPropertiesName() const {
  return skuPropertiesName;
}
void OrderAmount::setSkuPropertiesName (QString skuPropertiesName) {
  this->skuPropertiesName = skuPropertiesName;
}

QString OrderAmount::getTitle() const {
  return title;
}
void OrderAmount::setTitle (QString title) {
  this->title = title;
}


void OrderAmount::parseResponse() {
  if (responseParser->hasName("adjust_fee")) {
  adjustFee = responseParser->getStrByName("adjust_fee");
  }
  if (responseParser->hasName("discount_fee")) {
  discountFee = responseParser->getStrByName("discount_fee");
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
  if (responseParser->hasName("payment")) {
  payment = responseParser->getStrByName("payment");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("promotion_name")) {
  promotionName = responseParser->getStrByName("promotion_name");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }
  if (responseParser->hasName("sku_properties_name")) {
  skuPropertiesName = responseParser->getStrByName("sku_properties_name");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

