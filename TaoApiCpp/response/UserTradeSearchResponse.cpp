#include <TaoApiCpp/response/UserTradeSearchResponse.h>

QString UserTradeSearchResponse::getTotalPages() const {
  return totalPages;
}
void UserTradeSearchResponse::setTotalPages (QString totalPages) {
  this->totalPages = totalPages;
}
QString UserTradeSearchResponse::getTotalResults() const {
  return totalResults;
}
void UserTradeSearchResponse::setTotalResults (QString totalResults) {
  this->totalResults = totalResults;
}
QList<TradeRecord> UserTradeSearchResponse::getTradeRecords() const {
  return tradeRecords;
}
void UserTradeSearchResponse::setTradeRecords (QList<TradeRecord> tradeRecords) {
  this->tradeRecords = tradeRecords;
}

void UserTradeSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("total_pages")) {
  totalPages = responseParser->getStrByName("total_pages");
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getStrByName("total_results");
  }
  if (responseParser->hasName("trade_records")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("trade_records");
  Parser *parser;
  foreach (parser, listParser) {
    TradeRecord tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tradeRecords.append(tmp);
  }
  }

}

