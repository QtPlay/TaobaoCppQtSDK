#include <TaoApiCpp/domain/GradeDiscount.h>
qlonglong GradeDiscount::getDiscountId() const {
  return discountId;
}
void GradeDiscount::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
}

qlonglong GradeDiscount::getDiscountType() const {
  return discountType;
}
void GradeDiscount::setDiscountType (qlonglong discountType) {
  this->discountType = discountType;
}

QString GradeDiscount::getPrice() const {
  return price;
}
void GradeDiscount::setPrice (QString price) {
  this->price = price;
}

qlonglong GradeDiscount::getSkuId() const {
  return skuId;
}
void GradeDiscount::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}

qlonglong GradeDiscount::getTradeType() const {
  return tradeType;
}
void GradeDiscount::setTradeType (qlonglong tradeType) {
  this->tradeType = tradeType;
}


void GradeDiscount::parseResponse() {
  if (responseParser->hasName("discount_id")) {
  discountId = responseParser->getNumByName("discount_id");
  }
  if (responseParser->hasName("discount_type")) {
  discountType = responseParser->getNumByName("discount_type");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }
  if (responseParser->hasName("trade_type")) {
  tradeType = responseParser->getNumByName("trade_type");
  }

}

