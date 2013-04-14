#include <TaoApiCpp/response/TradesSoldIncrementGetResponse.h>

bool TradesSoldIncrementGetResponse::getHasNext() const {
  return hasNext;
}
void TradesSoldIncrementGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
qlonglong TradesSoldIncrementGetResponse::getTotalResults() const {
  return totalResults;
}
void TradesSoldIncrementGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}
QList<Trade> TradesSoldIncrementGetResponse::getTrades() const {
  return trades;
}
void TradesSoldIncrementGetResponse::setTrades (QList<Trade> trades) {
  this->trades = trades;
}

void TradesSoldIncrementGetResponse::parseNormalResponse() {
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

