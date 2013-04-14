#include <TaoApiCpp/domain/FavoriteShop.h>
qlonglong FavoriteShop::getRate() const {
  return rate;
}
void FavoriteShop::setRate (qlonglong rate) {
  this->rate = rate;
}

qlonglong FavoriteShop::getSellerId() const {
  return sellerId;
}
void FavoriteShop::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
}

QString FavoriteShop::getSellerNick() const {
  return sellerNick;
}
void FavoriteShop::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

qlonglong FavoriteShop::getShopId() const {
  return shopId;
}
void FavoriteShop::setShopId (qlonglong shopId) {
  this->shopId = shopId;
}

QString FavoriteShop::getShopName() const {
  return shopName;
}
void FavoriteShop::setShopName (QString shopName) {
  this->shopName = shopName;
}

QString FavoriteShop::getShopPic() const {
  return shopPic;
}
void FavoriteShop::setShopPic (QString shopPic) {
  this->shopPic = shopPic;
}

QString FavoriteShop::getShopUrl() const {
  return shopUrl;
}
void FavoriteShop::setShopUrl (QString shopUrl) {
  this->shopUrl = shopUrl;
}


void FavoriteShop::parseResponse() {
  if (responseParser->hasName("rate")) {
  rate = responseParser->getNumByName("rate");
  }
  if (responseParser->hasName("seller_id")) {
  sellerId = responseParser->getNumByName("seller_id");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("shop_id")) {
  shopId = responseParser->getNumByName("shop_id");
  }
  if (responseParser->hasName("shop_name")) {
  shopName = responseParser->getStrByName("shop_name");
  }
  if (responseParser->hasName("shop_pic")) {
  shopPic = responseParser->getStrByName("shop_pic");
  }
  if (responseParser->hasName("shop_url")) {
  shopUrl = responseParser->getStrByName("shop_url");
  }

}

