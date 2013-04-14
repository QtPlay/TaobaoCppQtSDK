#include <TaoApiCpp/response/SimbaCreativesGetResponse.h>

QList<Creative> SimbaCreativesGetResponse::getCreatives() const {
  return creatives;
}
void SimbaCreativesGetResponse::setCreatives (QList<Creative> creatives) {
  this->creatives = creatives;
}

void SimbaCreativesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("creatives")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("creatives");
  Parser *parser;
  foreach (parser, listParser) {
    Creative tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    creatives.append(tmp);
  }
  }

}

