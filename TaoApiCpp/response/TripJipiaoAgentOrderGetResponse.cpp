#include <TaoApiCpp/response/TripJipiaoAgentOrderGetResponse.h>

QList<AtOrder> TripJipiaoAgentOrderGetResponse::getOrders() const {
  return orders;
}
void TripJipiaoAgentOrderGetResponse::setOrders (QList<AtOrder> orders) {
  this->orders = orders;
}

void TripJipiaoAgentOrderGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("orders");
  Parser *parser;
  foreach (parser, listParser) {
    AtOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    orders.append(tmp);
  }
  }

}

