#include <TaoApiCpp/response/TradeGetResponse.h>

Trade TradeGetResponse::getTrade() const {
  return trade;
}
void TradeGetResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

