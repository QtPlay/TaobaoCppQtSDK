#include <TaoApiCpp/response/TradeAmountGetResponse.h>

TradeAmount TradeAmountGetResponse::getTradeAmount() const {
  return tradeAmount;
}
void TradeAmountGetResponse::setTradeAmount (TradeAmount tradeAmount) {
  this->tradeAmount = tradeAmount;
}

void TradeAmountGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade_amount")) {
  tradeAmount.setParser(responseParser->getObjectParser("trade_amount"));
  tradeAmount.parseResponse();
  }

}

