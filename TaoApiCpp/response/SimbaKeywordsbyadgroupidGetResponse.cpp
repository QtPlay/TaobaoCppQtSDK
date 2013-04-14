#include <TaoApiCpp/response/SimbaKeywordsbyadgroupidGetResponse.h>

QList<Keyword> SimbaKeywordsbyadgroupidGetResponse::getKeywords() const {
  return keywords;
}
void SimbaKeywordsbyadgroupidGetResponse::setKeywords (QList<Keyword> keywords) {
  this->keywords = keywords;
}

void SimbaKeywordsbyadgroupidGetResponse::parseNormalResponse() {
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

