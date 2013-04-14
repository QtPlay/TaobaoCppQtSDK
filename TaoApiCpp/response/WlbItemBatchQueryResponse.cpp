#include <TaoApiCpp/response/WlbItemBatchQueryResponse.h>

QList<WlbItemBatchInventory> WlbItemBatchQueryResponse::getItemInventoryBatchList() const {
  return itemInventoryBatchList;
}
void WlbItemBatchQueryResponse::setItemInventoryBatchList (QList<WlbItemBatchInventory> itemInventoryBatchList) {
  this->itemInventoryBatchList = itemInventoryBatchList;
}
qlonglong WlbItemBatchQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbItemBatchQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbItemBatchQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_inventory_batch_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_inventory_batch_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbItemBatchInventory tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemInventoryBatchList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

