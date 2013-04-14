#include <TaoApiCpp/response/TraderateAddResponse.h>

TradeRate TraderateAddResponse::getTradeRate() const {
  return tradeRate;
}
void TraderateAddResponse::setTradeRate (TradeRate tradeRate) {
  this->tradeRate = tradeRate;
}

void TraderateAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade_rate")) {
  tradeRate.setParser(responseParser->getObjectParser("trade_rate"));
  tradeRate.parseResponse();
  }

}

