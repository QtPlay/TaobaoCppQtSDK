#include <TaoApiCpp/response/TradeCloseResponse.h>

Trade TradeCloseResponse::getTrade() const {
  return trade;
}
void TradeCloseResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeCloseResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

