#include <TaoApiCpp/response/TradeConfirmfeeGetResponse.h>

TradeConfirmFee TradeConfirmfeeGetResponse::getTradeConfirmFee() const {
  return tradeConfirmFee;
}
void TradeConfirmfeeGetResponse::setTradeConfirmFee (TradeConfirmFee tradeConfirmFee) {
  this->tradeConfirmFee = tradeConfirmFee;
}

void TradeConfirmfeeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade_confirm_fee")) {
  tradeConfirmFee.setParser(responseParser->getObjectParser("trade_confirm_fee"));
  tradeConfirmFee.parseResponse();
  }

}

