#include <TaoApiCpp/response/TradeMemoAddResponse.h>

Trade TradeMemoAddResponse::getTrade() const {
  return trade;
}
void TradeMemoAddResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeMemoAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

