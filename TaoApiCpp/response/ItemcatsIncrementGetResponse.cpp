#include <TaoApiCpp/response/ItemcatsIncrementGetResponse.h>

QList<ItemCat> ItemcatsIncrementGetResponse::getItemCats() const {
  return itemCats;
}
void ItemcatsIncrementGetResponse::setItemCats (QList<ItemCat> itemCats) {
  this->itemCats = itemCats;
}
QList<ItemProp> ItemcatsIncrementGetResponse::getItemProps() const {
  return itemProps;
}
void ItemcatsIncrementGetResponse::setItemProps (QList<ItemProp> itemProps) {
  this->itemProps = itemProps;
}
QList<PropValue> ItemcatsIncrementGetResponse::getPropValues() const {
  return propValues;
}
void ItemcatsIncrementGetResponse::setPropValues (QList<PropValue> propValues) {
  this->propValues = propValues;
}

void ItemcatsIncrementGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_cats")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_cats");
  Parser *parser;
  foreach (parser, listParser) {
    ItemCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemCats.append(tmp);
  }
  }
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
  if (responseParser->hasName("prop_values")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("prop_values");
  Parser *parser;
  foreach (parser, listParser) {
    PropValue tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    propValues.append(tmp);
  }
  }

}

