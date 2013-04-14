#include <TaoApiCpp/response/WlbTradeorderGetResponse.h>

QList<WlbOrder> WlbTradeorderGetResponse::getWlbOrderList() const {
  return wlbOrderList;
}
void WlbTradeorderGetResponse::setWlbOrderList (QList<WlbOrder> wlbOrderList) {
  this->wlbOrderList = wlbOrderList;
}

void WlbTradeorderGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("wlb_order_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("wlb_order_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    wlbOrderList.append(tmp);
  }
  }

}

