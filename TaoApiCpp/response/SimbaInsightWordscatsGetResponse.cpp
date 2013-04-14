#include <TaoApiCpp/response/SimbaInsightWordscatsGetResponse.h>

QList<INWordCategory> SimbaInsightWordscatsGetResponse::getInWordCategories() const {
  return inWordCategories;
}
void SimbaInsightWordscatsGetResponse::setInWordCategories (QList<INWordCategory> inWordCategories) {
  this->inWordCategories = inWordCategories;
}

void SimbaInsightWordscatsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("in_word_categories")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_word_categories");
  Parser *parser;
  foreach (parser, listParser) {
    INWordCategory tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inWordCategories.append(tmp);
  }
  }

}

