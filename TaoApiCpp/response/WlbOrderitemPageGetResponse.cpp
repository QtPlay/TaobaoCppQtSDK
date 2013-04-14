#include <TaoApiCpp/response/WlbOrderitemPageGetResponse.h>

QList<WlbOrderItem> WlbOrderitemPageGetResponse::getOrderItemList() const {
  return orderItemList;
}
void WlbOrderitemPageGetResponse::setOrderItemList (QList<WlbOrderItem> orderItemList) {
  this->orderItemList = orderItemList;
}
qlonglong WlbOrderitemPageGetResponse::getTotalCount() const {
  return totalCount;
}
void WlbOrderitemPageGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbOrderitemPageGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("order_item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("order_item_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbOrderItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    orderItemList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

