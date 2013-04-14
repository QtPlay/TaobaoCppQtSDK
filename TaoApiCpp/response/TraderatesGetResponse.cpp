#include <TaoApiCpp/response/TraderatesGetResponse.h>

bool TraderatesGetResponse::getHasNext() const {
  return hasNext;
}
void TraderatesGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
qlonglong TraderatesGetResponse::getTotalResults() const {
  return totalResults;
}
void TraderatesGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}
QList<TradeRate> TraderatesGetResponse::getTradeRates() const {
  return tradeRates;
}
void TraderatesGetResponse::setTradeRates (QList<TradeRate> tradeRates) {
  this->tradeRates = tradeRates;
}

void TraderatesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }
  if (responseParser->hasName("trade_rates")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("trade_rates");
  Parser *parser;
  foreach (parser, listParser) {
    TradeRate tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tradeRates.append(tmp);
  }
  }

}

