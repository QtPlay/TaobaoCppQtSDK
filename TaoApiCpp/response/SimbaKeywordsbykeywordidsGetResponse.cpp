#include <TaoApiCpp/response/SimbaKeywordsbykeywordidsGetResponse.h>

QList<Keyword> SimbaKeywordsbykeywordidsGetResponse::getKeywords() const {
  return keywords;
}
void SimbaKeywordsbykeywordidsGetResponse::setKeywords (QList<Keyword> keywords) {
  this->keywords = keywords;
}

void SimbaKeywordsbykeywordidsGetResponse::parseNormalResponse() {
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

