#include <TaoApiCpp/response/FavoriteSearchResponse.h>

QList<CollectItem> FavoriteSearchResponse::getCollectItems() const {
  return collectItems;
}
void FavoriteSearchResponse::setCollectItems (QList<CollectItem> collectItems) {
  this->collectItems = collectItems;
}
qlonglong FavoriteSearchResponse::getTotalResults() const {
  return totalResults;
}
void FavoriteSearchResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FavoriteSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("collect_items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("collect_items");
  Parser *parser;
  foreach (parser, listParser) {
    CollectItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    collectItems.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

