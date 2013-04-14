#include <TaoApiCpp/response/TradesSoldIncrementvGetResponse.h>

bool TradesSoldIncrementvGetResponse::getHasNext() const {
  return hasNext;
}
void TradesSoldIncrementvGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
qlonglong TradesSoldIncrementvGetResponse::getTotalResults() const {
  return totalResults;
}
void TradesSoldIncrementvGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}
QList<Trade> TradesSoldIncrementvGetResponse::getTrades() const {
  return trades;
}
void TradesSoldIncrementvGetResponse::setTrades (QList<Trade> trades) {
  this->trades = trades;
}

void TradesSoldIncrementvGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }
  if (responseParser->hasName("trades")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("trades");
  Parser *parser;
  foreach (parser, listParser) {
    Trade tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    trades.append(tmp);
  }
  }

}

