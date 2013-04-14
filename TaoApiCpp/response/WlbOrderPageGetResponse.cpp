#include <TaoApiCpp/response/WlbOrderPageGetResponse.h>

QList<WlbOrder> WlbOrderPageGetResponse::getOrderList() const {
  return orderList;
}
void WlbOrderPageGetResponse::setOrderList (QList<WlbOrder> orderList) {
  this->orderList = orderList;
}
qlonglong WlbOrderPageGetResponse::getTotalCount() const {
  return totalCount;
}
void WlbOrderPageGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbOrderPageGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("order_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("order_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    orderList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

