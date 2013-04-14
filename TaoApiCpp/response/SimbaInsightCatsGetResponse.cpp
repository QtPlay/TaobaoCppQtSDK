#include <TaoApiCpp/response/SimbaInsightCatsGetResponse.h>

QList<INCategoryTop> SimbaInsightCatsGetResponse::getInCategoryTops() const {
  return inCategoryTops;
}
void SimbaInsightCatsGetResponse::setInCategoryTops (QList<INCategoryTop> inCategoryTops) {
  this->inCategoryTops = inCategoryTops;
}

void SimbaInsightCatsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("in_category_tops")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_category_tops");
  Parser *parser;
  foreach (parser, listParser) {
    INCategoryTop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inCategoryTops.append(tmp);
  }
  }

}

