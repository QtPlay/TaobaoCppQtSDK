#include <TaoApiCpp/response/ShopGetResponse.h>

Shop ShopGetResponse::getShop() const {
  return shop;
}
void ShopGetResponse::setShop (Shop shop) {
  this->shop = shop;
}

void ShopGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shop")) {
  shop.setParser(responseParser->getObjectParser("shop"));
  shop.parseResponse();
  }

}

