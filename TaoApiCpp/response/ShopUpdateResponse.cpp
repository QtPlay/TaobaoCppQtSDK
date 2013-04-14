#include <TaoApiCpp/response/ShopUpdateResponse.h>

Shop ShopUpdateResponse::getShop() const {
  return shop;
}
void ShopUpdateResponse::setShop (Shop shop) {
  this->shop = shop;
}

void ShopUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shop")) {
  shop.setParser(responseParser->getObjectParser("shop"));
  shop.parseResponse();
  }

}

