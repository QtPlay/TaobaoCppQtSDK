#include <TaoApiCpp/response/ShoprecommendShopsGetResponse.h>

QList<FavoriteShop> ShoprecommendShopsGetResponse::getFavoriteShops() const {
  return favoriteShops;
}
void ShoprecommendShopsGetResponse::setFavoriteShops (QList<FavoriteShop> favoriteShops) {
  this->favoriteShops = favoriteShops;
}

void ShoprecommendShopsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("favorite_shops")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("favorite_shops");
  Parser *parser;
  foreach (parser, listParser) {
    FavoriteShop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    favoriteShops.append(tmp);
  }
  }

}

