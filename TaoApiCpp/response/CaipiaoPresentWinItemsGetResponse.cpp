#include <TaoApiCpp/response/CaipiaoPresentWinItemsGetResponse.h>

QList<LotteryWangcaiPresent> CaipiaoPresentWinItemsGetResponse::getResults() const {
  return results;
}
void CaipiaoPresentWinItemsGetResponse::setResults (QList<LotteryWangcaiPresent> results) {
  this->results = results;
}
qlonglong CaipiaoPresentWinItemsGetResponse::getTotalResults() const {
  return totalResults;
}
void CaipiaoPresentWinItemsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void CaipiaoPresentWinItemsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("results")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("results");
  Parser *parser;
  foreach (parser, listParser) {
    LotteryWangcaiPresent tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    results.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

