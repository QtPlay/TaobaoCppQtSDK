#include <TaoApiCpp/response/FenxiaoTrademonitorGetResponse.h>

qlonglong FenxiaoTrademonitorGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoTrademonitorGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}
QList<TradeMonitor> FenxiaoTrademonitorGetResponse::getTradeMonitors() const {
  return tradeMonitors;
}
void FenxiaoTrademonitorGetResponse::setTradeMonitors (QList<TradeMonitor> tradeMonitors) {
  this->tradeMonitors = tradeMonitors;
}

void FenxiaoTrademonitorGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }
  if (responseParser->hasName("trade_monitors")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("trade_monitors");
  Parser *parser;
  foreach (parser, listParser) {
    TradeMonitor tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tradeMonitors.append(tmp);
  }
  }

}

