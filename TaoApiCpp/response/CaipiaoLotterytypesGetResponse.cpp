#include <TaoApiCpp/response/CaipiaoLotterytypesGetResponse.h>

QList<LotteryType> CaipiaoLotterytypesGetResponse::getResults() const {
  return results;
}
void CaipiaoLotterytypesGetResponse::setResults (QList<LotteryType> results) {
  this->results = results;
}
qlonglong CaipiaoLotterytypesGetResponse::getTotalResults() const {
  return totalResults;
}
void CaipiaoLotterytypesGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void CaipiaoLotterytypesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("results")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("results");
  Parser *parser;
  foreach (parser, listParser) {
    LotteryType tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    results.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

