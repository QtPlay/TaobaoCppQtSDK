#include <TaoApiCpp/response/TaobaokeWidgetItemsConvertResponse.h>

QList<TaobaokeItem> TaobaokeWidgetItemsConvertResponse::getTaobaokeItems() const {
  return taobaokeItems;
}
void TaobaokeWidgetItemsConvertResponse::setTaobaokeItems (QList<TaobaokeItem> taobaokeItems) {
  this->taobaokeItems = taobaokeItems;
}
qlonglong TaobaokeWidgetItemsConvertResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeWidgetItemsConvertResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeWidgetItemsConvertResponse::parseNormalResponse() {
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

