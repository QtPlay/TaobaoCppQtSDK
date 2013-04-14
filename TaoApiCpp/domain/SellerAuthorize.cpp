#include <TaoApiCpp/domain/SellerAuthorize.h>
QList<Brand> SellerAuthorize::getBrands() const {
  return brands;
}
void SellerAuthorize::setBrands (QList<Brand> brands) {
  this->brands = brands;
}

QList<ItemCat> SellerAuthorize::getItemCats() const {
  return itemCats;
}
void SellerAuthorize::setItemCats (QList<ItemCat> itemCats) {
  this->itemCats = itemCats;
}

QList<ItemCat> SellerAuthorize::getXinpinItemCats() const {
  return xinpinItemCats;
}
void SellerAuthorize::setXinpinItemCats (QList<ItemCat> xinpinItemCats) {
  this->xinpinItemCats = xinpinItemCats;
}


void SellerAuthorize::parseResponse() {
  if (responseParser->hasName("brands")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("brands");
  Parser *parser;
  foreach (parser, listParser) {
    Brand tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    brands.append(tmp);
  }
  }
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
  if (responseParser->hasName("xinpin_item_cats")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("xinpin_item_cats");
  Parser *parser;
  foreach (parser, listParser) {
    ItemCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    xinpinItemCats.append(tmp);
  }
  }

}

