#include <TaoApiCpp/response/SimbaKeywordsvonAddResponse.h>

QList<Keyword> SimbaKeywordsvonAddResponse::getKeywords() const {
  return keywords;
}
void SimbaKeywordsvonAddResponse::setKeywords (QList<Keyword> keywords) {
  this->keywords = keywords;
}

void SimbaKeywordsvonAddResponse::parseNormalResponse() {
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

