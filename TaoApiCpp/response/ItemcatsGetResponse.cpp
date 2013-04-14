#include <TaoApiCpp/response/ItemcatsGetResponse.h>

QList<ItemCat> ItemcatsGetResponse::getItemCats() const {
  return itemCats;
}
void ItemcatsGetResponse::setItemCats (QList<ItemCat> itemCats) {
  this->itemCats = itemCats;
}
QDateTime ItemcatsGetResponse::getLastModified() const {
  return lastModified;
}
void ItemcatsGetResponse::setLastModified (QDateTime lastModified) {
  this->lastModified = lastModified;
}

void ItemcatsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_cats")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_cats");
  Parser *parser;
  foreach (parser, listParser) {
    ItemCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemCats.append(tmp);
  }
  }
  if (responseParser->hasName("last_modified")) {
  lastModified = responseParser->getDateByName("last_modified");
  }

}

