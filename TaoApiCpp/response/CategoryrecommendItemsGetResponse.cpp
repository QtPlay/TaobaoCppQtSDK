#include <TaoApiCpp/response/CategoryrecommendItemsGetResponse.h>

QList<FavoriteItem> CategoryrecommendItemsGetResponse::getFavoriteItems() const {
  return favoriteItems;
}
void CategoryrecommendItemsGetResponse::setFavoriteItems (QList<FavoriteItem> favoriteItems) {
  this->favoriteItems = favoriteItems;
}

void CategoryrecommendItemsGetResponse::parseNormalResponse() {
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

