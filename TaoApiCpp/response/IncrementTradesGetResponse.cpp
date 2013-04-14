#include <TaoApiCpp/response/IncrementTradesGetResponse.h>

QList<NotifyTrade> IncrementTradesGetResponse::getNotifyTrades() const {
  return notifyTrades;
}
void IncrementTradesGetResponse::setNotifyTrades (QList<NotifyTrade> notifyTrades) {
  this->notifyTrades = notifyTrades;
}
qlonglong IncrementTradesGetResponse::getTotalResults() const {
  return totalResults;
}
void IncrementTradesGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void IncrementTradesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("notify_trades")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("notify_trades");
  Parser *parser;
  foreach (parser, listParser) {
    NotifyTrade tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    notifyTrades.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

