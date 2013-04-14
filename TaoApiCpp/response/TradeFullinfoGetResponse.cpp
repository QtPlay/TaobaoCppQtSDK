#include <TaoApiCpp/response/TradeFullinfoGetResponse.h>

Trade TradeFullinfoGetResponse::getTrade() const {
  return trade;
}
void TradeFullinfoGetResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeFullinfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

