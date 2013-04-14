#include <TaoApiCpp/domain/TmallSearchItem.h>
QString TmallSearchItem::getFastPostFee() const {
  return fastPostFee;
}
void TmallSearchItem::setFastPostFee (QString fastPostFee) {
  this->fastPostFee = fastPostFee;
}

qlonglong TmallSearchItem::getIsCod() const {
  return isCod;
}
void TmallSearchItem::setIsCod (qlonglong isCod) {
  this->isCod = isCod;
}

bool TmallSearchItem::getIsPromotion() const {
  return isPromotion;
}
void TmallSearchItem::setIsPromotion (bool isPromotion) {
  this->isPromotion = isPromotion;
}

qlonglong TmallSearchItem::getItemId() const {
  return itemId;
}
void TmallSearchItem::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString TmallSearchItem::getLocation() const {
  return location;
}
void TmallSearchItem::setLocation (QString location) {
  this->location = location;
}

QString TmallSearchItem::getNick() const {
  return nick;
}
void TmallSearchItem::setNick (QString nick) {
  this->nick = nick;
}

QString TmallSearchItem::getPicPath() const {
  return picPath;
}
void TmallSearchItem::setPicPath (QString picPath) {
  this->picPath = picPath;
}

QString TmallSearchItem::getPrice() const {
  return price;
}
void TmallSearchItem::setPrice (QString price) {
  this->price = price;
}

QString TmallSearchItem::getPriceWithRate() const {
  return priceWithRate;
}
void TmallSearchItem::setPriceWithRate (QString priceWithRate) {
  this->priceWithRate = priceWithRate;
}

QString TmallSearchItem::getSellerLoc() const {
  return sellerLoc;
}
void TmallSearchItem::setSellerLoc (QString sellerLoc) {
  this->sellerLoc = sellerLoc;
}

qlonglong TmallSearchItem::getShipping() const {
  return shipping;
}
void TmallSearchItem::setShipping (qlonglong shipping) {
  this->shipping = shipping;
}

QString TmallSearchItem::getSold() const {
  return sold;
}
void TmallSearchItem::setSold (QString sold) {
  this->sold = sold;
}

qlonglong TmallSearchItem::getSpuId() const {
  return spuId;
}
void TmallSearchItem::setSpuId (qlonglong spuId) {
  this->spuId = spuId;
}

QString TmallSearchItem::getTitle() const {
  return title;
}
void TmallSearchItem::setTitle (QString title) {
  this->title = title;
}

QString TmallSearchItem::getUrl() const {
  return url;
}
void TmallSearchItem::setUrl (QString url) {
  this->url = url;
}

qlonglong TmallSearchItem::getUserId() const {
  return userId;
}
void TmallSearchItem::setUserId (qlonglong userId) {
  this->userId = userId;
}


void TmallSearchItem::parseResponse() {
  if (responseParser->hasName("fast_post_fee")) {
  fastPostFee = responseParser->getStrByName("fast_post_fee");
  }
  if (responseParser->hasName("is_cod")) {
  isCod = responseParser->getNumByName("is_cod");
  }
  if (responseParser->hasName("is_promotion")) {
  isPromotion = responseParser->getBoolByName("is_promotion");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("location")) {
  location = responseParser->getStrByName("location");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("pic_path")) {
  picPath = responseParser->getStrByName("pic_path");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("price_with_rate")) {
  priceWithRate = responseParser->getStrByName("price_with_rate");
  }
  if (responseParser->hasName("seller_loc")) {
  sellerLoc = responseParser->getStrByName("seller_loc");
  }
  if (responseParser->hasName("shipping")) {
  shipping = responseParser->getNumByName("shipping");
  }
  if (responseParser->hasName("sold")) {
  sold = responseParser->getStrByName("sold");
  }
  if (responseParser->hasName("spu_id")) {
  spuId = responseParser->getNumByName("spu_id");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

