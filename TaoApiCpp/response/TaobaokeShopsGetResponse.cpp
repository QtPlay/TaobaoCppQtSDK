#include <TaoApiCpp/response/TaobaokeShopsGetResponse.h>

QList<TaobaokeShop> TaobaokeShopsGetResponse::getTaobaokeShops() const {
  return taobaokeShops;
}
void TaobaokeShopsGetResponse::setTaobaokeShops (QList<TaobaokeShop> taobaokeShops) {
  this->taobaokeShops = taobaokeShops;
}
qlonglong TaobaokeShopsGetResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeShopsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeShopsGetResponse::parseNormalResponse() {
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

