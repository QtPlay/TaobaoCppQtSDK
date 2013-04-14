#include <TaoApiCpp/domain/PromotionInItem.h>
QString PromotionInItem::getDesc() const {
  return desc;
}
void PromotionInItem::setDesc (QString desc) {
  this->desc = desc;
}

QDateTime PromotionInItem::getEndTime() const {
  return endTime;
}
void PromotionInItem::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

QString PromotionInItem::getItemPromoPrice() const {
  return itemPromoPrice;
}
void PromotionInItem::setItemPromoPrice (QString itemPromoPrice) {
  this->itemPromoPrice = itemPromoPrice;
}

QString PromotionInItem::getName() const {
  return name;
}
void PromotionInItem::setName (QString name) {
  this->name = name;
}

QString PromotionInItem::getOtherNeed() const {
  return otherNeed;
}
void PromotionInItem::setOtherNeed (QString otherNeed) {
  this->otherNeed = otherNeed;
}

QString PromotionInItem::getOtherSend() const {
  return otherSend;
}
void PromotionInItem::setOtherSend (QString otherSend) {
  this->otherSend = otherSend;
}

QString PromotionInItem::getPromotionId() const {
  return promotionId;
}
void PromotionInItem::setPromotionId (QString promotionId) {
  this->promotionId = promotionId;
}

QList<QString> PromotionInItem::getSkuIdList() const {
  return skuIdList;
}
void PromotionInItem::setSkuIdList (QList<QString> skuIdList) {
  this->skuIdList = skuIdList;
}

QList<QString> PromotionInItem::getSkuPriceList() const {
  return skuPriceList;
}
void PromotionInItem::setSkuPriceList (QList<QString> skuPriceList) {
  this->skuPriceList = skuPriceList;
}

QDateTime PromotionInItem::getStartTime() const {
  return startTime;
}
void PromotionInItem::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
}


void PromotionInItem::parseResponse() {
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("item_promo_price")) {
  itemPromoPrice = responseParser->getStrByName("item_promo_price");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("other_need")) {
  otherNeed = responseParser->getStrByName("other_need");
  }
  if (responseParser->hasName("other_send")) {
  otherSend = responseParser->getStrByName("other_send");
  }
  if (responseParser->hasName("promotion_id")) {
  promotionId = responseParser->getStrByName("promotion_id");
  }
  if (responseParser->hasName("sku_id_list")) {
  skuIdList = responseParser->getListStrByName("sku_id_list");
  }
  if (responseParser->hasName("sku_price_list")) {
  skuPriceList = responseParser->getListStrByName("sku_price_list");
  }
  if (responseParser->hasName("start_time")) {
  startTime = responseParser->getDateByName("start_time");
  }

}

