#include <TaoApiCpp/response/ItempropsGetResponse.h>

QList<ItemProp> ItempropsGetResponse::getItemProps() const {
  return itemProps;
}
void ItempropsGetResponse::setItemProps (QList<ItemProp> itemProps) {
  this->itemProps = itemProps;
}
QDateTime ItempropsGetResponse::getLastModified() const {
  return lastModified;
}
void ItempropsGetResponse::setLastModified (QDateTime lastModified) {
  this->lastModified = lastModified;
}

void ItempropsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_props")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_props");
  Parser *parser;
  foreach (parser, listParser) {
    ItemProp tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemProps.append(tmp);
  }
  }
  if (responseParser->hasName("last_modified")) {
  lastModified = responseParser->getDateByName("last_modified");
  }

}

