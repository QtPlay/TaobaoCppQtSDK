#include <TaoApiCpp/response/ItemsInventoryGetResponse.h>

QList<Item> ItemsInventoryGetResponse::getItems() const {
  return items;
}
void ItemsInventoryGetResponse::setItems (QList<Item> items) {
  this->items = items;
}
qlonglong ItemsInventoryGetResponse::getTotalResults() const {
  return totalResults;
}
void ItemsInventoryGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void ItemsInventoryGetResponse::parseNormalResponse() {
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
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

