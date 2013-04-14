#include <TaoApiCpp/response/ElectedItemsSearchResponse.h>

QList<SelectedItem> ElectedItemsSearchResponse::getItemList() const {
  return itemList;
}
void ElectedItemsSearchResponse::setItemList (QList<SelectedItem> itemList) {
  this->itemList = itemList;
}

void ElectedItemsSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_list");
  Parser *parser;
  foreach (parser, listParser) {
    SelectedItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemList.append(tmp);
  }
  }

}

