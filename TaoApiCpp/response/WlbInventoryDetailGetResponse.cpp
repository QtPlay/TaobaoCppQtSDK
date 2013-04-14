#include <TaoApiCpp/response/WlbInventoryDetailGetResponse.h>

QList<WlbInventory> WlbInventoryDetailGetResponse::getInventoryList() const {
  return inventoryList;
}
void WlbInventoryDetailGetResponse::setInventoryList (QList<WlbInventory> inventoryList) {
  this->inventoryList = inventoryList;
}
qlonglong WlbInventoryDetailGetResponse::getItemId() const {
  return itemId;
}
void WlbInventoryDetailGetResponse::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

void WlbInventoryDetailGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("inventory_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("inventory_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbInventory tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inventoryList.append(tmp);
  }
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }

}

