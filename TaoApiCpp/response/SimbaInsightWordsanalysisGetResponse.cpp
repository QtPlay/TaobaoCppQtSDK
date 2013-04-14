#include <TaoApiCpp/response/SimbaInsightWordsanalysisGetResponse.h>

QList<INWordAnalysis> SimbaInsightWordsanalysisGetResponse::getInWordAnalyses() const {
  return inWordAnalyses;
}
void SimbaInsightWordsanalysisGetResponse::setInWordAnalyses (QList<INWordAnalysis> inWordAnalyses) {
  this->inWordAnalyses = inWordAnalyses;
}

void SimbaInsightWordsanalysisGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("in_word_analyses")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_word_analyses");
  Parser *parser;
  foreach (parser, listParser) {
    INWordAnalysis tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inWordAnalyses.append(tmp);
  }
  }

}

