#include <TaoApiCpp/response/TradeShippingaddressUpdateResponse.h>

Trade TradeShippingaddressUpdateResponse::getTrade() const {
  return trade;
}
void TradeShippingaddressUpdateResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeShippingaddressUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

