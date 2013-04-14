#include <TaoApiCpp/response/ItemsListGetResponse.h>

QList<Item> ItemsListGetResponse::getItems() const {
  return items;
}
void ItemsListGetResponse::setItems (QList<Item> items) {
  this->items = items;
}

void ItemsListGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("items");
  Parser *parser;
  foreach (parser, listParser) {
    Item tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    items.append(tmp);
  }
  }

}

