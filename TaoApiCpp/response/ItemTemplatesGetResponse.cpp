#include <TaoApiCpp/response/ItemTemplatesGetResponse.h>

QList<ItemTemplate> ItemTemplatesGetResponse::getItemTemplateList() const {
  return itemTemplateList;
}
void ItemTemplatesGetResponse::setItemTemplateList (QList<ItemTemplate> itemTemplateList) {
  this->itemTemplateList = itemTemplateList;
}

void ItemTemplatesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_template_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_template_list");
  Parser *parser;
  foreach (parser, listParser) {
    ItemTemplate tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemTemplateList.append(tmp);
  }
  }

}

