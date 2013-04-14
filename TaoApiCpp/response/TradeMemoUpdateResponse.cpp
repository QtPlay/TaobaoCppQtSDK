#include <TaoApiCpp/response/TradeMemoUpdateResponse.h>

Trade TradeMemoUpdateResponse::getTrade() const {
  return trade;
}
void TradeMemoUpdateResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeMemoUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

