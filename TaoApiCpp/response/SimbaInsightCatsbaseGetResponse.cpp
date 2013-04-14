#include <TaoApiCpp/response/SimbaInsightCatsbaseGetResponse.h>

QList<INCategoryBase> SimbaInsightCatsbaseGetResponse::getInCategoryBases() const {
  return inCategoryBases;
}
void SimbaInsightCatsbaseGetResponse::setInCategoryBases (QList<INCategoryBase> inCategoryBases) {
  this->inCategoryBases = inCategoryBases;
}

void SimbaInsightCatsbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("in_category_bases")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_category_bases");
  Parser *parser;
  foreach (parser, listParser) {
    INCategoryBase tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inCategoryBases.append(tmp);
  }
  }

}

