#include <TaoApiCpp/response/TradeOrderskuUpdateResponse.h>

Order TradeOrderskuUpdateResponse::getOrder() const {
  return order;
}
void TradeOrderskuUpdateResponse::setOrder (Order order) {
  this->order = order;
}

void TradeOrderskuUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("order")) {
  order.setParser(responseParser->getObjectParser("order"));
  order.parseResponse();
  }

}

