#include <TaoApiCpp/response/ItemSkusGetResponse.h>

QList<Sku> ItemSkusGetResponse::getSkus() const {
  return skus;
}
void ItemSkusGetResponse::setSkus (QList<Sku> skus) {
  this->skus = skus;
}

void ItemSkusGetResponse::parseNormalResponse() {
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

