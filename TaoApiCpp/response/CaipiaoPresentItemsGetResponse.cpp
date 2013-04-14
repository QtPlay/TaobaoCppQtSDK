#include <TaoApiCpp/response/CaipiaoPresentItemsGetResponse.h>

QList<LotteryWangcaiPresent> CaipiaoPresentItemsGetResponse::getResults() const {
  return results;
}
void CaipiaoPresentItemsGetResponse::setResults (QList<LotteryWangcaiPresent> results) {
  this->results = results;
}
qlonglong CaipiaoPresentItemsGetResponse::getTotalResults() const {
  return totalResults;
}
void CaipiaoPresentItemsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void CaipiaoPresentItemsGetResponse::parseNormalResponse() {
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

