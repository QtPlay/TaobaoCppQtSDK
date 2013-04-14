#include <TaoApiCpp/response/SimbaInsightWordsbaseGetResponse.h>

QList<INWordBase> SimbaInsightWordsbaseGetResponse::getInWordBases() const {
  return inWordBases;
}
void SimbaInsightWordsbaseGetResponse::setInWordBases (QList<INWordBase> inWordBases) {
  this->inWordBases = inWordBases;
}

void SimbaInsightWordsbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("in_word_bases")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_word_bases");
  Parser *parser;
  foreach (parser, listParser) {
    INWordBase tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inWordBases.append(tmp);
  }
  }

}

