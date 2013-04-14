#include <TaoApiCpp/response/SimbaToolsItemsTopGetResponse.h>

QList<RankedItem> SimbaToolsItemsTopGetResponse::getRankeditems() const {
  return rankeditems;
}
void SimbaToolsItemsTopGetResponse::setRankeditems (QList<RankedItem> rankeditems) {
  this->rankeditems = rankeditems;
}

void SimbaToolsItemsTopGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rankeditems")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("rankeditems");
  Parser *parser;
  foreach (parser, listParser) {
    RankedItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    rankeditems.append(tmp);
  }
  }

}

