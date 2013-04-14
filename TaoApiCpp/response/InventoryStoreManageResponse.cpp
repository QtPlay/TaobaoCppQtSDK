#include <TaoApiCpp/response/InventoryStoreManageResponse.h>

QList<Store> InventoryStoreManageResponse::getStoreList() const {
  return storeList;
}
void InventoryStoreManageResponse::setStoreList (QList<Store> storeList) {
  this->storeList = storeList;
}

void InventoryStoreManageResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("store_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("store_list");
  Parser *parser;
  foreach (parser, listParser) {
    Store tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    storeList.append(tmp);
  }
  }

}

