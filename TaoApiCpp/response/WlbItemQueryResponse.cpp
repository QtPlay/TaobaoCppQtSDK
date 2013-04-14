#include <TaoApiCpp/response/WlbItemQueryResponse.h>

QList<WlbItem> WlbItemQueryResponse::getItemList() const {
  return itemList;
}
void WlbItemQueryResponse::setItemList (QList<WlbItem> itemList) {
  this->itemList = itemList;
}
qlonglong WlbItemQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbItemQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbItemQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

