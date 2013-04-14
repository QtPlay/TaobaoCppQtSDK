#include <TaoApiCpp/domain/FavoriteItem.h>
QString FavoriteItem::getItemName() const {
  return itemName;
}
void FavoriteItem::setItemName (QString itemName) {
  this->itemName = itemName;
}

QString FavoriteItem::getItemPictrue() const {
  return itemPictrue;
}
void FavoriteItem::setItemPictrue (QString itemPictrue) {
  this->itemPictrue = itemPictrue;
}

QString FavoriteItem::getItemPrice() const {
  return itemPrice;
}
void FavoriteItem::setItemPrice (QString itemPrice) {
  this->itemPrice = itemPrice;
}

QString FavoriteItem::getItemUrl() const {
  return itemUrl;
}
void FavoriteItem::setItemUrl (QString itemUrl) {
  this->itemUrl = itemUrl;
}

QString FavoriteItem::getPromotionPrice() const {
  return promotionPrice;
}
void FavoriteItem::setPromotionPrice (QString promotionPrice) {
  this->promotionPrice = promotionPrice;
}

qlonglong FavoriteItem::getSellCount() const {
  return sellCount;
}
void FavoriteItem::setSellCount (qlonglong sellCount) {
  this->sellCount = sellCount;
}

QString FavoriteItem::getTrackIid() const {
  return trackIid;
}
void FavoriteItem::setTrackIid (QString trackIid) {
  this->trackIid = trackIid;
}


void FavoriteItem::parseResponse() {
  if (responseParser->hasName("item_name")) {
  itemName = responseParser->getStrByName("item_name");
  }
  if (responseParser->hasName("item_pictrue")) {
  itemPictrue = responseParser->getStrByName("item_pictrue");
  }
  if (responseParser->hasName("item_price")) {
  itemPrice = responseParser->getStrByName("item_price");
  }
  if (responseParser->hasName("item_url")) {
  itemUrl = responseParser->getStrByName("item_url");
  }
  if (responseParser->hasName("promotion_price")) {
  promotionPrice = responseParser->getStrByName("promotion_price");
  }
  if (responseParser->hasName("sell_count")) {
  sellCount = responseParser->getNumByName("sell_count");
  }
  if (responseParser->hasName("track_iid")) {
  trackIid = responseParser->getStrByName("track_iid");
  }

}

