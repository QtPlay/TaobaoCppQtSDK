#include <TaoApiCpp/response/SimbaKeywordsPricevonSetResponse.h>

QList<Keyword> SimbaKeywordsPricevonSetResponse::getKeywords() const {
  return keywords;
}
void SimbaKeywordsPricevonSetResponse::setKeywords (QList<Keyword> keywords) {
  this->keywords = keywords;
}

void SimbaKeywordsPricevonSetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("keywords")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("keywords");
  Parser *parser;
  foreach (parser, listParser) {
    Keyword tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    keywords.append(tmp);
  }
  }

}

