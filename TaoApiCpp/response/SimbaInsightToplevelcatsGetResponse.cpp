#include <TaoApiCpp/response/SimbaInsightToplevelcatsGetResponse.h>

QList<INCategoryTop> SimbaInsightToplevelcatsGetResponse::getInCategoryTops() const {
  return inCategoryTops;
}
void SimbaInsightToplevelcatsGetResponse::setInCategoryTops (QList<INCategoryTop> inCategoryTops) {
  this->inCategoryTops = inCategoryTops;
}

void SimbaInsightToplevelcatsGetResponse::parseNormalResponse() {
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

