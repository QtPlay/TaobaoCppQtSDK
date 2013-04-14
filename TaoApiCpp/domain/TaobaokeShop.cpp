#include <TaoApiCpp/domain/TaobaokeShop.h>
qlonglong TaobaokeShop::getAuctionCount() const {
  return auctionCount;
}
void TaobaokeShop::setAuctionCount (qlonglong auctionCount) {
  this->auctionCount = auctionCount;
}

QString TaobaokeShop::getClickUrl() const {
  return clickUrl;
}
void TaobaokeShop::setClickUrl (QString clickUrl) {
  this->clickUrl = clickUrl;
}

QString TaobaokeShop::getCommissionRate() const {
  return commissionRate;
}
void TaobaokeShop::setCommissionRate (QString commissionRate) {
  this->commissionRate = commissionRate;
}

QString TaobaokeShop::getSellerCredit() const {
  return sellerCredit;
}
void TaobaokeShop::setSellerCredit (QString sellerCredit) {
  this->sellerCredit = sellerCredit;
}

QString TaobaokeShop::getSellerNick() const {
  return sellerNick;
}
void TaobaokeShop::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString TaobaokeShop::getShopTitle() const {
  return shopTitle;
}
void TaobaokeShop::setShopTitle (QString shopTitle) {
  this->shopTitle = shopTitle;
}

QString TaobaokeShop::getShopType() const {
  return shopType;
}
void TaobaokeShop::setShopType (QString shopType) {
  this->shopType = shopType;
}

QString TaobaokeShop::getTotalAuction() const {
  return totalAuction;
}
void TaobaokeShop::setTotalAuction (QString totalAuction) {
  this->totalAuction = totalAuction;
}

qlonglong TaobaokeShop::getUserId() const {
  return userId;
}
void TaobaokeShop::setUserId (qlonglong userId) {
  this->userId = userId;
}


void TaobaokeShop::parseResponse() {
  if (responseParser->hasName("auction_count")) {
  auctionCount = responseParser->getNumByName("auction_count");
  }
  if (responseParser->hasName("click_url")) {
  clickUrl = responseParser->getStrByName("click_url");
  }
  if (responseParser->hasName("commission_rate")) {
  commissionRate = responseParser->getStrByName("commission_rate");
  }
  if (responseParser->hasName("seller_credit")) {
  sellerCredit = responseParser->getStrByName("seller_credit");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("shop_title")) {
  shopTitle = responseParser->getStrByName("shop_title");
  }
  if (responseParser->hasName("shop_type")) {
  shopType = responseParser->getStrByName("shop_type");
  }
  if (responseParser->hasName("total_auction")) {
  totalAuction = responseParser->getStrByName("total_auction");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

