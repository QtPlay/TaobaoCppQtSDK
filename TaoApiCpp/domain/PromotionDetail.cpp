#include <TaoApiCpp/domain/PromotionDetail.h>
QString PromotionDetail::getDiscountFee() const {
  return discountFee;
}
void PromotionDetail::setDiscountFee (QString discountFee) {
  this->discountFee = discountFee;
}

QString PromotionDetail::getGiftItemId() const {
  return giftItemId;
}
void PromotionDetail::setGiftItemId (QString giftItemId) {
  this->giftItemId = giftItemId;
}

QString PromotionDetail::getGiftItemName() const {
  return giftItemName;
}
void PromotionDetail::setGiftItemName (QString giftItemName) {
  this->giftItemName = giftItemName;
}

QString PromotionDetail::getGiftItemNum() const {
  return giftItemNum;
}
void PromotionDetail::setGiftItemNum (QString giftItemNum) {
  this->giftItemNum = giftItemNum;
}

qlonglong PromotionDetail::getId() const {
  return id;
}
void PromotionDetail::setId (qlonglong id) {
  this->id = id;
}

QString PromotionDetail::getPromotionDesc() const {
  return promotionDesc;
}
void PromotionDetail::setPromotionDesc (QString promotionDesc) {
  this->promotionDesc = promotionDesc;
}

QString PromotionDetail::getPromotionId() const {
  return promotionId;
}
void PromotionDetail::setPromotionId (QString promotionId) {
  this->promotionId = promotionId;
}

QString PromotionDetail::getPromotionName() const {
  return promotionName;
}
void PromotionDetail::setPromotionName (QString promotionName) {
  this->promotionName = promotionName;
}


void PromotionDetail::parseResponse() {
  if (responseParser->hasName("discount_fee")) {
  discountFee = responseParser->getStrByName("discount_fee");
  }
  if (responseParser->hasName("gift_item_id")) {
  giftItemId = responseParser->getStrByName("gift_item_id");
  }
  if (responseParser->hasName("gift_item_name")) {
  giftItemName = responseParser->getStrByName("gift_item_name");
  }
  if (responseParser->hasName("gift_item_num")) {
  giftItemNum = responseParser->getStrByName("gift_item_num");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("promotion_desc")) {
  promotionDesc = responseParser->getStrByName("promotion_desc");
  }
  if (responseParser->hasName("promotion_id")) {
  promotionId = responseParser->getStrByName("promotion_id");
  }
  if (responseParser->hasName("promotion_name")) {
  promotionName = responseParser->getStrByName("promotion_name");
  }

}

