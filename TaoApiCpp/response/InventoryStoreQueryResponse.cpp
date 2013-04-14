#include <TaoApiCpp/response/InventoryStoreQueryResponse.h>

QList<Store> InventoryStoreQueryResponse::getStoreList() const {
  return storeList;
}
void InventoryStoreQueryResponse::setStoreList (QList<Store> storeList) {
  this->storeList = storeList;
}

void InventoryStoreQueryResponse::parseNormalResponse() {
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

