#include <TaoApiCpp/response/ShoprecommendItemsGetResponse.h>

QList<FavoriteItem> ShoprecommendItemsGetResponse::getFavoriteItems() const {
  return favoriteItems;
}
void ShoprecommendItemsGetResponse::setFavoriteItems (QList<FavoriteItem> favoriteItems) {
  this->favoriteItems = favoriteItems;
}

void ShoprecommendItemsGetResponse::parseNormalResponse() {
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

