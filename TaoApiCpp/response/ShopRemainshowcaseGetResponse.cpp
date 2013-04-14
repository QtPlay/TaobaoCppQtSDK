#include <TaoApiCpp/response/ShopRemainshowcaseGetResponse.h>

Shop ShopRemainshowcaseGetResponse::getShop() const {
  return shop;
}
void ShopRemainshowcaseGetResponse::setShop (Shop shop) {
  this->shop = shop;
}

void ShopRemainshowcaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shop")) {
  shop.setParser(responseParser->getObjectParser("shop"));
  shop.parseResponse();
  }

}

