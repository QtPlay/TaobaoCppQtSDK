#include <TaoApiCpp/response/WlbTmsorderQueryResponse.h>

QList<WlbTmsOrder> WlbTmsorderQueryResponse::getTmsOrderList() const {
  return tmsOrderList;
}
void WlbTmsorderQueryResponse::setTmsOrderList (QList<WlbTmsOrder> tmsOrderList) {
  this->tmsOrderList = tmsOrderList;
}
qlonglong WlbTmsorderQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbTmsorderQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbTmsorderQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("tms_order_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("tms_order_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbTmsOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tmsOrderList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

