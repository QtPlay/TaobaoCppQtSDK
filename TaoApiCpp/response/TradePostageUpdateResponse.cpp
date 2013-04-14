#include <TaoApiCpp/response/TradePostageUpdateResponse.h>

Trade TradePostageUpdateResponse::getTrade() const {
  return trade;
}
void TradePostageUpdateResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradePostageUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

