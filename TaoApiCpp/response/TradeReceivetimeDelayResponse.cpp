#include <TaoApiCpp/response/TradeReceivetimeDelayResponse.h>

Trade TradeReceivetimeDelayResponse::getTrade() const {
  return trade;
}
void TradeReceivetimeDelayResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeReceivetimeDelayResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

