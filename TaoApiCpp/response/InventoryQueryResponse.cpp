#include <TaoApiCpp/response/InventoryQueryResponse.h>

QList<InventorySum> InventoryQueryResponse::getItemInventorys() const {
  return itemInventorys;
}
void InventoryQueryResponse::setItemInventorys (QList<InventorySum> itemInventorys) {
  this->itemInventorys = itemInventorys;
}
QList<TipInfo> InventoryQueryResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryQueryResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_inventorys")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_inventorys");
  Parser *parser;
  foreach (parser, listParser) {
    InventorySum tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemInventorys.append(tmp);
  }
  }
  if (responseParser->hasName("tip_infos")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("tip_infos");
  Parser *parser;
  foreach (parser, listParser) {
    TipInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tipInfos.append(tmp);
  }
  }

}

