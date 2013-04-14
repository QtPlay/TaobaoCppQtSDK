#include <TaoApiCpp/response/TaobaokeItemsDetailGetResponse.h>

QList<TaobaokeItemDetail> TaobaokeItemsDetailGetResponse::getTaobaokeItemDetails() const {
  return taobaokeItemDetails;
}
void TaobaokeItemsDetailGetResponse::setTaobaokeItemDetails (QList<TaobaokeItemDetail> taobaokeItemDetails) {
  this->taobaokeItemDetails = taobaokeItemDetails;
}
qlonglong TaobaokeItemsDetailGetResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeItemsDetailGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeItemsDetailGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_item_details")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("taobaoke_item_details");
  Parser *parser;
  foreach (parser, listParser) {
    TaobaokeItemDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    taobaokeItemDetails.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

