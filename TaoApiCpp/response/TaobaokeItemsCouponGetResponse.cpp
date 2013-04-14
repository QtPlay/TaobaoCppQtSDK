#include <TaoApiCpp/response/TaobaokeItemsCouponGetResponse.h>

QList<TaobaokeItem> TaobaokeItemsCouponGetResponse::getTaobaokeItems() const {
  return taobaokeItems;
}
void TaobaokeItemsCouponGetResponse::setTaobaokeItems (QList<TaobaokeItem> taobaokeItems) {
  this->taobaokeItems = taobaokeItems;
}
qlonglong TaobaokeItemsCouponGetResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeItemsCouponGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeItemsCouponGetResponse::parseNormalResponse() {
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

