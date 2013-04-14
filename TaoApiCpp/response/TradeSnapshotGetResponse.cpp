#include <TaoApiCpp/response/TradeSnapshotGetResponse.h>

Trade TradeSnapshotGetResponse::getTrade() const {
  return trade;
}
void TradeSnapshotGetResponse::setTrade (Trade trade) {
  this->trade = trade;
}

void TradeSnapshotGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("trade")) {
  trade.setParser(responseParser->getObjectParser("trade"));
  trade.parseResponse();
  }

}

