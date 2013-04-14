#include <TaoApiCpp/response/CaipiaoPresentStatGetResponse.h>

QList<LotteryWangcaiPresentStat> CaipiaoPresentStatGetResponse::getResults() const {
  return results;
}
void CaipiaoPresentStatGetResponse::setResults (QList<LotteryWangcaiPresentStat> results) {
  this->results = results;
}
qlonglong CaipiaoPresentStatGetResponse::getTotalResults() const {
  return totalResults;
}
void CaipiaoPresentStatGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void CaipiaoPresentStatGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("results")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("results");
  Parser *parser;
  foreach (parser, listParser) {
    LotteryWangcaiPresentStat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    results.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

