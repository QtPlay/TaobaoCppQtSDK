#include <TaoApiCpp/response/ItemsOnsaleGetResponse.h>

QList<Item> ItemsOnsaleGetResponse::getItems() const {
  return items;
}
void ItemsOnsaleGetResponse::setItems (QList<Item> items) {
  this->items = items;
}
qlonglong ItemsOnsaleGetResponse::getTotalResults() const {
  return totalResults;
}
void ItemsOnsaleGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void ItemsOnsaleGetResponse::parseNormalResponse() {
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

