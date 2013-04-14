#include <TaoApiCpp/response/ItemrecommendItemsGetResponse.h>

QList<FavoriteItem> ItemrecommendItemsGetResponse::getValues() const {
  return values;
}
void ItemrecommendItemsGetResponse::setValues (QList<FavoriteItem> values) {
  this->values = values;
}

void ItemrecommendItemsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("values")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("values");
  Parser *parser;
  foreach (parser, listParser) {
    FavoriteItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    values.append(tmp);
  }
  }

}

