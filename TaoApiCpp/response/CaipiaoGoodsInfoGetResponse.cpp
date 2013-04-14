#include <TaoApiCpp/response/CaipiaoGoodsInfoGetResponse.h>

QList<LotteryWangcaiSellerGoodsInfo> CaipiaoGoodsInfoGetResponse::getResults() const {
  return results;
}
void CaipiaoGoodsInfoGetResponse::setResults (QList<LotteryWangcaiSellerGoodsInfo> results) {
  this->results = results;
}
qlonglong CaipiaoGoodsInfoGetResponse::getTotalResults() const {
  return totalResults;
}
void CaipiaoGoodsInfoGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void CaipiaoGoodsInfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("results")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("results");
  Parser *parser;
  foreach (parser, listParser) {
    LotteryWangcaiSellerGoodsInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    results.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

