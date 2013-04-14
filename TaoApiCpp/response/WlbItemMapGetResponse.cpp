#include <TaoApiCpp/response/WlbItemMapGetResponse.h>

QList<OutEntityItem> WlbItemMapGetResponse::getOutEntityItemList() const {
  return outEntityItemList;
}
void WlbItemMapGetResponse::setOutEntityItemList (QList<OutEntityItem> outEntityItemList) {
  this->outEntityItemList = outEntityItemList;
}

void WlbItemMapGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("out_entity_item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("out_entity_item_list");
  Parser *parser;
  foreach (parser, listParser) {
    OutEntityItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    outEntityItemList.append(tmp);
  }
  }

}

