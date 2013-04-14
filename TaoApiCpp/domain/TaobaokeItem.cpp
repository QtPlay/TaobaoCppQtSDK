#include <TaoApiCpp/domain/TaobaokeItem.h>
QString TaobaokeItem::getClickUrl() const {
  return clickUrl;
}
void TaobaokeItem::setClickUrl (QString clickUrl) {
  this->clickUrl = clickUrl;
}

QString TaobaokeItem::getCommission() const {
  return commission;
}
void TaobaokeItem::setCommission (QString commission) {
  this->commission = commission;
}

QString TaobaokeItem::getCommissionNum() const {
  return commissionNum;
}
void TaobaokeItem::setCommissionNum (QString commissionNum) {
  this->commissionNum = commissionNum;
}

QString TaobaokeItem::getCommissionRate() const {
  return commissionRate;
}
void TaobaokeItem::setCommissionRate (QString commissionRate) {
  this->commissionRate = commissionRate;
}

QString TaobaokeItem::getCommissionVolume() const {
  return commissionVolume;
}
void TaobaokeItem::setCommissionVolume (QString commissionVolume) {
  this->commissionVolume = commissionVolume;
}

QString TaobaokeItem::getCouponEndTime() const {
  return couponEndTime;
}
void TaobaokeItem::setCouponEndTime (QString couponEndTime) {
  this->couponEndTime = couponEndTime;
}

QString TaobaokeItem::getCouponPrice() const {
  return couponPrice;
}
void TaobaokeItem::setCouponPrice (QString couponPrice) {
  this->couponPrice = couponPrice;
}

QString TaobaokeItem::getCouponRate() const {
  return couponRate;
}
void TaobaokeItem::setCouponRate (QString couponRate) {
  this->couponRate = couponRate;
}

QString TaobaokeItem::getCouponStartTime() const {
  return couponStartTime;
}
void TaobaokeItem::setCouponStartTime (QString couponStartTime) {
  this->couponStartTime = couponStartTime;
}

QString TaobaokeItem::getItemLocation() const {
  return itemLocation;
}
void TaobaokeItem::setItemLocation (QString itemLocation) {
  this->itemLocation = itemLocation;
}

QString TaobaokeItem::getKeywordClickUrl() const {
  return keywordClickUrl;
}
void TaobaokeItem::setKeywordClickUrl (QString keywordClickUrl) {
  this->keywordClickUrl = keywordClickUrl;
}

QString TaobaokeItem::getNick() const {
  return nick;
}
void TaobaokeItem::setNick (QString nick) {
  this->nick = nick;
}

qlonglong TaobaokeItem::getNumIid() const {
  return numIid;
}
void TaobaokeItem::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString TaobaokeItem::getPicUrl() const {
  return picUrl;
}
void TaobaokeItem::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString TaobaokeItem::getPrice() const {
  return price;
}
void TaobaokeItem::setPrice (QString price) {
  this->price = price;
}

QString TaobaokeItem::getPromotionPrice() const {
  return promotionPrice;
}
void TaobaokeItem::setPromotionPrice (QString promotionPrice) {
  this->promotionPrice = promotionPrice;
}

qlonglong TaobaokeItem::getSellerCreditScore() const {
  return sellerCreditScore;
}
void TaobaokeItem::setSellerCreditScore (qlonglong sellerCreditScore) {
  this->sellerCreditScore = sellerCreditScore;
}

qlonglong TaobaokeItem::getSellerId() const {
  return sellerId;
}
void TaobaokeItem::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
}

QString TaobaokeItem::getShopClickUrl() const {
  return shopClickUrl;
}
void TaobaokeItem::setShopClickUrl (QString shopClickUrl) {
  this->shopClickUrl = shopClickUrl;
}

QString TaobaokeItem::getShopType() const {
  return shopType;
}
void TaobaokeItem::setShopType (QString shopType) {
  this->shopType = shopType;
}

QString TaobaokeItem::getTaobaokeCatClickUrl() const {
  return taobaokeCatClickUrl;
}
void TaobaokeItem::setTaobaokeCatClickUrl (QString taobaokeCatClickUrl) {
  this->taobaokeCatClickUrl = taobaokeCatClickUrl;
}

QString TaobaokeItem::getTitle() const {
  return title;
}
void TaobaokeItem::setTitle (QString title) {
  this->title = title;
}

qlonglong TaobaokeItem::getVolume() const {
  return volume;
}
void TaobaokeItem::setVolume (qlonglong volume) {
  this->volume = volume;
}


void TaobaokeItem::parseResponse() {
  if (responseParser->hasName("click_url")) {
  clickUrl = responseParser->getStrByName("click_url");
  }
  if (responseParser->hasName("commission")) {
  commission = responseParser->getStrByName("commission");
  }
  if (responseParser->hasName("commission_num")) {
  commissionNum = responseParser->getStrByName("commission_num");
  }
  if (responseParser->hasName("commission_rate")) {
  commissionRate = responseParser->getStrByName("commission_rate");
  }
  if (responseParser->hasName("commission_volume")) {
  commissionVolume = responseParser->getStrByName("commission_volume");
  }
  if (responseParser->hasName("coupon_end_time")) {
  couponEndTime = responseParser->getStrByName("coupon_end_time");
  }
  if (responseParser->hasName("coupon_price")) {
  couponPrice = responseParser->getStrByName("coupon_price");
  }
  if (responseParser->hasName("coupon_rate")) {
  couponRate = responseParser->getStrByName("coupon_rate");
  }
  if (responseParser->hasName("coupon_start_time")) {
  couponStartTime = responseParser->getStrByName("coupon_start_time");
  }
  if (responseParser->hasName("item_location")) {
  itemLocation = responseParser->getStrByName("item_location");
  }
  if (responseParser->hasName("keyword_click_url")) {
  keywordClickUrl = responseParser->getStrByName("keyword_click_url");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("promotion_price")) {
  promotionPrice = responseParser->getStrByName("promotion_price");
  }
  if (responseParser->hasName("seller_credit_score")) {
  sellerCreditScore = responseParser->getNumByName("seller_credit_score");
  }
  if (responseParser->hasName("seller_id")) {
  sellerId = responseParser->getNumByName("seller_id");
  }
  if (responseParser->hasName("shop_click_url")) {
  shopClickUrl = responseParser->getStrByName("shop_click_url");
  }
  if (responseParser->hasName("shop_type")) {
  shopType = responseParser->getStrByName("shop_type");
  }
  if (responseParser->hasName("taobaoke_cat_click_url")) {
  taobaokeCatClickUrl = responseParser->getStrByName("taobaoke_cat_click_url");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("volume")) {
  volume = responseParser->getNumByName("volume");
  }

}

