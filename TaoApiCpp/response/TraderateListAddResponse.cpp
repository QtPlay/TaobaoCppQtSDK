#include <TaoApiCpp/response/TraderateListAddResponse.h>

TradeRate TraderateListAddResponse::getTradeRate() const {
  return tradeRate;
}
void TraderateListAddResponse::setTradeRate (TradeRate tradeRate) {
  this->tradeRate = tradeRate;
}

void TraderateListAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade_rate")) {
  tradeRate.setParser(responseParser->getObjectParser("trade_rate"));
  tradeRate.parseResponse();
  }

}

