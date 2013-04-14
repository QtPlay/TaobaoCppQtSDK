#include <TaoApiCpp/response/ScitemMapQueryResponse.h>

QList<ScItemMap> ScitemMapQueryResponse::getScItemMaps() const {
  return scItemMaps;
}
void ScitemMapQueryResponse::setScItemMaps (QList<ScItemMap> scItemMaps) {
  this->scItemMaps = scItemMaps;
}

void ScitemMapQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sc_item_maps")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("sc_item_maps");
  Parser *parser;
  foreach (parser, listParser) {
    ScItemMap tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    scItemMaps.append(tmp);
  }
  }

}

