#include <TaoApiCpp/response/ItemAnchorGetResponse.h>

QList<IdsModule> ItemAnchorGetResponse::getAnchorModules() const {
  return anchorModules;
}
void ItemAnchorGetResponse::setAnchorModules (QList<IdsModule> anchorModules) {
  this->anchorModules = anchorModules;
}
qlonglong ItemAnchorGetResponse::getTotalResults() const {
  return totalResults;
}
void ItemAnchorGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void ItemAnchorGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("anchor_modules")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("anchor_modules");
  Parser *parser;
  foreach (parser, listParser) {
    IdsModule tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    anchorModules.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

