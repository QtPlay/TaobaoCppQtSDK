#include <TaoApiCpp/response/UserrecommendItemsGetResponse.h>

QList<FavoriteItem> UserrecommendItemsGetResponse::getFavoriteItems() const {
  return favoriteItems;
}
void UserrecommendItemsGetResponse::setFavoriteItems (QList<FavoriteItem> favoriteItems) {
  this->favoriteItems = favoriteItems;
}

void UserrecommendItemsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("favorite_items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("favorite_items");
  Parser *parser;
  foreach (parser, listParser) {
    FavoriteItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    favoriteItems.append(tmp);
  }
  }

}

