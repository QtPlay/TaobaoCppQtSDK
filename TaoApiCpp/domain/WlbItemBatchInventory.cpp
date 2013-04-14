#include <TaoApiCpp/domain/WlbItemBatchInventory.h>
QList<WlbItemBatch> WlbItemBatchInventory::getItemBatch() const {
  return itemBatch;
}
void WlbItemBatchInventory::setItemBatch (QList<WlbItemBatch> itemBatch) {
  this->itemBatch = itemBatch;
}

qlonglong WlbItemBatchInventory::getItemId() const {
  return itemId;
}
void WlbItemBatchInventory::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QList<WlbItemInventory> WlbItemBatchInventory::getItemInventorys() const {
  return itemInventorys;
}
void WlbItemBatchInventory::setItemInventorys (QList<WlbItemInventory> itemInventorys) {
  this->itemInventorys = itemInventorys;
}

qlonglong WlbItemBatchInventory::getTotalQuantity() const {
  return totalQuantity;
}
void WlbItemBatchInventory::setTotalQuantity (qlonglong totalQuantity) {
  this->totalQuantity = totalQuantity;
}


void WlbItemBatchInventory::parseResponse() {
  if (responseParser->hasName("item_batch")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_batch");
  Parser *parser;
  foreach (parser, listParser) {
    WlbItemBatch tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemBatch.append(tmp);
  }
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("item_inventorys")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_inventorys");
  Parser *parser;
  foreach (parser, listParser) {
    WlbItemInventory tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemInventorys.append(tmp);
  }
  }
  if (responseParser->hasName("total_quantity")) {
  totalQuantity = responseParser->getNumByName("total_quantity");
  }

}

