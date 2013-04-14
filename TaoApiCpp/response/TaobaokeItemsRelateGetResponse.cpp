#include <TaoApiCpp/response/TaobaokeItemsRelateGetResponse.h>

QList<TaobaokeItem> TaobaokeItemsRelateGetResponse::getTaobaokeItems() const {
  return taobaokeItems;
}
void TaobaokeItemsRelateGetResponse::setTaobaokeItems (QList<TaobaokeItem> taobaokeItems) {
  this->taobaokeItems = taobaokeItems;
}
qlonglong TaobaokeItemsRelateGetResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeItemsRelateGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeItemsRelateGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("taobaoke_items");
  Parser *parser;
  foreach (parser, listParser) {
    TaobaokeItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    taobaokeItems.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

