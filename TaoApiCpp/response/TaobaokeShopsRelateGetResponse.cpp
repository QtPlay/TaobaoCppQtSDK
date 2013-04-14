#include <TaoApiCpp/response/TaobaokeShopsRelateGetResponse.h>

QList<TaobaokeShop> TaobaokeShopsRelateGetResponse::getTaobaokeShops() const {
  return taobaokeShops;
}
void TaobaokeShopsRelateGetResponse::setTaobaokeShops (QList<TaobaokeShop> taobaokeShops) {
  this->taobaokeShops = taobaokeShops;
}
qlonglong TaobaokeShopsRelateGetResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeShopsRelateGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeShopsRelateGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_shops")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("taobaoke_shops");
  Parser *parser;
  foreach (parser, listParser) {
    TaobaokeShop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    taobaokeShops.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

