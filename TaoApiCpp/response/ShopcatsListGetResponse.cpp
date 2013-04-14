#include <TaoApiCpp/response/ShopcatsListGetResponse.h>

QList<ShopCat> ShopcatsListGetResponse::getShopCats() const {
  return shopCats;
}
void ShopcatsListGetResponse::setShopCats (QList<ShopCat> shopCats) {
  this->shopCats = shopCats;
}

void ShopcatsListGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shop_cats")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("shop_cats");
  Parser *parser;
  foreach (parser, listParser) {
    ShopCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    shopCats.append(tmp);
  }
  }

}

