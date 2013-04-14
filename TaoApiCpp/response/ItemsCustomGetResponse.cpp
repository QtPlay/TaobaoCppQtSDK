#include <TaoApiCpp/response/ItemsCustomGetResponse.h>

QList<Item> ItemsCustomGetResponse::getItems() const {
  return items;
}
void ItemsCustomGetResponse::setItems (QList<Item> items) {
  this->items = items;
}

void ItemsCustomGetResponse::parseNormalResponse() {
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

