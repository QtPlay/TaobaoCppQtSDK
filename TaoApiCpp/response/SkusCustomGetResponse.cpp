#include <TaoApiCpp/response/SkusCustomGetResponse.h>

QList<Sku> SkusCustomGetResponse::getSkus() const {
  return skus;
}
void SkusCustomGetResponse::setSkus (QList<Sku> skus) {
  this->skus = skus;
}

void SkusCustomGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("skus")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("skus");
  Parser *parser;
  foreach (parser, listParser) {
    Sku tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    skus.append(tmp);
  }
  }

}

