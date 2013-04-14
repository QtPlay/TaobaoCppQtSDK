#include <TaoApiCpp/response/TradesSoldGetResponse.h>

bool TradesSoldGetResponse::getHasNext() const {
  return hasNext;
}
void TradesSoldGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
qlonglong TradesSoldGetResponse::getTotalResults() const {
  return totalResults;
}
void TradesSoldGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}
QList<Trade> TradesSoldGetResponse::getTrades() const {
  return trades;
}
void TradesSoldGetResponse::setTrades (QList<Trade> trades) {
  this->trades = trades;
}

void TradesSoldGetResponse::parseNormalResponse() {
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

