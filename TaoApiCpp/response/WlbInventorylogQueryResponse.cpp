#include <TaoApiCpp/response/WlbInventorylogQueryResponse.h>

QList<WlbItemInventoryLog> WlbInventorylogQueryResponse::getInventoryLogList() const {
  return inventoryLogList;
}
void WlbInventorylogQueryResponse::setInventoryLogList (QList<WlbItemInventoryLog> inventoryLogList) {
  this->inventoryLogList = inventoryLogList;
}
qlonglong WlbInventorylogQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbInventorylogQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbInventorylogQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("inventory_log_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("inventory_log_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbItemInventoryLog tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inventoryLogList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

