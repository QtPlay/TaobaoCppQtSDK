#include <TaoApiCpp/domain/TaobaokeItemDetail.h>
QString TaobaokeItemDetail::getClickUrl() const {
  return clickUrl;
}
void TaobaokeItemDetail::setClickUrl (QString clickUrl) {
  this->clickUrl = clickUrl;
}

Item TaobaokeItemDetail::getItem() const {
  return item;
}
void TaobaokeItemDetail::setItem (Item item) {
  this->item = item;
}

qlonglong TaobaokeItemDetail::getSellerCreditScore() const {
  return sellerCreditScore;
}
void TaobaokeItemDetail::setSellerCreditScore (qlonglong sellerCreditScore) {
  this->sellerCreditScore = sellerCreditScore;
}

QString TaobaokeItemDetail::getShopClickUrl() const {
  return shopClickUrl;
}
void TaobaokeItemDetail::setShopClickUrl (QString shopClickUrl) {
  this->shopClickUrl = shopClickUrl;
}


void TaobaokeItemDetail::parseResponse() {
  if (responseParser->hasName("click_url")) {
  clickUrl = responseParser->getStrByName("click_url");
  }
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }
  if (responseParser->hasName("seller_credit_score")) {
  sellerCreditScore = responseParser->getNumByName("seller_credit_score");
  }
  if (responseParser->hasName("shop_click_url")) {
  shopClickUrl = responseParser->getStrByName("shop_click_url");
  }

}

