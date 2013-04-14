#include <TaoApiCpp/response/SimbaKeywordsDeleteResponse.h>

QList<Keyword> SimbaKeywordsDeleteResponse::getKeywords() const {
  return keywords;
}
void SimbaKeywordsDeleteResponse::setKeywords (QList<Keyword> keywords) {
  this->keywords = keywords;
}

void SimbaKeywordsDeleteResponse::parseNormalResponse() {
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

