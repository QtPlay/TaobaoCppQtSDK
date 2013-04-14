#include <TaoApiCpp/response/SimbaInsightCatsanalysisGetResponse.h>

QList<INCategoryAnalysis> SimbaInsightCatsanalysisGetResponse::getInCategoryAnalyses() const {
  return inCategoryAnalyses;
}
void SimbaInsightCatsanalysisGetResponse::setInCategoryAnalyses (QList<INCategoryAnalysis> inCategoryAnalyses) {
  this->inCategoryAnalyses = inCategoryAnalyses;
}

void SimbaInsightCatsanalysisGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("in_category_analyses")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_category_analyses");
  Parser *parser;
  foreach (parser, listParser) {
    INCategoryAnalysis tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inCategoryAnalyses.append(tmp);
  }
  }

}

